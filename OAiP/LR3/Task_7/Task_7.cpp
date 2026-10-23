#include <iostream>
#include <cmath>
#include <limits>

int main() {
    int c = 0;

    while (true) {
        std::cout << "СУТЬ ЗАДАНИЯ: Вывести все числа Армстронга меньше введенного числа\n";
        std::cout << "КТО ВЫПОЛНИЛ: Петько Мария, 653501\n";
        std::cout << "1. Запустить программу\n";
        std::cout << "2. Выйти из программы\n";
        std::cout << "Введите номер действия (1/2): ";

        std::cin >> c;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Вы ввели буквы или символы! Нужно вводить только цифры.\n";
            std::cout << "Нажмите Enter для возврата в меню.";
            std::cin.get();
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (c) {
            case 1: {
                std::cout << "\nПрограмма успешно запущена!\n";

                int m = 0;
                while (true) {
                    std::cout << "Введите верхнюю границу (число): ";
                    if (std::cin >> m && m > 0) {
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    std::cout << "Неверный ввод! Введите положительное число.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                std::cout << "Числа Армстронга меньше " << m << ":\n";
                bool f = false;

                for (int i = 0; i < m; i++) {
                    int k = 0;
                    int t = i;
                    while (t > 0) { k++; t /= 10; }
                    if (i == 0) k = 1;

                    int s = 0;
                    t = i;
                    while (t > 0) {
                        s += (int)std::pow(t % 10, k);
                        t /= 10;
                    }

                    if (s == i) {
                        std::cout << i << " ";
                        f = true;
                    }
                }

                if (!f) {
                    std::cout << "Таких чисел нет.";
                }
                std::cout << "\n";

                std::cout << "Нажмите Enter для возврата в меню.";
                std::cin.get();
                break;
            }

            case 2: {
                std::cout << "\nЗавершение работы.\n";
                return 0;
            }

            default:
                std::cout << "\nТакого пункта нет. Введите 1 или 2.\n";
                std::cout << "Нажмите Enter для возврата в меню.";
                std::cin.get();
                break;
        }
    }
}