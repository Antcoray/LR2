#include <iostream>
#include <cmath>

int main() {
    double Q = 0, B = 0, K = 0, D = 0, C = 0, x = 0, p = 0, n = 0;

    std::cout << "Введите K: " << std::endl;
    std::cin >> K;
    std::cout << "Введите D: " << std::endl;
    std::cin >> D;
    std::cout << "Введите x: " << std::endl;
    std::cin >> x;
    std::cout << "Введите p: " << std::endl;
    std::cin >> p;
    std::cout << "Введите n: " << std::endl;
    std::cin >> n;

    B = cos(x);
    C = p - n;
    Q = (pow(B,2)) / (K * D) + B * pow(C,3);
    
    std::cout << "Q = " << Q << std::endl;

    return 0;
}