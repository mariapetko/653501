#include <iostream>

int main() {
    double x;
    std::cout << "Введите x: ";
    std::cin >> x;

    double x2 = x * x;              
    double y = 23.0 * x2;
    double o1 = 3.0 * y + 8.0;
    double o2 = x * ( y + 32.0);
    
    double ans1 = o1 + o2;
    double ans2 = o1 - o2; 

    std::cout << "Ответ 1: " << ans1 << std::endl;
    std::cout << "Ответ 2: " << ans2 << std::endl;

    return 0; }
