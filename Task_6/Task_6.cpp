#include <iostream>
#include <cmath>

int main() {
    double S = 0, A = 0, C = 0, D = 0, K = 0, x = 0, y = 0;

    std::cout << "Введите C:" << std::endl;
    std::cin >> C;
    std::cout << "Введите K:" << std::endl;
    std::cin >> K;
    std::cout << "Введите x:" << std::endl;
    std::cin >> x;
    std::cout << "Введите y:" << std::endl;
    std::cin >> y;

    A = x + y;
    D = fabs(C-A);
    S = 10.1 + A / C + D/pow(K,2);

    std::cout << "S = " << S << std::endl;

    return 0;

}