#pragma once
#include "Object.h"
#include <iostream>
using namespace std;

class Person : public Object {
protected:
    string name;
    int age;
public:
    // ������������
    Person() : name(""), age(0) {} // �� ���������
    Person(const string& n, int a) : name(n), age(a) {} // � �����������
    Person(const Person& p) { // ����������� �����������
        name = p.name;
        age = p.age;
    }

    void Show() {
        cout << "\n���: " << name;
        cout << "\n�������: " << age;
        cout << endl;
    }

    // ���������
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }

    // ������������
    void setName(const string& n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }

    // �������� ������������
    Person& operator=(const Person& p) {
        if (this != &p) {
            name = p.name;
            age = p.age;
        }
        return *this;
    }

    // ���� � �����
    friend istream& operator>>(istream& is, Person& p) {
        cout << "������� ��� (string): ";
        is >> p.name;
        cout << "������� ������� (int): ";
        is >> p.age;
        return is;
    }

    friend ostream& operator<<(ostream& os, const Person& p) {
        os << "���: " << p.name << ", �������: " << p.age;
        return os;
    }
};
