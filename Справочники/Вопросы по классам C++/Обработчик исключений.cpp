#include <iostream>
#include <stdexcept>

using namespace std;

// Функция деления
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw invalid_argument("Деление на ноль невозможно");
    }
    return numerator / denominator;
}

// Функция ввода числа с проверкой корректности ввода
double getNumber(const string& prompt) {
    double number;
    cout << prompt;
    while (true) {
        cin >> number;
        if (cin.fail()) {
            cin.clear(); // Сбрасываем флаг ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очищаем буфер ввода
            cout << "Некорректный ввод. Пожалуйста, введите число: ";
        }
        else {
            break;
        }
    }
    return number;
}

int main() {
    try {
        double num = getNumber("Введите числитель: ");
        double denom = getNumber("Введите знаменатель: ");

        double result = divide(num, denom);
        cout << "Результат: " << result << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Ошибка: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "Непредвиденная ошибка: " << e.what() << endl;
    }

    return 0;
}