#include <iostream>

int main() {
    float X=0, Y=0;

    std::cout << "Введите X " <<std::endl;
    std::cin >> X;
    std::cout << "Введите Y " <<std::endl;
    std::cin >> Y;

    bool logic = X > Y;

    std::cout << (logic ?  "Максимальное число - X " : "Максимальное число - Y ") << std::endl;

    return 0;

}