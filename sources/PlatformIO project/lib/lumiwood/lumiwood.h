#ifndef DEF_LUMIWOOD
#define DEF_LUMIWOOD

#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include <iostream>
#include <vector>

class ScreenMatrix
{
public:
    ScreenMatrix(int lenght = 8, int width = 8);
    void begin();
    void setPixel(int x, int y, int r, int g, int b);

private:
    struct Pixel
    {
        int r, g, b;
    };
    int m_lenght;
    int m_width;
    std::vector<std::vector<Pixel>> m_matrix;
};

class ScreenDualMatrix
{
public:
    ScreenDualMatrix(int pin, std::vector<std::vector<bool>> matrix, std::vector<std::vector<int>> orientation, int lenght = 8, int width = 8);
    void begin();

private:
    int m_pin;
    std::vector<std::vector<bool>> m_matrix;
    std::vector<std::vector<int>> m_orientation;
    int m_lenght;
    int m_width;
};

#endif