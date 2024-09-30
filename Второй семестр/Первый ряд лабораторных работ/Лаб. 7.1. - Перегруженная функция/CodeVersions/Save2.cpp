#include <iostream>
#include <stdio.h>
using namespace std;

const int maximalSizeOfArray = 500;
int sizeOfCurrentArray;

void removeEvenElements(int intArray[])
{
	bool flag = false;
	for (int i = 0; i < sizeOfCurrentArray; i++)
	{
		if (flag)
		{
			flag = false;
			sizeOfCurrentArray--;
			for (int j = i; j < sizeOfCurrentArray; j++)
				intArray[j] = intArray[j + 1];
		}
		if (!flag)
			flag = true;
		else
			flag = false;
	}
	cout << "Результат удаления из исходного массива чётных элементов через функцию, работающую с числами типа int\n";
	for (int j = 0; j < sizeOfCurrentArray; j++)
		cout << intArray[j] << ' ';
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива чисел типа int\n";
	cin >> sizeOfCurrentArray;
	int arrayOfNumbers[maximalSizeOfArray];
	srand(time(0));
	cout << "Исходный массив чисел типа int:\n";
	for (int i = 0; i < sizeOfCurrentArray; i++)
	{
		arrayOfNumbers[i] = rand() % 199 - 99;
		cout << arrayOfNumbers[i] << ' ';
	}
	cout << endl;
	removeEvenElements(arrayOfNumbers);

	cout << "Введите размер массива чисел типа int\n";
	cin >> sizeOfCurrentArray;
	cout << "Исходный массив чисел типа int:\n";
	for (int i = 0; i < sizeOfCurrentArray; i++)
	{
		arrayOfNumbers[i] = rand() % 199 - 99;
		cout << arrayOfNumbers[i] << ' ';
	}
	cout << endl;
	removeEvenElements(arrayOfNumbers);

	system("pause");
	return 0;
}