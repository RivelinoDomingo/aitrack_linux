#ifndef _DEBUG
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#endif // !_DEBUG


#include <QtWidgets/QApplication>
#include "view/WindowMain.h"
#include "presenter/presenter.h"
#include "model/Config.h"
#include <omp.h>
#include "tracker/TrackerFactory.h"

#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"


#include "model/UpdateChecker.h"
#include <cstdlib>
#include <locale>
#include <codecvt>


int main(int argc, char *argv[])
{

#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif


    
    std::shared_ptr<spdlog::logger> logger;
    try
    {
        logger = spdlog::basic_logger_mt("aitrack", "log.txt", true);
        logger->flush_on(spdlog::level::info);
    }
    catch (const spdlog::spdlog_ex& ex)
    {
        std::cout << "Log init failed: " << ex.what() << std::endl;
    }


    logger->info(" ----------  AITRACK LOG   ----------");

    auto conf_mgr = std::make_unique<ConfigMgr>("./prefs.ini");
    logger->info("Created/Found prefs.ini");

     // Convertendo std::wstring para std::string
    std::wstring ws = L"ValorWideString"; // Apenas um exemplo
    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
    std::string str = converter.to_bytes(ws);

    auto state = conf_mgr->getConfig();
    if (state.onnx_set_env_threads) {
        std::wstring ws = std::to_wstring(state.onnx_env_threads);
        // SetEnvironmentVariable(LPWSTR(L"OMP_NUM_THREADS"), ws.c_str());
        setenv("OMP_NUM_THREADS", str.c_str(), 1);
    }
    if (state.onnx_set_num_threads) {
        omp_set_num_threads(state.onnx_num_threads);
    }
    if (state.onnx_set_dynamic) {
        omp_set_dynamic(state.onnx_dynamic);
    }

    QApplication app(argc, argv);

    WindowMain w;
    w.show();

    auto t_factory = std::make_unique<TrackerFactory>("./models/");

    Presenter p((IView&)w, std::move(t_factory), std::move(conf_mgr));
    logger->info("App initialized");

    return app.exec();
}
