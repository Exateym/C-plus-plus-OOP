#pragma once
#include "Object.h"
#include <iostream>
using namespace std;

class Person : public Object {
protected:
    string name;
    int age;
public:
    // Конструкторы
    Person() : name(""), age(0) {} // По умолчанию
    Person(const string& n, int a) : name(n), age(a) {} // С параметрами
    Person(const Person& p) { // Конструктор копирования
        name = p.name;
        age = p.age;
    }

    void Show() {
        cout << "\nИмя: " << name;
        cout << "\nВозраст: " << age;
        cout << endl;
    }

    // Селекторы
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }

    // Модификаторы
    void setName(const string& n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }

    // Оператор присваивания
    Person& operator=(const Person& p) {
        if (this != &p) {
            name = p.name;
            age = p.age;
        }
        return *this;
    }

    // Ввод и вывод
    friend istream& operator>>(istream& is, Person& p) {
        cout << "Введите имя (string): ";
        is >> p.name;
        cout << "Введите возраст (int): ";
        is >> p.age;
        return is;
    }

    friend ostream& operator<<(ostream& os, const Person& p) {
        os << "Имя: " << p.name << ", Возраст: " << p.age;
        return os;
    }
};
