#include <lib/Matrix/HeaderOnlyMatrix.hpp>
#include <lib/LibIntProcessor.hpp>
#include <RandomFunction.hpp>
#include <iostream>

int main()
{
    sayHi();
    int numbers[] = {-1, 2, -3, 4};
    Matrix<int> mat(2, 2, numbers);
    IntProcessor::matAbs(mat);
    IntProcessor::addScalar(mat, 42);

    std::cout << mat.at(0, 1) << "\n";
    return 0;
}