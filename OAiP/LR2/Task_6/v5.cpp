#include <iostream>
#include <cmath>

int main() {
    double x, n, m, K;
    std::cout << "Введите x, n, m, K: ";
    std::cin >> x  >> n >> m >> K;

    double A = fabs( n+m );
    double D = tan(x);

    double Y = 1.29 + (K / A) + pow(D, 2);

    std::cout << "A= " << A << std::endl;
    std::cout << "D= " << D << std::endl;
    std::cout << "Ответ: " << Y << std::endl;
    return 0; }