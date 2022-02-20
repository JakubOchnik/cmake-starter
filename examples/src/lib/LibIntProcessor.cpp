#include <LibIntProcessor.hpp>

void IntProcessor::matAbs(Matrix<int>& input)
{
    const auto width{input.getWidth()}, height{input.getHeight()};
    for(uint16_t y{0}; y < height; ++y)
    {
        for(uint16_t x{0}; x < width; ++x)
        {
            input.at(x, y) = std::abs(input.at(x, y));
        }
    }
}


void IntProcessor::addScalar(Matrix<int>& input, int scalar)
{
    const auto width{input.getWidth()}, height{input.getHeight()};
    for(uint16_t y{0}; y < height; ++y)
    {
        for(uint16_t x{0}; x < width; ++x)
        {
            input.at(x, y) += scalar;
        }
    }
}
