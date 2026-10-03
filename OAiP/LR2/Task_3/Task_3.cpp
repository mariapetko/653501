#include <iostream>

int main() {
    double b1;

    std::cout << "Введите b1: "; 
    std::cin >> b1;

    double q=1.0/26.0;
    double s=b1/(1.0-q);

    std::cout<< "Сумма всех членов бесконечно убывающей прогресии равна " << s << std::endl;
  
    return 0; } 
