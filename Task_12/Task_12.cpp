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
    double a = 0, b = 0, c = 0, t1, t2, Dx1, Dx2, Dt, x1, x2, x3, x4, imt1, imt2, realt1, realt2, imx1, imx2, imx3, imx4, realx1, realx2, realx3, realx4;

    std::cout << "Введите a, b, c : " << std::endl;
    std::cin >> a >> b >> c;

    // замена t = x + 1 / x;

    // at^2 + bt + (c - 2a) = 0 --- новое уравнение

    Dt = b * b - 4 * a * (c - 2 * a);

    if (Dt >= 0) {
    // Решаем уравнение для t1 и t2
    t1 = (-b - SQRT(Dt)) / (2 * a);
    t2 = (-b + SQRT(Dt)) / (2 * a);

    // x^2 - t1x + 1 = 0 и x^2 - t2x + 1 = 0 --- новые уравнения

    Dx1 = t1 * t1 - 4.0;
        if (Dx1 >= 0) {
        x1 = (-t1 - SQRT(Dx1)) / 2.0;
        x2 = (-t1 + SQRT(Dx1)) / 2.0;
        } else { // x1, x2 --- комплексные числа
        realx1 = -t1 / 2;
        realx2 = -t2 / 2;
        imx1;
        }
    Dx2 = t2 * t2 - 4.0;
        if (Dx2 >= 0) {
        x3 = (-t2 - SQRT(Dx2)) /  2.0;
        x4 = (-t2 + SQRT(Dx2)) /  2.0;
        } else { //x3, x4 --- комплексные числа



        }
    std::cout << "x1, x2, x3, x4: " << x1 << ", " << x2 << ", " << x3 << ", " << x4 << std::endl;
    } else { //t1,t2 --- комплексные числа 



}
    return 0;
}





