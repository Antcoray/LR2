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

int main() {
    double a = 0, b = 0, c = 0, D = 0;
    std::cout << "Введите коэффициенты a, b, c для уравнения ax^4 + bx^2 + c = 0: " << std::endl;
    std::cin >> a >> b >> c;

    D = b * b - 4 * a * c;

    if (D >= 0) {
        double y1 = (-b + SQRT(D)) / (2 * a);
        double y2 = (-b - SQRT(D)) / (2 * a);

        double x1 = SQRT(y1);
        double x2 = -SQRT(y1);

        std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
        
        double x3 = SQRT(y2);
        double x4 = -SQRT(y2);

        std::cout << "x3 = " << x3 << ", x4 = " << x4 << std::endl;
    } else {
        double real_part = -b / (2 * a);
        double imaginary_part = SQRT(-D) / (2 * a);

        std::cout << "Комплексные корни:" << std::endl;
        std::cout << "x1 = " << real_part << " + " << imaginary_part << "i" << std::endl;
        std::cout << "x2 = " << real_part << " - " << imaginary_part << "i" << std::endl;
        std::cout << "x3 = " << real_part << " + " << imaginary_part << "i" << std::endl;
        std::cout << "x4 = " << real_part << " - " << imaginary_part << "i" << std::endl;
    }

    return 0;
}


