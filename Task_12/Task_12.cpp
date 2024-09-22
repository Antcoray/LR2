// 1. ax^4 + bx^2 + c = 0;
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 0, b = 0, c = 0, D = 0, y1 = 0, y2 = 0;
    std::cout << "Введите коэффициенты a, b, c для уравнения ax^4 + bx^2 + c = 0: " << std::endl;
    cin >> a >> b >> c;

    D = b * b - 4 * a * c; 

    if (D < 0) {
        std::cout << "Нет действительных корней." << std::endl;
    } else {
        y1 = (-b + sqrt(D)) / (2 * a);
        y2 = (-b - sqrt(D)) / (2 * a);

        if (y1 >= 0) {
            std::cout << "x1 = " << sqrt(y1) << ", x2 = " << -sqrt(y1) << std::endl;
        }
        if (y2 >= 0) {
            std::cout << "x3 = " << sqrt(y2) << ", x4 = " << -sqrt(y2) << std::endl;
        }
        if (y1 < 0 && y2 < 0) {
            std::cout << "Нет действительных корней." << std::endl;
        }
    }

    return 0;
}
