#include <iostream>
#include <cmath>

int main() {
    double A = 0, B = 0, Y = 0, C = 0, K = 0, x = 0, d = 0;

    std::cout << "Введите C: " << std::endl;
    std::cin >> C;
    std::cout << "Введите K: " << std::endl;
    std::cin >> K;
    std::cout << "Введите x: " << std::endl;
    std::cin >> x;
    std::cout << "Введите d: " << std::endl;
    std::cin >> d;

    A = log10(x);
    B = x + exp(d);
    Y = (A + B) - pow(C,2)/K;

    std::cout << "Y = "<< Y << std::endl;

    return 0;

}
