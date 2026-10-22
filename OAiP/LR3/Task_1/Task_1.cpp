#include <iostream>
 #include <iomanip>
 #include <limits>


int main() {

    int c = 0; 

    while (true) {

        std::cout << "СУТЬ ЗАДАНИЯ: Вычислить сумму квадратов разностей элементов двух массивов\n";
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

        // >>> ГЛАВНАЯ ПРАВКА: убираем остаток '\n' после ввода числа <<<
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (c) {
            case 1: {
                std::cout << "\nПрограмма успешно запущена!\n";

                int i = 1;
            long double sum = 0.0;

            while (i <= 30) {
        long double a, b;
        if (i % 2 != 0) {  
            a = i;
            b = i * i;
        } else {           
            a = i / 2.0;
            b = i * i * i;
        }
        sum += (a - b) * (a - b);
        i++;
    }
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "N = " << sum << std::endl;
std::cout << "Нажмите Enter для возврата в меню..." << std::endl;
std::cin.get();   // ждём Enter
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