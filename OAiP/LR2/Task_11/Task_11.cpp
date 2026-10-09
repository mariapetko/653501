#include <iostream>

int main(){

int h1, min1;
std::cout << "Введите час и минуты начала: ";
std::cin>> h1 >> min1;

int h2, min2;
std::cout << "Введите час и минуты конца: ";
std::cin>> h2 >> min2;

int a = h1 * 60 + min1;
int b = h2 * 60 + min2;
int c = b - a;

if (c < 0) {
        c = c + 1440;
    }

    c = c % 1440;
    int h = c / 60;
    int m = c % 60;

    std::cout << "Студент решал задачи: " << h << " ч. " << m << " мин." << std::endl;

    return 0;
}