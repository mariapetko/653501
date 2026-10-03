#include <iostream>
#include <cmath>

int main() {
    double x, p, z, K, C, D;
    std::cout << "Введите x, p, z, K, C, D: ";
    std::cin >> x  >> p >> z >> K >> C >> D;

    double A = sin(x) - z;
    double B = fabs( p - x );

    double Y = pow ( (A + B), 2 ) - ( K / ( C * D ));

    std::cout << "A= " << A << std::endl;
    std::cout << "B= " << B << std::endl;
    std::cout << "Ответ: " << Y << std::endl;
    return 0; }