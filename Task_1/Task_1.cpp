#include <iostream>

    int main() {

        double x;
        std::cout << " Введите значение x: " << std::endl;
        std::cin >> x;

        double x2 = x * x;
        double c23 = 23 * x2;
        double c69_8= 69 * x2 +8;
        double c32_23 = x * (32 + c23);

        double problem1 = c32_23 + c69_8;
        double problem2 = c69_8 - c32_23;

        std::cout << "23x^3+69x^2+32x+8= " << problem1 << std::endl;
        std::cout << "-23x^3+69x^2-32x+8= " << problem2 << std::endl;

        return 0;

    }
