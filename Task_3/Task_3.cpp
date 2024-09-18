#include <iostream>

int main(){

float b1=0;

std::cout << "Введите первый член геометрической прогрессии " << std::endl;
std::cin >> b1;

float n=12;

float S = b1 / (1 - 1 / (n + 1));

std::cout << "Сумма всех членов убывающей геометрической прогрессии равна " << S << std::endl;

}