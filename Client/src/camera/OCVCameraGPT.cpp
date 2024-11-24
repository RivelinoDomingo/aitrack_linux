#include "OCVCamera.h"
#include <stdexcept>
#include <opencv2/opencv.hpp>

OCVCamera::OCVCamera(int width, int height, int fps, int index) :
    Camera(width, height, fps),
    size(0, 0),
    cap(),
    cam_index(index)
{
#ifdef _WIN32
    CV_BACKEND = cv::CAP_DSHOW;
#else
    CV_BACKEND = cv::CAP_V4L2;
#endif

    if (!is_camera_available()) {
        throw std::runtime_error("Nenhuma câmera compatível foi encontrada.");
    }

    this->width = width > 0 ? width : cam_native_width;
    this->height = height > 0 ? height : cam_native_height;
    this->fps = fps >= 30 ? fps : cam_native_fps;

    exposure = -1;
    gain = -1;
    is_valid = true;
}

OCVCamera::~OCVCamera()
{
    stop_camera();
}

bool OCVCamera::is_camera_available()
{
    try {
        cap.open(cam_index, CV_BACKEND);
        if (cap.isOpened()) {
            cv::Mat frame;
            if (cap.read(frame) && !frame.empty()) {
                cam_native_width = static_cast<int>(cap.get(cv::CAP_PROP_FRAME_WIDTH));
                cam_native_height = static_cast<int>(cap.get(cv::CAP_PROP_FRAME_HEIGHT));
                cam_native_fps = std::max(30, static_cast<int>(cap.get(cv::CAP_PROP_FPS)));
                cap.release();
                return true;
            }
        }
    } catch (const std::exception& e) {
        std::cerr << "Erro ao verificar disponibilidade da câmera: " << e.what() << std::endl;
    }

    return false;
}

void OCVCamera::start_camera()
{
    cap.open(cam_index, CV_BACKEND);
    if (!cap.isOpened()) {
        throw std::runtime_error("Nenhuma câmera compatível foi encontrada.");
    }

    cap.set(cv::CAP_PROP_FRAME_WIDTH, this->width);
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, this->height);
    cap.set(cv::CAP_PROP_FPS, this->fps);
}

void OCVCamera::stop_camera()
{
    cap.release();
}

void OCVCamera::get_frame(uint8_t* buffer)
{
    if (!cap.isOpened()) {
        throw std::runtime_error("A câmera não está aberta!");
    }

    cv::Mat frame;
    if (!cap.read(frame) || frame.empty()) {
        throw std::runtime_error("Erro ao capturar o frame da câmera!");
    }

    if (frame.channels() != 3) {
        cv::cvtColor(frame, frame, cv::COLOR_BGR2RGB);
    }

    std::memcpy(buffer, frame.data, frame.total() * frame.elemSize());
}

void OCVCamera::set_settings(CameraSettings& settings)
{
    this->width = settings.width > 0 ? settings.width : this->cam_native_width;
    this->height = settings.height > 0 ? settings.height : this->cam_native_height;
    this->fps = settings.fps >= 30 ? settings.fps : this->cam_native_fps;

    if (cap.isOpened()) {
        cap.set(cv::CAP_PROP_FRAME_WIDTH, this->width);
        cap.set(cv::CAP_PROP_FRAME_HEIGHT, this->height);
        cap.set(cv::CAP_PROP_FPS, this->fps);
    }
}

CameraSettings OCVCamera::get_settings()
{
    CameraSettings settings;
    settings.width = this->width;
    settings.height = this->height;
    settings.fps = this->fps;
    settings.exposure = this->exposure; // Caso suporte esteja ativado
    settings.gain = this->gain;         // Caso suporte esteja ativado
    return settings;
}
