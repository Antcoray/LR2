#include <iostream>

double SQRT(double value) {
    if (value < 0) {
        return -1;
    }

    if (value == 0) {
        return 0;
    }

    double U = value;
    double accuracy = 1e-7;
    double estimate = value / 2.0;

    while (std::abs(estimate - U) > accuracy) {
        U = estimate;
        estimate = (U + value / U) / 2.0;
    }

    return estimate;
}

// 1. ax^4 + bx^2 + c = 0;

int main() {
    double a = 0, b = 0, c = 0, D = 0, y1 = 0, y2 = 0;
    std::cout << "Введите коэффициенты a, b, c для уравнения ax^4 + bx^2 + c = 0: " << std::endl;
    std::cin >> a >> b >> c;

    D = b * b - 4 * a * c;

    if (D < 0) {
        std::cout << "Нет действительных корней." << std::endl;
    } else {
        y1 = (-b + SQRT(D)) / (2 * a);
        y2 = (-b - SQRT(D)) / (2 * a);

        if (y1 >= 0) {
            std::cout << "x1 = " << SQRT(y1) << ", x2 = " << -SQRT(y1) << std::endl;
        }
        if (y2 >= 0) {
            std::cout << "x3 = " << SQRT(y2) << ", x4 = " << -SQRT(y2) << std::endl;
        }
        if (y1 < 0 && y2 < 0) {
            std::cout << "Нет действительных корней." << std::endl;
        }
    }

    return 0;
}


