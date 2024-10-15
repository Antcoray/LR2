#include <iostream>

int main() {

    long long int X = 0, Y = 0;
    std::cout << "Введите X, Y " << std::endl;
    std::cin >> X >> Y;
    
    if (X < Y) {
        X = 0;
    } else if (X > Y) {
        Y = 0;
    } else {
        X = 0;
        Y = 0;
    }
    
    long double A = 0, B = 0, C = 0, K = 0;
    std::cout << "Введите A, B, C, K " << std::endl;
    std::cin >> A >> B >> C >> K;
    
    if (A > B && A > C) {
    A -= K;
    } else if (B > A && B > C) {
    B -= K;
    } else if (C > A && C > B) {
    C -= K;
    }
    
    std::cout << "X, Y = " << X << " " << Y << std::endl;;
    std::cout << "A, B, C = " << A << " " << B << " " << C << " " << std::endl;
    
    return 0;
}

