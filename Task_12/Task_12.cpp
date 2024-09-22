#include <iostream>
#include <cmath>
#include <complex>

int main() {
    double a = 0, b = 0, c = 0;

    std::cout << "Введите a, b, c : " << std::endl;
    std::cin >> a >> b >> c;

    // замена t = x + 1 / x;

    // at^2 + bt + (c - 2a) = 0 --- новое уравнение

    double Dt = b * b - 4 * a * (c - 2 * a);

    // Решаем уравнение для t1 и t2

    std::complex<double> t1 = (-b - sqrt(std::complex<double>(Dt))) / (2 * a);
    std::complex<double> t2 = (-b + sqrt(std::complex<double>(Dt))) / (2 * a);

    // x^2 - t1x + 1 = 0 и x^2 - t2x + 1 = 0 --- новые уравнения

    std::complex<double> Dx1 = t1 * t1 - std::complex<double>(4.0);
    std::complex<double> x1 = (-t1 - sqrt(Dx1)) / std::complex<double>(2.0);
    std::complex<double> x2 = (-t1 + sqrt(Dx1)) / std::complex<double>(2.0);

    std::complex<double> Dx2 = t2 * t2 - std::complex<double>(4.0);
    std::complex<double> x3 = (-t2 - sqrt(Dx2)) / std::complex<double>(2.0);
    std::complex<double> x4 = (-t2 + sqrt(Dx2)) / std::complex<double>(2.0);

    std::cout << "x1, x2, x3, x4: " << x1 << ", " << x2 << ", " << x3 << ", " << x4 << std::endl;

    return 0;
}


