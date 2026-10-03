#include <iostream>
#include <cmath>

int main() {
    double x, y, C, K;
    std::cout << "Введите x, y, C, K: ";
    std::cin >> x  >> y >> C >> K;

    double A = x + y;
    double D = fabs(C - A);

    double S = 10.1 + ( A / C ) + ( D / pow(K, 2));

    std::cout << "A= " << A << std::endl;
    std::cout << "D= " << D << std::endl;
    std::cout << "Ответ: " << S << std::endl;
    return 0; }