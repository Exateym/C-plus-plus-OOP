#include <iostream>
#include <stdlib.h>
using namespace std;
const int n = 100; // Порядок квадратной матрицы
int a[n][n];

int counter(int b[][n], int s) { // Используем первую размерность массива как неизвестную

    // Поиск минимального элемента с главной диагонали
    int minimum = b[0][0];
    for (int i = 0; i < s; ++i) if (b[i][i] < minimum) minimum = b[i][i];
    
    // Подсчёт количества элементов массива, больших, чем минимальный элемент главной диагонали
    int amount = 0;
    for (int i = 0; i < s; ++i) for (int j = 0; j < s; ++j) if (b[i][i] > minimum) ++amount;
    
    return amount;
}

int main() {
    
    // Установка границ массива
    int s;
    do {
        cout << "Size: ";
        cin >> s;
        if (s > n) cout << "No enough space in the array\n";
    } while (s > n);
    
    // Заполнение матрицы случайными числами и вывод в консоль
    srand(time(0));
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < s; ++j) {
            a[i][j] = rand() % 199 - 99; // Числа от -99 до 99
            if (a[i][j] < -9) cout << a[i][j] << " "; // Числа от -99 до -10
            if (a[i][j] > -10 && a[i][j] < 0) cout << a[i][j] << "  "; // Числа от -9 до -1
            if (a[i][j] > 9) cout << " " << a[i][j] << " "; // Числа от 10 до 99
            if (a[i][j] > -1 && a[i][j] < 10) cout << " " << a[i][j] << "  "; // Числа от 0 до 9
        }
        cout << endl;
    }
    
    cout << "Number of elements greater than any element on the main diagonal: " << counter(a, s); // Массив передаётся в функцию как параметр
    
    return 0;
}