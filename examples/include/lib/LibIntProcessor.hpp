#pragma once
#include <iostream>
#include <Matrix/HeaderOnlyMatrix.hpp>

class IntProcessor
{
public:
    static void matAbs(Matrix<int>& input);
    static void addScalar(Matrix<int>& input, int scalar);
};