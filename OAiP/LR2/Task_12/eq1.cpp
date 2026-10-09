#include <iostream>
#include <cmath>

int main() {
    double p, q;
    std::cout << "Решение уравнения x^3 + px + q = 0" << std::endl;
    std::cout << "Введите коэффициенты p и q: ";
    std::cin >> p >> q;

    double Q = std::pow(p / 3.0, 3) + std::pow(q / 2.0, 2);

    if (Q > 0) {
        double u = std::cbrt(-q / 2.0 + std::sqrt(Q));
        double v = std::cbrt(-q / 2.0 - std::sqrt(Q));
        
        double x1 = u + v;
        std::cout << "Один действительный корень:" << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
    } 
    else if (Q == 0) {
        double u = std::cbrt(-q / 2.0);
        
        double x1 = 2.0 * u;
        double x2 = -u; 
        
        std::cout << "Действительные корни:" << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = x3 = " << x2 << std::endl;
    } 
    else {
        double r = std::sqrt(-std::pow(p / 3.0, 3));
        double phi = std::acos(-q / (2.0 * r));
        double factor = 2.0 * std::pow(r, 1.0 / 3.0);

        double x1 = factor * std::cos(phi / 3.0);
        double x2 = factor * std::cos((phi + 2.0 * M_PI) / 3.0);
        double x3 = factor * std::cos((phi + 4.0 * M_PI) / 3.0);

        std::cout << "Три разных действительных корня:" << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
        std::cout << "x3 = " << x3 << std::endl;
    }

    return 0;
}
