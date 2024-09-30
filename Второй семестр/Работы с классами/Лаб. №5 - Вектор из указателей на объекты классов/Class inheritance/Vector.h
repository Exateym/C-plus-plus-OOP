#pragma once
#include "Object.h"
#include <iostream>

using namespace std;

class BECTOP {
    Object** elements; // Указатель на массив указателей на Object
    int size;          // Общий размер массива
    int current_position; // Текущая позиция заполнения

public:
    BECTOP() : elements(nullptr), size(0), current_position(0) {}

    BECTOP(int n) : size(n), current_position(0) {
        elements = new Object * [size];
    }

    ~BECTOP() {
        if (elements != nullptr) {
            for (int i = 0; i < current_position; ++i) {
                delete elements[i]; // Освобождаем память объектов
            }
            delete[] elements; // Освобождаем массив
        }
    }

    void Add(Object* obj) {
        if (current_position < size) {
            elements[current_position++] = obj;
        }
        else {
            cout << "Вектор переполнен, невозможно добавить элемент." << endl;
        }
    }

    // Перегрузка операции вывода
    friend ostream& operator<<(ostream& os, const BECTOP& v) {
        if (v.current_position == 0) {
            os << "Вектор пуст." << endl;
        }
        else {
            for (int i = 0; i < v.current_position; ++i) {
                v.elements[i]->Show(); // Вызов виртуального метода Show
            }
        }
        return os;
    }
};