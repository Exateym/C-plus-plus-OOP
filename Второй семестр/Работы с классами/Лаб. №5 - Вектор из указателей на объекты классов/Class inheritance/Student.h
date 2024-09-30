#pragma once
#include "Person.h"
#include <vector>
#include <iostream>
using namespace std;

class Student : public Person {
protected:
    struct Subject {
        string title;
        int grade;
    };
    vector<Subject> studies;

public:
    // Конструкторы
    Student() : Person() {} // По умолчанию
    Student(string n, int a, vector<Subject> s) : Person(n, a), studies(s) {} // С параметрами
    Student(const Student& s) : Person(s), studies(s.studies) {} // Копирования

    void Show() {
        cout << "\nИмя: " << name;
        cout << "\nВозраст: " << age;
        for (int i = 0; i < size(studies); ++i) {
            cout << endl;
            cout << "Название: " << studies[i].title << endl;
            cout << "Оценка: " << studies[i].grade << endl;
        }
        cout << endl;
    }

    // Селекторы
    vector<Subject> getSubjects() const {
        return studies;
    }

    // Модификаторы
    void setSubjects(const vector<Subject>& s) {
        studies = s;
    }

    void addSubject(const string& title, int grade) {
        studies.push_back({ title, grade });
    }

    void removeSubject(const string& title) {
        studies.erase(
            remove_if(studies.begin(), studies.end(), [&](const Subject& s) {
                return s.title == title;
                }),
            studies.end());
    }

    // Перегрузка оператора присваивания
    Student& operator=(const Student& s) {
        if (this != &s) {
            Person::operator=(s); // Наследуемое присваивание
            studies = s.studies;
        }
        return *this;
    }

    // Перегрузки ввода и вывода
    friend istream& operator>>(istream& i, Student& s) {
        i >> dynamic_cast<Person&>(s);
        int numSubjects;
        cout << "Введите количество предметов: ";
        i >> numSubjects;
        s.studies.clear();
        for (int j = 0; j < numSubjects; j++) {
            Subject sub;
            cout << "Название предмета: ";
            i >> sub.title;
            cout << "Оценка: ";
            i >> sub.grade;
            s.studies.push_back(sub);
        }
        return i;
    }

    friend ostream& operator<<(ostream& o, const Student& s) {
        o << dynamic_cast<const Person&>(s);
        o << "\nПредметы:\n";
        for (const auto& sub : s.studies) {
            o << sub.title << " - " << sub.grade << '\n';
        }
        return o;
    }

    // Метод для проверки на неудовлетворительные оценки
    void checkUnsatisfactory(int threshold) const {
        for (const auto& sub : studies) {
            if (sub.grade < threshold) {
                cout << "Предмет \"" << sub.title << "\" имеет неудовлетворительную оценку: " << sub.grade << "\n";
            }
        }
    }
};
