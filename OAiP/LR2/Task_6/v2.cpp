#include <iostream>
#include <cmath>

int main() {
    double x, p, K, D, C;
    std::cout << "Введите x, p, K, D, C: ";
    std::cin >> x  >> p >> K >> D >> C;

    double A = x + sin(p);
    double B = exp(K);

    double Y = 1 + ( pow(K, 2) / (2 * A * B)) - B + D * C;

    std::cout << "A= " << A << std::endl;
    std::cout << "B= " << B << std::endl;
    std::cout << "Ответ: " << Y << std::endl;
    return 0; }