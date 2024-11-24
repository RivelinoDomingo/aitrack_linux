#pragma once

#include <arpa/inet.h>
#include <cstring>
#include <netinet/in.h>
#include <string>
#include <sys/socket.h>
#include <unistd.h> // Para close()

/**
   Data sender to Opentrack using UDP
*/
class UDPSender {
private:
    const int BUFFER_SIZE = sizeof(double) * 6;
    double position_data[6];

    union {
        sockaddr_in dest;
        sockaddr_in6 dest_IPv6;
    };
    union {
        sockaddr_in local;
        sockaddr_in6 local_IPv6;
    };

    int s; // Usando int para sockets no Linux

public:
    std::string ip;
    int port;
    bool valid = true;

    UDPSender(const char* dest_ip, int dest_port);
    ~UDPSender();

    /**
     * Sends a data vector to opentrack.
     * @param data: Size 6 array which contains [X,Y,Z,Yaw,Pitch,Roll].
     */
    void send_data(double* data);
};
