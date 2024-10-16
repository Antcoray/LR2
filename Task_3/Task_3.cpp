#include <iostream>

int main(){

double b1=0;

std::cout << "Введите первый член геометрической прогрессии " << std::endl;
std::cin >> b1;

double n=12;

double S = b1 / (1 - 1 / (n + 1));

std::cout << "Сумма всех членов убывающей геометрической прогрессии равна " << S << std::endl;

}