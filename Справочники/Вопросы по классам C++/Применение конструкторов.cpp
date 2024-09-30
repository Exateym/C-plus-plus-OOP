#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Конструктор по умолчанию
    Student() : name("Unknown"), age(0) {
        cout << "Default constructor called" << endl;
    }

    // Конструктор с параметрами
    Student(const string& name, int age) : name(name), age(age) {
        cout << "Parameterized constructor called" << endl;
    }

    // Конструктор копирования
    Student(const Student& other) : name(other.name), age(other.age) {
        cout << "Copy constructor called" << endl;
    }

    // Метод для отображения информации о студенте
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void setData(const string& n, int a) {
        name = n;
        age = a;
        cout << "Данные изменены\n";
    }
};

int main() {
    // Создание объекта с использованием конструктора по умолчанию
    Student student1;
    student1.display();

    // Создание объекта с использованием конструктора с параметрами
    Student student2("Alice", 21);
    student2.display();

    // Создание объекта с использованием конструктора копирования
    Student student3(student2);
    student3.display();

    student2.setData("Toobrick", 19);
    student2.display();

    student3.display();

    return 0;
}
