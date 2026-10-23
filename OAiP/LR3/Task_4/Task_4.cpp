#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>


int main() {

    int c = 0;

    while (true) {

        std::cout << "СУТЬ ЗАДАНИЯ: Вычислить значение функции двумя способами\n";
        std::cout << "КТО ВЫПОЛНИЛ: Петько Мария, 653501, вариант 13\n";
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

                int n, k;

                while (true) {
                    std::cout << "Введите количество членов ряда: ";
                    if (std::cin >> n && n > 0) {
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    std::cout << "Введите число!\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                while (true) {
                    std::cout << "Введите количество чисел x, которые вы хотите проверить: ";
                    if (std::cin >> k && k > 0) {
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    std::cout << "Введите число!\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                for (int s = 1; s <= k; s++) {
                    double x;

                    while (true) {
                        std::cout << "Введите число x (от 0.1 до 1): ";
                        if (!(std::cin >> x)) {
                            std::cout << "Введите число!\n";
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            continue;
                        }

                        if (x < 0.1 || x > 1) {
                            std::cout << "Число введено неверно!. Повторите.\n";
                            continue;
                        }

                        break;
                    }

                    double Y = log(1 / (2 + 2 * x + x * x));
                    long double sum = 0.0;
                    long double a = (1.0 + x) * (1.0 + x); // (1+x)^2
                    long double b = -a;

                    for (int i = 1; i <= n; i++) {
                        sum += b / i;
                        b *= -a;
                    }

                    std::cout << std::fixed;
                    std::cout << "Значение функции с помощью ряда S(x) = " << sum << std::endl;
                    std::cout << "Значение функции с помощью стандартных функций  = " << Y << std::endl;
                }

                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Нажмите Enter для возврата в меню." << std::endl;
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