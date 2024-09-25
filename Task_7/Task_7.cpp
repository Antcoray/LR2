#include <iostream>

int main() {
    double a = 0, b = 0, c = 0, N = 0, Y = 0;

    std::cout << "Введите a = -13.8: " << std::endl;
    std::cin >> a;
    std::cout << "Введите b = 8.9: " << std::endl;
    std::cin >> b;
    std::cout << "Введите c = 25: " << std::endl;
    std::cin >> c;
    std::cout << "Введите N (2; 56; 7; 3): " << std::endl;
    std::cin >> N;

    switch((int)N)
    {
        case 2: Y = b * c - a * a;
            break;
        case 56: Y = b * c;
            break;
        case 7: Y = b * c;
            break;
        case 3: Y = b * c;
            break;
        default: Y = (a + b) * (a + b) * (a + b);

    }

    std::cout << "Y = "<< Y << std::endl;

    return 0;

}
