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
    // ������������
    Student() : Person() {} // �� ���������
    Student(string n, int a, vector<Subject> s) : Person(n, a), studies(s) {} // � �����������
    Student(const Student& s) : Person(s), studies(s.studies) {} // �����������

    void Show() {
        cout << "\n���: " << name;
        cout << "\n�������: " << age;
        for (int i = 0; i < size(studies); ++i) {
            cout << endl;
            cout << "��������: " << studies[i].title << endl;
            cout << "������: " << studies[i].grade << endl;
        }
        cout << endl;
    }

    // ���������
    vector<Subject> getSubjects() const {
        return studies;
    }

    // ������������
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

    // ���������� ��������� ������������
    Student& operator=(const Student& s) {
        if (this != &s) {
            Person::operator=(s); // ����������� ������������
            studies = s.studies;
        }
        return *this;
    }

    // ���������� ����� � ������
    friend istream& operator>>(istream& i, Student& s) {
        i >> dynamic_cast<Person&>(s);
        int numSubjects;
        cout << "������� ���������� ���������: ";
        i >> numSubjects;
        s.studies.clear();
        for (int j = 0; j < numSubjects; j++) {
            Subject sub;
            cout << "�������� ��������: ";
            i >> sub.title;
            cout << "������: ";
            i >> sub.grade;
            s.studies.push_back(sub);
        }
        return i;
    }

    friend ostream& operator<<(ostream& o, const Student& s) {
        o << dynamic_cast<const Person&>(s);
        o << "\n��������:\n";
        for (const auto& sub : s.studies) {
            o << sub.title << " - " << sub.grade << '\n';
        }
        return o;
    }

    // ����� ��� �������� �� �������������������� ������
    void checkUnsatisfactory(int threshold) const {
        for (const auto& sub : studies) {
            if (sub.grade < threshold) {
                cout << "������� \"" << sub.title << "\" ����� �������������������� ������: " << sub.grade << "\n";
            }
        }
    }
};
