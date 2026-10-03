#include <iostream>

int main() {
    int x, y;
    std::cout << "Введите x, y: ";
    std::cin >> x >> y;

    if (x<y) {
        x=0;
    } else if (y<x) {
        y=0;
    } else if (x=y) {
        x=0;
        y=0;
    }
     
    double k;
    std::cout << "Введите k: ";
    std::cin >> k;

    double a, b, c;
    std::cout << "Введите a, b, c: ";
    std::cin >> a >> b >> c;

    if ((a>b) && (a>c)) {
        a=a-k;
    } else if ((b>a) && (b>c)) {
        b=b-k;
    } else if ((c>a) && (c>b)) {
        c=c-k;
    }

    std::cout << "x= " << x << std::endl;
    std::cout << "y= " << y << std::endl;
    std::cout << "a= " << a << std::endl;
    std::cout << "b= " << b << std::endl;
    std::cout << "c= " << c << std::endl;

    return 0; }