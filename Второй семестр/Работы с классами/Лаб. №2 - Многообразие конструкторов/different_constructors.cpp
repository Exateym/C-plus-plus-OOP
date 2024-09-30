#include <iostream>
using namespace std;

class Salary {
    string full_name; // ФИО
    double base_scale; // Оклад
    int prize; // Премия в %

public:
    Salary() { // Контруктор без параметров
        full_name = "";
        base_scale = 0.0;
        prize = 0;
        cout << "Constructor - Without parameters - For " << this << endl;;
    }
    Salary(string fn, double bs, int p) { // Конструктор с параметрами
        full_name = fn;
        base_scale = bs;
        prize = p;
        cout << "Constructor - With parameters - For " << this << endl;
    }
    Salary(const Salary& t) { // Конструктор копирования
        full_name = t.full_name;
        base_scale = t.base_scale;
        prize = t.prize;
        cout << "Copy\n";
    }
    ~Salary() { // Деструктор
        cout << "Destructor - For " << this << endl;
    }

    // Селекторы
    string getFullName() {
        return full_name;
    }
    double getBaseScale() {
        return base_scale;
    }
    int getPrize() {
        return prize;
    }

    // Модификаторы
    void setFullName(string fn) {
        full_name = fn;
    }
    void setBaseScale(double bs) {
        base_scale = bs;
    }
    void setPrize(int p) {
        prize = p;
    }

    // Метод для просмотра атрибутов
    void show() {
        cout << "ФИО: " << full_name << endl;
        cout << "Оклад: " << base_scale << endl;
        cout << "Премия в %: " << prize << endl;
    }
};

int main() {
    system("chcp 1251");

    // Использование конструктора без параметров
    Salary s1;
    s1.show();

    // Использование конструктора с параметрами
    Salary s2("Иван Иванов Иванович", 1500000.69, 500);
    s2.show();

    // Использование конструктора копирования
    Salary s3(s2);
    s3.show();

    return 0;
}