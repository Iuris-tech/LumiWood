#include <lumiwood.h>

using namespace std;

//ScreenMatrix

ScreenMatrix::ScreenMatrix(int length, int width) : m_lenght(length), m_width(width) {}

void ScreenMatrix::begin()
{
    m_matrix.resize(m_lenght, vector<Pixel>(m_width));

    for (int i = 0; i < m_lenght; i++)
    {
        for (int j = 0; j < m_width; j++)
        {
            m_matrix[i][j] = {0, 0, 0};
        }
    }
}

void ScreenMatrix::setPixel(int x, int y, int r, int g, int b)
{
    m_matrix[x][y] = {r, g, b};
}

// ScreenDualMatrix

ScreenDualMatrix::ScreenDualMatrix(int pin, vector<vector<bool>> matrix, vector<vector<int>> orientation, int length, int width) : m_pin(pin), m_matrix(matrix), m_orientation(orientation), m_lenght(length), m_width(width) {}

void ScreenDualMatrix::begin()
{
    
}