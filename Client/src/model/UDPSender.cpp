#include "UDPSender.h"
#include <iostream>

// Construtor: Inicializa o socket UDP
UDPSender::UDPSender(const char* dest_ip, int dest_port)
{
    // Criação do socket UDP
    s = socket(AF_INET, SOCK_DGRAM, 0);
    if (s < 0) {
        valid = false;
        std::cerr << "Failed to create socket!" << std::endl;
        return;
    }

    dest.sin_family = AF_INET;
    dest.sin_port = htons(dest_port);
    dest.sin_addr.s_addr = inet_addr(dest_ip);

    ip = dest_ip;
    port = dest_port;
}

// Destruidor: Fecha o socket
UDPSender::~UDPSender()
{
    if (s >= 0) {
        close(s);
    }
}

// Envia dados para o OpenTrack via UDP
void UDPSender::send_data(double* data)
{
    if (!valid) {
        std::cerr << "Invalid sender!" << std::endl;
        return;
    }

    memcpy(position_data, data, BUFFER_SIZE);

    int bytes_sent = sendto(s, (const char*)position_data, BUFFER_SIZE, 0,
        (struct sockaddr*)&dest, sizeof(dest));
    if (bytes_sent < 0) {
        std::cerr << "Failed to send data!" << std::endl;
    }
}
