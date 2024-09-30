#include <iostream>
#include "Person.h" // ����������� ������ �������� ����
#include "Student.h" // ����������� ������ ������������ ����

using namespace std;

// �������, ����������� ������ �������� ������
void displayPerson(const Person& person) {
    cout << "����������� ������ ������� Person: " << person << endl;
}

// �������, ������������ ������ �������� ������
Person createPerson() {
    return Person("���� ������", 45);
}

// �������, ������������ ������� �������������������� ������ � ��������
bool Unsatisfactory(const Student& student) {
    for (const auto& subject : student.getSubjects()) { // ��������� ���� ��������� � �� ������
        if (subject.grade < 3) {
            return true;
        }
    }
    return false;
}

int main() {
    system("chcp 1251");
    system("cls");

    // ������������ �������� ��������
    Person p1("���� ������", 30); // ������ �������� ������
    Student s1("������� �������", 20, { { "����������", 4 }, { "�����������", 5 } }); // ������ ������������ ������
    Student s2("������� ������", 22, { { "����������", 2 }, { "�����������", 4 } }); // ������� � �������������������� �������

    // �������� ������� Unsatisfactory
    cout << "�������� �� �������������������� ������:\n";
    if (Unsatisfactory(s2)) { // �������� ������� ��������
        cout << "� �������� ���� �������������������� ������:\n";
        cout << s2 << endl;
    }

    // ������������� ������� � ��������� �������� ������
    displayPerson(p1); // �������� ������� �������� ������
    displayPerson(s1); // ������������� �������� �����������

    Person p2 = createPerson(); // ��������� ������� �������� ������ �� �������
    cout << "��������� � ������� ������� ������ Person: " << p2 << endl;

    system("pause");
    return 0;
}
