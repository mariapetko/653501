#include <iostream>
#include <cmath>

int main() {
    double x, D;
    std::cout << "Введите x, D: ";
    std::cin >> x  >> D;

    double b = D + x;
    double A = (D * x)/b;

    double s = (pow(A, 2) + b * cos(x))/(pow(D, 3) + ( A + D - b));

    std::cout << "A= " << A << std::endl;
    std::cout << "b= " << b << std::endl;
    std::cout << "Ответ: " << s << std::endl;
    return 0; }