#include <iostream>
#include <cmath>

int main() {
    double Y = 0, K = 0, A = 0, B = 0, D = 0, C = 0, x = 0, p = 0;

    std::cout << "Введите x: " << std::endl;
    std::cin >> x;
    std::cout << "Введите K: " << std::endl;
    std::cin >> K;
    std::cout << "Введите p: " << std::endl;
    std::cin >> p;
    std::cout << "Введите D: " << std::endl;
    std::cin >> D;
    std::cout << "Введите C: " << std::endl;
    std::cin >> C;

    B = exp(K);
    A = x + sin(p);
    Y = 1 + ((pow(K,2)) / (2 * A * B)) - B + D * C;

    std::cout << "Y= " << Y << std::endl;

    return 0;
}
