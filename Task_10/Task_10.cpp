#include <iostream>
#include <cmath>

int main() {
    double x1 = 0, y1 = 0, r = 0, x2 = 0, y2 = 0, R = 0;

    std::cout << "Введите координаты и радиус первого круга (x1, y1, r): " << std::endl;
    std::cin >> x1 >> y1 >> r;

    std::cout << "Введите координаты и радиус второго круга (x2, y2, R): " << std::endl;
    std::cin >> x2 >> y2 >> R;

    double dstBtwCntrs = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if (dstBtwCntrs <= R - r) {
        std::cout << "Да, круг M1 попадает в круг M2" << std::endl;
    } else if (dstBtwCntrs <= r - R) {
        std::cout << "Да, но справедливо обратное для двух фигур" << std::endl;
    } else if (dstBtwCntrs < r + R) {
        std::cout << "Фигуры пересекаются" << std::endl;
    } else {
        std::cout << "Ни одно условие не выполнено" << std::endl;
    }

    return 0;
}
