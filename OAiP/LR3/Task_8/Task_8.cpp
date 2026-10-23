#include <iostream>
#include <limits>

int main() {
    int c = 0;

    while (true) {
        std::cout << "СУТЬ ЗАДАНИЯ: Вычислить сумму a0 - 2a1 + 4a2 - 8a3 ...\n";
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

                int n = 0;
                while (true) {
                    std::cout << "Введите n (количество элементов, n > 0): ";
                    if (std::cin >> n && n > 0) {
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    std::cout << "Неверный ввод! Введите положительное число.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                long long sum = 0;
                long long p = 1;

                for (int i = 0; i < n; i++) {
                    long long a = 0;
                    while (true) {
                        std::cout << "Введите a[" << i << "]: ";
                        if (std::cin >> a) {
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            break;
                        }
                        std::cout << "Неверный ввод! Введите целое число.\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }

                    sum += a * p;
                    p *= -2;
                }

                std::cout << "\nРезультат вычисления: " << sum << "\n";

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