#include <iostream>
#include <cmath>

int main() {
    double x, p, h, K, C, D;
    std::cout << "Введите x, p, h, K, C, D: ";
    std::cin >> x  >> p >> h >> K >> C >> D;

    double A = x - p;
    double B = log(h);

    double Y = ( 0.78 * B ) + ( pow(A, 3) / ( K * C * D) );

    std::cout << "A= " << A << std::endl;
    std::cout << "B= " << B << std::endl;
    std::cout << "Ответ: " << Y << std::endl;
    return 0; }