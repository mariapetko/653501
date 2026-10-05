#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    int N;
    std::cout << "Введите a, b, c, N: ";
    std::cin >> a >> b >> c >> N;

    double Y;
    switch (N) {
        case 2:
        Y = b * c - pow(a, 2);
        break;

        case 56:
        Y = b * c;
        break;

        case 7:
        Y = pow(a, 7) + c;
        break;

        case 3:
        Y = a - b * c;
        break;

        default: 
        Y = pow ( a + b, 3);
        break;
    }

    std::cout << "Ответ: " << Y << std::endl;

    return 0; }