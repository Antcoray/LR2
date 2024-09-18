#include <iostream>

int main() {

    float x = 0;
    float y = 0;
    float z = 0;

    std::cout << "Ведите x: " << std::endl;
    std::cin >> x;
    std::cout << "Ведите y: " << std::endl;
    std::cin >> y;
    std::cout << "Ведите z: " << std::endl;
    std::cin >> z;

    if (x<y+z && y<x+z && z<x+y) {
        std::cout << "Такой треугольник существует " << std::endl;
    } else {
        std::cout << "Такой треугольник не существует " << std::endl;
    }
}