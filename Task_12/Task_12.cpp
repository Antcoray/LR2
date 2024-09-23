// 3. x^3 + px + q = 0 --- каноническая форма кубического уравнения
#include <iostream>
#include <cmath>
#include <complex>

double defF(double q, double p){
    double F = 0;
    if (q < 0) {
        F = atan(sqrt(-(pow(q, 2) / 4 + pow(p, 3) / 27)) / (-q / 2));
    } else if (q > 0) {
        F = atan(sqrt(-(pow(q, 2) / 4 + pow(p, 3) / 27)) / (-q / 2) + M_PI);
    } else {
        F = M_PI / 2;
    }
    return F;
}

int main() {
    double p = 0, q = 0;

    std::cout << "Введите p, q:" << std::endl;
    std::cin >> p >> q;

    double F = defF(q, p);

    std::cout << " x1 = " << F << " x2 = " << F << std::endl;
     
    return 0;
}

