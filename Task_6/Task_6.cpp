#include <iostream>
#include <cmath>

int main() {
    double A = 0, B = 0, Y = 0, C = 0, K = 0, x = 0, D = 0, p = 0, z = 0;

    std::cout << "Введите C: " << std::endl;
    std::cin >> C;
    std::cout << "Введите K: " << std::endl;
    std::cin >> K;
    std::cout << "Введите x: " << std::endl;
    std::cin >> x;
    std::cout << "Введите D: " << std::endl;
    std::cin >> D;
    std::cout << "Введите p: " << std::endl;
    std::cin >> p;
    std::cout << "Введите z: " << std::endl;
    std::cin >> z;

    A = sin(x) - z;
    B = fabs(p - x);
    Y = pow((A + B),2) - K / (C * D);

    std::cout << "Y = "<< Y << std::endl;

    return 0;

}
