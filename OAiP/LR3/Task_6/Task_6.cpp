#include <iostream>
#include <iomanip>
#include <limits>

int main() {
    int c = 0;

    while (true) {
        std::cout << "СУТЬ ЗАДАНИЯ: найти минимум из a=sin(x), b=cos(x), c=ln|x|\n";
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

                double x = 0.0;
                while (true) {
                    std::cout << "Введите x (x не должен быть равен 0): ";
                    if (std::cin >> x && x != 0.0) {
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        break;
                    }
                    std::cout << "Неверный ввод! Введите число, отличное от 0.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                double a = 0, term = x;
                for (int i = 1; i <= 15; i++) {
                    a += term;
                    term = -term * x * x / ((2 * i) * (2 * i + 1));
                }

                double b = 0;
                term = 1;
                for (int i = 1; i <= 15; i++) {
                    b += term;
                    term = -term * x * x / ((2 * i - 1) * (2 * i));
                }

                double z = (x < 0) ? -x : x;
                double t = (z - 1) / (z + 1);
                double d = 0;
                term = t;
                for (int i = 1; i <= 50; i++) {
                    d += term / (2 * i - 1);
                    term *= t * t;
                }
                d *= 2;

                double mn = a;
                if (b < mn) mn = b;
                if (d < mn) mn = d;

                std::cout << std::fixed << std::setprecision(6);
                std::cout << "a = sin(x) = " << a << "\n";
                std::cout << "b = cos(x) = " << b << "\n";
                std::cout << "c = ln|x|  = " << d << "\n";
                std::cout << "Минимум = " << mn << "\n";

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