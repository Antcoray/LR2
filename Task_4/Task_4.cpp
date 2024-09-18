#include <iostream>

int main() {

    int X = 0, Y = 0;

    std::cout << "Введите X: " << std::endl;
    std::cin >> X;
    std::cout << "Введите Y: " << std::endl;
    std::cin >> Y;

    if (X<Y) {
        X=0;
    } else if (X>Y) {
        Y=0;
    } else {
        X=0;
        Y=0;
    }

    float A=0, B=0, C=0, K=0;

    std::cout << "Введите A: " << std::endl;
    std::cin >> A;
    std::cout << "Введите B: " << std::endl;
    std::cin >> B;
    std::cout << "Введите C: " << std::endl;
    std::cin >> C;
    std::cout << "Введите K: " << std::endl;
    std::cin >> K;

    A-=K;
    B-=K;
    C-=K;

    std::cout << "X= " << X <<std::endl;
    std::cout << "Y= " << Y <<std::endl;
    std::cout << "A= " << A <<std::endl;
    std::cout << "B= " << B <<std::endl;
    std::cout << "C= " << C <<std::endl;
}
