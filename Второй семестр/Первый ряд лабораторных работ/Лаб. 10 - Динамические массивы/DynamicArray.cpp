#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int l;
    cout << "Введите количество строк (int l): ";
    cin >> l;
    int c;
    cout << "Введите количество столбцов (int c): ";
    cin >> c;

    // Создание массива указателей
    int** mas = new int* [l];
    for (int i = 0; i < l; i++)
        mas[i] = new int[c];

    // Заполнение случайными числами
    srand(time(0));
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            mas[i][j] = rand() % 10;

    // Вывод текущего массива
    cout << "Массив:\n";
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
            cout << mas[i][j] << " ";
        cout << endl;
    }

    int a; // типо K
    cout << "\nВведите количество строк, которые нужно удалить спереди (int a): ";
    cin >> a;

    // Создание нового массива указателей
    int** new_mas = new int* [l - a];
    for (int i = 0; i < l - a; ++i)
        new_mas[i] = new int[c];

    // Перемещение элементов в новый массив, не включая те, которые перемещать не нужно
    for (int i = 0; i < l - a; i++)
        for (int j = 0; j < c; j++)
            new_mas[i][j] = mas[i + a][j];

    // Очистка памяти для исходного массива
    for (int i = 0; i < l; i++)
        delete[] mas[i];
    delete[] mas;

    cout << "Конечный массив:\n";
    for (int i = 0; i < l - a; i++)
    {
        for (int j = 0; j < c; j++)
            cout << new_mas[i][j] << " ";
        cout << endl;
    }

    // Очистка памяти для конечного массива
    for (int i = 0; i < l - a; i++)
        delete[] new_mas[i];
    delete[] new_mas;

    system("pause");
    return 0;
}
