#include <iostream>
#include <cmath>

int main(){
    
    double x1, y1, r;
    std::cout << "Введите параметры круга 1 (x1, y1, r): ";
    std::cin >> x1 >> y1 >> r;
    if (r < 0) {
        std::cout << "Ошибка" << std::endl;
        return 1;
    }

    double x2, y2, R;
    std::cout << "Введите параметры круга 2 (x2, y2, R): ";
    std::cin >> x2 >> y2 >> R;
    if (R < 0) {
        std::cout << "Ошибка" << std::endl;
        return 1;
    }

    double d = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));

    if (d + r <= R) {
    std::cout << "Да";
    } else if (d + R <= r) {
    std::cout << "Да, но справедливо обратное для двух фигур";
     } else if (d < r + R) { 
    std::cout << "Фигуры пересекаются";
     } else {
    std::cout << "Ни одно условие не выполнено";
    }

    return 0;
}