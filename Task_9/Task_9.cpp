#include <iostream>
#include <cmath>

int main() {
    double a = 0, fx = 0, c = 0, x = 0, z = 0, y = 0, ARG = 0, UserChoice = 0;

    std::cout << "Введите a:" << std::endl;
    std::cin >> a;
    std::cout << "Введите c:" << std::endl;
    std::cin >> c;
    std::cout << "Введите z:" << std::endl;
    std::cin >> z;
    std::cout << "Выберите тип f(x): 1) 2x; 2) x^3; 3) x/3 :" << std::endl;
    std::cin >> UserChoice;

    if(z>1)
    {
     x = 1 / sqrt(z-1);
    } else {
        x = pow(z,2) + 1;
    }

    switch ((int)UserChoice)
    {
        case 1: fx = 2 * x;
        break;

        case 2: fx = pow(x,3);
        break;

        case 3: fx = x / 3;
    }

    ARG = pow(fx,2) - 1;

    y = a * pow(sin(ARG),3) + c * log(fabs(x)) + exp(x);

    std::cout << "y = "<< y << std::endl;
    std::cout << "При условии, что y=a*sin^3(f(x)^2-1)+c*ln|x|+e^x" << std::endl;
    std::cout << "где a = "<< a<< " f(x) = "<< fx << " c = "<< c << " x = " << x << " (при z = " << z << ")" << std::endl;

    return 0;
}
