#include <iostream>
#include <cmath>

int main() {
    double A = 0, B = 0, Y = 0, C = 0, x = 0, D = 0, z = 0, k = 0;

    std::cout << "Введите C: " << std::endl;
    std::cin >> C;
    std::cout << "Введите x: " << std::endl;
    std::cin >> x;
    std::cout << "Введите D: " << std::endl;
    std::cin >> D;
    std::cout << "Введите k: " << std::endl;
    std::cin >> k;
    std::cout << "Введите z: " << std::endl;
    std::cin >> z;

    A = log(x) - k;
    B = sqrt(z);
    Y = pow(D,2) + pow(C,2) / (0.75 * A) + B;

    std::cout << "Y = "<< Y << std::endl;

    return 0;

}
