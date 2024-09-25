#include <iostream>

double arccosTaylor(double x) {
    if (x < -1.0 || x > 1.0) {
        return 0;
    }
    int accuracy = 10;
    double result = 3.14159 / 2;
    double term = x;
    double x2 = x * x;
    
    for (int n = 1; n <= accuracy; ++n) {
        result -= term;
        
        term *= (2 * n - 1) * x2 / (2 * n + 1);
    }

    return result;
}

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

double distance(double x1, double y1, double x2, double y2) {
    return SQRT((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double areaByCoordinates(double x1, double y1, double x2, double y2, double x3, double y3) {
    return std::abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

double areaByHeron(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return SQRT(p * (p - a) * (p - b) * (p - c));
}

double areaByVectors(double x1, double y1, double x2, double y2, double x3, double y3) {
    return std::abs((x1 * (y2 - y3) - y1 * (x2 - x3)) / 2.0);
}

double median(double a, double b, double c) {
    return SQRT(2 * (b * b + c * c) - a * a) / 2.0;
}

double bisectrisa(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return (2.0 * SQRT(a * b * p * (p - c))) / (a + b);
}

double height(double side, double area) {
    return (2 * area) / side;
}

double inradius(double a, double b, double c, double area) {
    double p = (a + b + c) / 2.0;
    return area / p;
}

double circumradius(double a, double b, double c, double area) {
    return (a * b * c) / (4 * area);
}

double angle(double a, double b, double c) {
    return arccosTaylor((b * b + c * c - a * a) / (2 * b * c)) * 180.0 / 3.14159;
}

int main() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;

    std::cout << "Введите координаты вершин треугольника (x1, y1, x2, y2, x3, y3): " << std::endl;
    std::cout << "x1 = ";
    std::cin >> x1;
    std::cout << "y1 = ";
    std::cin >> y1;
    std::cout << "x2 = ";
    std::cin >> x2;
    std::cout << "y2 = ";
    std::cin >> y2;
    std::cout << "x3 = ";
    std::cin >> x1;
    std::cout << "y3 = ";
    std::cin >> x1;

    double a = distance(x2, y2, x3, y3);
    double b = distance(x1, y1, x3, y3);
    double c = distance(x1, y1, x2, y2);

    std::cout << "Длины сторон треугольника: a = " << a << ", b = " << b << ", c = " << c << std::endl;

    double areaByCo = areaByCoordinates(x1, y1, x2, y2, x3, y3);
    double areaByHe = areaByHeron(a, b, c);
    double areaByVe = areaByVectors(x1, y1, x2, y2, x3, y3);

    std::cout << "Площадь треугольника через координаты вершин: " << areaByCo << std::endl;
    std::cout << "Площадь треугольника через теорему Герона: " << areaByHe << std::endl;
    std::cout << "Площадь треугольника через векторы: " << areaByVe << std::endl;

    double perimeter = a + b + c;

    std::cout << "Периметр треугольника: " << perimeter << std::endl;

    double h_a = height(a, areaByCo);
    double h_b = height(b, areaByHe);
    double h_c = height(c, areaByVe);

    std::cout << "Высоты треугольника: ha = " << h_a << ", hb = " << h_b << ", hc = " << h_c << std::endl;

    double m_a = median(a, b, c);
    double m_b = median(b, a, c);
    double m_c = median(c, a, b);

    std::cout << "Медианы треугольника: ma = " << m_a << ", mb = " << m_b << ", mc = " << m_c << std::endl;

    double bis_a = bisectrisa(a, b, c);
    double bis_b = bisectrisa(b, a, c);
    double bis_c = bisectrisa(c, a, b);

    std::cout << "Биссектрисы треугольника: bis_a = " << bis_a << ", bis_b = " << bis_b << ", bis_c = " << bis_c << std::endl;

    double angle_A = angle(a, b, c);
    double angle_B = angle(b, a, c);
    double angle_C = angle(c, a, b);

    std::cout << "Углы треугольника: A = " << angle_A << " градусов, B = " << angle_B << " градусов, C = " << angle_C << " градусов" << std::endl;

    std::cout << "Углы в радианах: A = " << angle_A * 3.14159 / 180.0 << ", B = " << angle_B * 3.14159 / 180.0 << ", C = " << angle_C * 3.14159 / 180.0 << std::endl;

    double r_in = inradius(a, b, c, areaByCo);
    double r_circ = circumradius(a, b, c, areaByCo);

    std::cout << "Радиус вписанной окружности: " << r_in << std::endl;
    std::cout << "Радиус описанной окружности: " << r_circ << std::endl;

    double length_in = 2 * 3.14159 * r_in;
    double length_circ = 2 * 3.14159 * r_circ;

    std::cout << "Длина вписанной окружности: " << length_in << std::endl;
    std::cout << "Длина описанной окружности: " << length_circ << std::endl;

    return 0;

}
