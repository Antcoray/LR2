// S=(A^2+b*cos(x))/(D^3+(A+D-b)), где A=D*x/b, b=x+D
// D=9 x=2
#include <iostream>
#include <cmath>

int main() {
    double A = 0, b = 0, D = 0, S = 0, x=0;

    std::cout << "Введите x: " << std::endl;
    std::cin >> x;
    std::cout << "Введите D: " << std::endl;
    std::cin >> D;
    b = x + D;
    A = D * x / b;
    S = (pow(A,2)+ b * cos(x) ) / (pow(D,3) + (A + D - b));
    std::cout << S << std::endl;
    return 0;
}