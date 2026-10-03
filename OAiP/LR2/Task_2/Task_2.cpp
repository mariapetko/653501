#include <iostream>

int main() {
    double x, y, z;

    std::cout << "Введите x, y, z: "; 
    std::cin >> x >> y >> z;

    if ( (x + y > z) && (x + z > y) && (y + z > x) ) {
        std::cout<< "Такой треугольник существует" << std::endl;
    } else {
        std::cout<< "Такого трегольника не существует" << std::endl;
    }

    return 0; }