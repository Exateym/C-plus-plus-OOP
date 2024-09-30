#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Vector.h" // Подключение класса вектора

using namespace std;

int main() {
    system("chcp 1251");
    system("cls");

    BECTOP v(5); // Вектор из 5 элементов
    Person a("Иванов", 30); // Объект класса Person
    Student b("Петров", 20, { {"Математика", 5}, {"Русский", 4}, {"Физика", 3} }); // Объект класса Student

    v.Add(&a); // Добавление объекта Person в вектор
    v.Add(&b); // Добавление объекта Student в вектор

    cout << v; // Вывод вектора

    system("pause");
    return 0;
}
