include <iostream>

int main() {
    double x, y, ans;
    std::cout << "Введите x, y: ";
    std::cin >> x >> y;

    if ( x>y ) {
       ans=x;
    } else {
    ans=y;
    }
    std::cout << "Ответ: " << ans << std::endl;

    return 0; }
