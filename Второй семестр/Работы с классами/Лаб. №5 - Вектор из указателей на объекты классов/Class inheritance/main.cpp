#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Vector.h" // ����������� ������ �������

using namespace std;

int main() {
    system("chcp 1251");
    system("cls");

    BECTOP v(5); // ������ �� 5 ���������
    Person a("������", 30); // ������ ������ Person
    Student b("������", 20, { {"����������", 5}, {"�������", 4}, {"������", 3} }); // ������ ������ Student

    v.Add(&a); // ���������� ������� Person � ������
    v.Add(&b); // ���������� ������� Student � ������

    cout << v; // ����� �������

    system("pause");
    return 0;
}
