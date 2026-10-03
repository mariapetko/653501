#include <iostream>
#include <cmath>

int main() {
    double x, p, n, K, D;
    std::cout << "Введите x, p, n, K, D: ";
    std::cin >> x  >> p >> n >> K >> D;

    double B = cos(x);
    double C = p - n;

    double Q = ( pow(B, 2) / ( K * D)) + ( B * pow(C, 3));

    std::cout << "B= " << B << std::endl;
    std::cout << "C= " << C << std::endl;
    std::cout << "Ответ: " << Q << std::endl;
    return 0; }