#pragma once
#include <cstdint>
#include <exception>
#include <cstdlib>

template<typename DataType>
class Matrix
{
protected:
    DataType* rawData;

    uint16_t width;
    uint16_t height;
public:
    Matrix(uint16_t w, uint16_t h, DataType* data);
    Matrix();

    uint16_t getWidth() const;
    uint16_t getHeight() const;

    DataType* getRawPointer() const;

    size_t size() const;

    DataType& at(size_t x, size_t y);

};

template<typename DataType>
Matrix<DataType>::Matrix(uint16_t w, uint16_t h, DataType* data): width(w), height(h), rawData(data)
{
}

template<typename DataType>
Matrix<DataType>::Matrix()
{
    height = width = 0;
    rawData = nullptr;
}

template<typename DataType>
uint16_t Matrix<DataType>::getWidth() const
{
    return width;
}

template<typename DataType>
uint16_t Matrix<DataType>::getHeight() const
{
    return height;
}

template<typename DataType>
size_t Matrix<DataType>::size() const
{
    return width * height;
}

template<typename DataType>
DataType& Matrix<DataType>::at(size_t x, size_t y)
{
    if(x > this->width - 1 || y > this->height - 1)
    {
        throw std::runtime_error("Index out of bounds");
    }
    size_t idx{x + y * this->width};
    return this->rawData[idx];
}
