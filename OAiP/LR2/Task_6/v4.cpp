#include <iostream>
#include <cmath>

int main() {
    double x, y, z, K, C, D;
    std::cout << "Введите x, y, z, K, C, D: ";
    std::cin >> x  >> y >> z >> K >> C >> D;

    double A = x - y;
    double B = sqrt(z);

    double T = cos(x) + ( pow(A, 2) / ( K - C * D)) - B;

    std::cout << "A= " << A << std::endl;
    std::cout << "B= " << B << std::endl;
    std::cout << "Ответ: " << T << std::endl;
    return 0; }