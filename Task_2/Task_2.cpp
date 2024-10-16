#include <iostream>

int main() {

    double x = 0;
    double y = 0;
    double z = 0;

    std::cout << "Введите x: " << std::endl;
    std::cin >> x;
    std::cout << "Введите y: " << std::endl;
    std::cin >> y;
    std::cout << "Введите z: " << std::endl;
    std::cin >> z;

    if (x<y+z && y<x+z && z<x+y) {
        std::cout << "Такой треугольник существует " << std::endl;
    } else {
        std::cout << "Такой треугольник не существует " << std::endl;
    }
}