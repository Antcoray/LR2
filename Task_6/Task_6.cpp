#include <iostream>
#include <cmath>

int main () {
    double K = 0, A = 0, D = 0, n = 0, m = 0, x = 0, Y = 0;

    std::cout << "Введите K: " << std::endl;
    std::cin >> K;
    std::cout << "Введите n: " << std::endl;
    std::cin >> n;
    std::cout << "Введите m: " << std::endl;
    std::cin >> m;
    std::cout << "Введите x: " << std::endl;
    std::cin >> x;

    A = fabs(n + m);
    D = tan(x);
    Y = 1.29 + K / A + pow(D,2);

    std::cout << "Y= "<< Y << std::endl;

    return 0;
    
}