#include <iostream>
#include <cmath>
#include <complex>

int main() {
    double a = 0, b = 0, c = 0, D = 0;
    std::cout << "Введите коэффициенты a, b, c для уравнения ax^4 + bx^2 + c = 0: " << std::endl;
    std::cin >> a >> b >> c;

    D = b * b - 4 * a * c;

    std::complex<double> y1 = (-b + sqrt(std::complex<double>(D))) / (2 * a);
    std::complex<double> y2 = (-b - sqrt(std::complex<double>(D))) / (2 * a);

    std::complex<double> x1 = sqrt(y1);
    std::complex<double> x2 = -sqrt(y1);

    std::complex<double> x3 = sqrt(y2);
    std::complex<double> x4 = -sqrt(y2);

    std::cout << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << ", x4 = " << x4 << std::endl;

    return 0;
}

