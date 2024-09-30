#pragma once
#include "Object.h"
#include <iostream>

using namespace std;

class BECTOP {
    Object** elements; // ��������� �� ������ ���������� �� Object
    int size;          // ����� ������ �������
    int current_position; // ������� ������� ����������

public:
    BECTOP() : elements(nullptr), size(0), current_position(0) {}

    BECTOP(int n) : size(n), current_position(0) {
        elements = new Object * [size];
    }

    ~BECTOP() {
        if (elements != nullptr) {
            for (int i = 0; i < current_position; ++i) {
                delete elements[i]; // ����������� ������ ��������
            }
            delete[] elements; // ����������� ������
        }
    }

    void Add(Object* obj) {
        if (current_position < size) {
            elements[current_position++] = obj;
        }
        else {
            cout << "������ ����������, ���������� �������� �������." << endl;
        }
    }

    // ���������� �������� ������
    friend ostream& operator<<(ostream& os, const BECTOP& v) {
        if (v.current_position == 0) {
            os << "������ ����." << endl;
        }
        else {
            for (int i = 0; i < v.current_position; ++i) {
                v.elements[i]->Show(); // ����� ������������ ������ Show
            }
        }
        return os;
    }
};