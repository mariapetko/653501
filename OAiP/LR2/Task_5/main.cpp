##include <iostream>

int main() {
    double x, y;
    std::cout << "Введите x, y: ";
    std::cin >> x >> y;

    bool a = (x > y);
    double ans1= a ? x : y;

    std::cout << "Ответ 1: " << ans1 << std::endl;

    double ans2= (x > y) ? x : y;


    std::cout << "Ответ 2: " << ans2 << std::endl;

    return 0; }
