#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Решение уравнения ax^4 + bx^3 + cx^2 + bx + a = 0" << std::endl;
    std::cout << "Введите коэффициенты a, b, c: ";
    std::cin >> a >> b >> c;

    if (a == 0) {
        std::cout << "Ошибка" << std::endl;
        return 1;
    }

    double c_t = c - 2.0 * a; 
    double D_t = (b * b) - (4.0 * a * c_t); 

    if (D_t < 0) {
        std::cout << "Действительных корней нет." << std::endl;
        return 0;
    }

    double t1 = (-b + std::sqrt(D_t)) / (2.0 * a);
    double t2 = (-b - std::sqrt(D_t)) / (2.0 * a);

    double D_x1 = (t1 * t1) - 4.0;
    double D_x2 = (t2 * t2) - 4.0;

    if (D_x1 >= 0 && D_x2 >= 0) {
        std::cout << "x1 = " << (t1 + std::sqrt(D_x1)) / 2.0 << std::endl;
        std::cout << "x2 = " << (t1 - std::sqrt(D_x1)) / 2.0 << std::endl;
        std::cout << "x3 = " << (t2 + std::sqrt(D_x2)) / 2.0 << std::endl;
        std::cout << "x4 = " << (t2 - std::sqrt(D_x2)) / 2.0 << std::endl;
    } 
    else if (D_x1 >= 0 && D_x2 < 0) {
        std::cout << "x1 = " << (t1 + std::sqrt(D_x1)) / 2.0 << std::endl;
        std::cout << "x2 = " << (t1 - std::sqrt(D_x1)) / 2.0 << std::endl;
    } 
    else if (D_x1 < 0 && D_x2 >= 0) {
        std::cout << "x1 = " << (t2 + std::sqrt(D_x2)) / 2.0 << std::endl;
        std::cout << "x2 = " << (t2 - std::sqrt(D_x2)) / 2.0 << std::endl;
    } 
    else {
        std::cout << "Действительных корней нет." << std::endl;
    }

    return 0;
}
