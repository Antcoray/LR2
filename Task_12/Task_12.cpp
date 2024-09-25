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

int main() {
    double p = 0, q = 0;

    std::cout << "Введите p, q:" << std::endl;
    std::cin >> p >> q;

    double Q = (p / 3) * (p / 3) * (p / 3) + (q / 2) * (q / 2);
    if(Q > 0){
    double x = cube(-q / 2 + SQRT(Q)) + cube(-q / 2 - SQRT(Q));
    std::cout << "x = " << x << std::endl;
    } else {
    std::cout << "Корни уравнения являются комплексными числами" << std::endl;
    }
    return 0;
}

