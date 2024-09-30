#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Конструктор
    Number(int val) : value(val) {}

    // Перегрузка унарного оператора -
    Number operator-() const {
        return Number(-value);
    }

    // Перегрузка унарного оператора ++ (префиксный)
    Number& operator++() {
        ++value;
        return *this;
    }

    // Перегрузка унарного оператора ++ (постфиксный)
    Number operator++(int) {
        Number temp = *this;
        ++value;
        return temp;
    }

    // Метод для отображения значения
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(5);
    num1.display();

    Number num2 = -num1; // Использование перегруженного унарного оператора -
    num2.display();

    ++num1; // Использование перегруженного префиксного оператора ++
    num1.display();

    num1++; // Использование перегруженного постфиксного оператора ++
    num1.display();

    return 0;
}