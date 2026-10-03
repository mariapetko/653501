#include <iostream>
#include <cmath>

int main() {
    double x, d, K, C;
    std::cout << "Введите x, d, K, C: ";
    std::cin >> x  >> d >> K >> C ;

    double A = log10(x);
    double B = x + exp(d);

    double Y = ( A + B ) - ( pow(C, 2) / K);

    std::cout << "A= " << A << std::endl;
    std::cout << "B= " << B << std::endl;
    std::cout << "Ответ: " << Y << std::endl;
    return 0; }