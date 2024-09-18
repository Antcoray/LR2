#include <iostream>

int main() {
    float X=0, Y=0;

    std::cout << "Введите X " <<std::endl;
    std::cin >> X;
    std::cout << "Введите Y " <<std::endl;
    std::cin >> Y;

    if (X>Y) {
        std::cout << "Максимальное число - X " << std::endl;
    } else {
        std::cout << "Максимальное число - Y " << std::endl;
    }

    return 0;

}