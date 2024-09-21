#include <iostream>
#include <cmath>

int main() {
    double x = 0, K = 0, C = 0, D = 0, B = 0, y = 0, z = 0, A = 0, T = 0;

    std::cout << "Введите x: " << std::endl;
    std::cin >> x;
    std::cout << "Введите K: " << std::endl;
    std::cin >> K;
    std::cout << "Введите C: " << std::endl;
    std::cin >> C;
    std::cout << "Введите D: " << std::endl;
    std::cin >> D;
    std::cout << "Введите y: " << std::endl;
    std::cin >> y;
    std::cout << "Введите z: " << std::endl;
    std::cin >> z;

    A = x - y;
    B = sqrt(z);
    T = cos(x) + pow(A,2) / (K - C * D) - B;

    std::cout << "T= "<< T << std::endl;

    return 0;

}
