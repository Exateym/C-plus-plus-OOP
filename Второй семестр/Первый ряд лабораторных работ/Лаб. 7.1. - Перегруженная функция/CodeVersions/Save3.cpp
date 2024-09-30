#include <iostream>
#include <stdio.h>
using namespace std;

const int maximalsizeOfSourceArrays = 500;

int writeAnElement(int index, int intArray[])
{
	return intArray[index];
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер исходного массива\n";
	int sizeOfSourceArray;
	cin >> sizeOfSourceArray;
	int sourceArray[maximalsizeOfSourceArrays];
	srand(time(0));
	cout << "Исходный массив чисел типа int:\n";
	for (int i = 0; i < sizeOfSourceArray; i++)
	{
		sourceArray[i] = rand() % 199 - 99;
		cout << sourceArray[i] << ' ';
	}
	cout << endl;
	int intArray[maximalsizeOfSourceArrays];
	int sizeOfIntArray = 0;
	for (int i = 0; i < sizeOfSourceArray; i++)
		if (i % 2 != 0)
		{
			intArray[counter] = writeAnElement(i, sourceArray);
			counter++;
		}

	system("pause");
	return 0;
}