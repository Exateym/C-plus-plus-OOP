#include <iostream>
#include <vector>
using namespace std;

// Функция для вывода массива чисел типа int
void printArray(const vector<int>& integerArray)
{
    for (int i = 0; i < integerArray.size(); i++)
        cout << integerArray[i] << ' ';
    cout << endl;
}

// Функция для вывода массива чисел типа double
void printArray(const vector<double>& doubleArray)
{
    for (int i = 0; i < doubleArray.size(); i++)
        cout << doubleArray[i] << ' ';
    cout << endl;
}

// Функция для удаления чётных элементов из массива чисел типа int
vector<int> removeEvenNumberedElements(const vector<int>& inputArray)
{
    vector<int> resultArray;
    for (int i = 0; i < inputArray.size(); i++)
        if ((i + 1) % 2 != 0)
            resultArray.push_back(inputArray[i]);
    return resultArray;
}

// Функция для удаления чётных элементов из массива чисел типа double
vector<double> removeEvenNumberedElements(const vector<double>& inputArray)
{
    vector<double> resultArray;
    for (int i = 0; i < inputArray.size(); i++)
        if ((i + 1) % 2 != 0)
            resultArray.push_back(inputArray[i]);
    return resultArray;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    // Работа с массивом чисел типа int
    cout << "Введите количество элементов для массива типа int: ";
    int amountOfElements;
    cin >> amountOfElements;
    vector<int> intArray;
    for (int i = 0; i < amountOfElements; i++)
        intArray.push_back(rand() % 199 - 99); // Числа типа int
    cout << "Исходный массив (int):\n";
    printArray(intArray);
    vector<int> intResultArray = removeEvenNumberedElements(intArray);
    cout << "Массив типа int после удаления чётных элементов:\n";
    printArray(intResultArray);

    // Работа с массивом чисел типа double
    cout << "Введите количество элементов для массива типа double: ";
    cin >> amountOfElements;
    vector<double> doubleArray;
    for (int i = 0; i < amountOfElements; i++)
        doubleArray.push_back((rand() % 199 - 99) / (rand() % 9 + 1)); // Числа типа double
    cout << "Исходный массив (double):\n";
    printArray(doubleArray);
    vector<double> doubleResultArray = removeEvenNumberedElements(doubleArray);
    cout << "Массив типа double после удаления чётных элементов:\n";
    printArray(doubleResultArray);

    return 0;
}