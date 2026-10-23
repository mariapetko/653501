#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>


int main() {

    int c = 0;

    while (true) {

        std::cout << "СУТЬ ЗАДАНИЯ: Найти приближенно корень уравнения f(x) = 0\n";
        std::cout << "f(x) = sin(x) + tan(x) - 1/(1+x^2), [-1; 1]\n";
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

                int n = 0;
                while (true) {
                    std::cout << "На сколько частей разбить отрезок [-1; 1]? ";
                    if (std::cin >> n && n > 0) {
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    std::cout << "Введите положительное число!\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                double a = -1.0;
                double b = 1.0;
                double h = (b - a) / n;

                double bx = a;
                double bf = std::sin(a) + std::tan(a) - 1.0 / (1.0 + a * a);

                for (int i = 1; i <= n; i++) {
                    double x = a + i * h;
                    double f = std::sin(x) + std::tan(x) - 1.0 / (1.0 + x * x);

                    if (std::fabs(f) < std::fabs(bf)) {
                        bf = f;
                        bx = x;
                    }
                }

                std::cout << std::fixed;
                std::cout << "Шаг: h = " << h << "\n";
                std::cout << "Приближённый корень: x = " << bx << "\n";
                std::cout << "Значение функции в этой точке: f(x) = " << bf << "\n";

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