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
            std::cout << "Нажмите Enter для возврата в меню.";
            std::cin.get();
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (c) {
            case 1: {
                std::cout << "\nПрограмма успешно запущена!\n";


    double A = 0.0;
    double B = M_PI / 2.0; 
    int M = 20;
    
    double H = (B - A) / M; 

    std::cout << std::fixed;

    for (int i = 0; i <= M; i++) {
        double Xi = A + i * H;
         std::cout << "Xi = " << Xi << " "; }

         std::cout << "\n"; 

    for (int i = 0; i <= M; i++) {
        double Xi = A + i * H;
        double Yi = std::sin(Xi) - std::cos(Xi); 
         std::cout << "Y = " << Yi << " "; }

           std::cout << "\n";
    
    
std::cout << "Нажмите Enter для возврата в меню." << std::endl;
std::cin.get();  
                break; }

            case 2: {
                std::cout << "\nЗавершение работы.\n";
                system("pause");
                return 0; 
                break; }

            default: {
                std::cout << "\nТакого пункта нет. Введите 1 или 2.\n";
                std::cout << "Нажмите Enter для возврата в меню.";
                std::cin.get();
                break; }
        }
    }

}