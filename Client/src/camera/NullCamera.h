#pragma once
#include "Camera.h"

class NullCamera : public Camera
{
public:
    NullCamera(int width, int height, int fps) : Camera(width, height, fps) {}

    void start_camera() override {}
    void stop_camera() override {}
    void get_frame(uint8_t* buffer) override {}
    CameraSettings get_settings() override { return CameraSettings(); }
    void set_settings(const CameraSettings& settings) override {} // Implementação vazia
};
