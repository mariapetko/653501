#include <iostream>
#include <cmath>

int main() {
    double x, z, k, C, D;
    std::cout << "Введите x, z, k, C, D: ";
    std::cin >> x  >> z >> k >> C >> D;

    double A = log(x) - k;
    double B = sqrt( z );

    double Y = pow ( D, 2 ) + ( pow( C, 2 ) / ( 0.75 * A )) + B;

    std::cout << "A= " << A << std::endl;
    std::cout << "B= " << B << std::endl;
    std::cout << "Ответ: " << Y << std::endl;
    return 0; }