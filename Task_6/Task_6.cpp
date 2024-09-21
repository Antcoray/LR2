#include <iostream>
#include <cmath>

int main () {
    double A = 0, B = 0, Y = 0, K = 0, C = 0, D = 0, x = 0, p = 0, h = 0;

    std::cout << "Введите K: " << std::endl;
    std::cin >> K;
    std::cout << "Введите C: " << std::endl;
    std::cin >> C;
    std::cout << "Введите D: " << std::endl;
    std::cin >> D;
    std::cout << "Введите x: " << std::endl;
    std::cin >> x;
    std::cout << "Введите p: " << std::endl;
    std::cin >> p;
    std::cout << "Введите h: " << std::endl;
    std::cin >> h;

    A = x - p;
    B = log(h);
    Y = 0.78 * B + pow(A,3) / (K * C * D);

    std::cout << "Y = " << Y << std::endl;

    return 0;

}
