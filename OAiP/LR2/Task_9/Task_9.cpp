#include <iostream>
#include <cmath>
#include <string> 

int main() {
    double n, k, m, z;
    std::cout << "Введите n, k, m, z: ";
    std::cin >> n >> k >> m >> z;

    double x;
    std::string y;
    if (z>1) {
        x = z;
        y = " z>1, x=z";
    } else {
        x = pow(z, 2) + 1;
        y = " z<=1, x=z^2 + 1";
    }   

    int f;
    double fx;
    std::cout<<"Выберите функцию: " << std::endl;
    std::cout << "1. f(x) = 2x" << std::endl;
    std::cout << "2. f(x) = x^3" << std::endl;
    std::cout << "3. f(x) = x/3" << std::endl;
    std::cin>>f;
    
    double Y;
    switch (f) {
        case 1:
        fx = 2.0 * x;
        break;

        case 2:
        fx = pow(x, 3);
        break;

        case 3:
        fx = x / 3;
        break;
    }

    Y = sin( n * fx) + cos( k * x) + log( m * x );

    std::cout<<"Выбрано условие: "<< y << std::endl;
    std::cout<<"Выбрана функция: "<< f << std::endl;
    std::cout<<"Ответ: "<< Y;

    return 0; }