#include <iostream>
#include <cmath>
 #include <iomanip>
 #include <limits>


int main() {

    int c = 0; 

    while (true) {

        std::cout << "СУТЬ ЗАДАНИЯ: Вычислить сумму ряда\n";
        std::cout << "КТО ВЫПОЛНИЛ: Петько Мария, 653501\n";
        std::cout << "Введите номер действия (1/2): \n";
        std::cout << "1. Запустить программу\n";
        std::cout << "2. Выйти из программы\n";

        std::cin >> c; 

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nВы ввели буквы или символы! Нужно вводить только цифры.\n";
            std::cout << "Нажмите Enter для продолжения...";
            std::cin.get();
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (c) {
            case 1: {
                std::cout << "\nПрограмма успешно запущена!\n";

    double s = 0.0; 
    double E = 0.001; 
    int n = 1; 
    double dn; 

    do {
        dn = 1.0 / pow(2, n) + 1.0 / pow(3, n); 
        s = s + dn; 
        n = n + 1; 
    } while (dn >= E); 

    std::cout << std::fixed;
    std::cout << "Сумма = " << s << std::endl;
    std::cout << "Количество шагов = " << n - 1 << std::endl; 
    
std::cout << "Нажмите Enter для возврата в меню..." << std::endl;
std::cin.get();  
                break; }

            case 2: {
                std::cout << "\nЗавершение работы.\n";
                system("pause");
                return 0; }

            default:
                std::cout << "\nТакого пункта нет. Введите 1 или 2.\n";
                system("pause");
                break;
        }
    }

}