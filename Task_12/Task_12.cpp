// 3. x^3 + px + q = 0 --- каноническая форма кубического уравнения
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

double cube(double value) {
    if (value == 0) {
        return 0;
    }

    double U = value;
    double accuracy = 1e-7;
    double diff = 1;
    
    while (std::abs(diff) > accuracy) {
        double estimate = (2 * U + value / (U * U)) / 3;
        diff = U - estimate;
        U = estimate;
    }

    return U;
}

double factorial(int value) {
    double result = 1;
    for (int i = 2; i <= value; ++i) {
        result *= i;
    }
    return result;
}

double stepen(double value, int st) {
    double result = 1;
    for (int i = 0; i < st; ++i) {
        result *= value;
    }
    return result;
}

double cosTaylor(double value) {
    double result = 0;
    int accuracy = 10;
    for (int i = 0; i < accuracy; ++i) {
        double ch = (i % 2 == 0 ? 1 : -1) * stepen(value, 2 * i) / factorial(2 * i);
        result += ch;
    }

    return result;
}

double arccosTaylor(double value) {
    if (value < -1.0 || value > 1.0) {
        return 0;
    }
    int accuracy = 10;
    double result = 3.14159 / 2;
    double ch = value;
    double value2 = value * value;
    
    for (int i = 1; i <= accuracy; ++i) {
        result -= ch;
        ch *= (2 * i - 1) * value2 / (2 * i + 1);
    }

    return result;
}

int main() {
    double p = 0, q = 0;

    std::cout << "Введите p, q:" << std::endl;
    std::cin >> p >> q;

    double Q = (p / 3) * (p / 3) * (p / 3) + (q / 2) * (q / 2);
    if (Q > 0){
        double x = cube(-q / 2 + SQRT(Q)) + cube(-q / 2 - SQRT(Q));
        std::cout << "x = " << x << std::endl;
    }
    if (Q == 0) {
        double x1 = 2 * cube(-q / 2);
        double x2 = -cube(-q / 2);
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }
    if (Q < 0) {
        double x0 = 2 * SQRT(-p / 3) * cosTaylor(arccosTaylor(3*q/(2*p)*SQRT(-3 / p))/ 3);
        double x1 = 2 * SQRT(-p / 3) * cosTaylor((arccosTaylor(3*q/(2*p)*SQRT(-3 / p))+2*3.14159*1) / 3);
        double x2 = 2 * SQRT(-p / 3) * cosTaylor((arccosTaylor(3*q/(2*p)*SQRT(-3 / p))+2*3.14159*2) / 3);
        std::cout << "x1 = " << x0 << std::endl;
        std::cout << "x2 = " << x1 << std::endl;
        std::cout << "x3 = " << x2 << std::endl;
    }
    return 0;
}

