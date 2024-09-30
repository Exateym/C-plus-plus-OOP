#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
using namespace std;

const int maximalsizeOfSourceArrays = 500;

int writeAnElement(int index, int intArray[])
{
	return intArray[index];
}

double writeAnElement(int index, double doubleArray[])
{
	return doubleArray[index];
}

// Функция для удаления четных слов из строки
string removeEvenWords(const string& inputString)
{
	istringstream iss(inputString);
	string word;
	vector<string> words;

	// Разделение строки на слова
	while (iss >> word)
		words.push_back(word);

	// Создание нового вектора без четных слов
	vector<string> resultWords;
	for (size_t i = 0; i < words.size(); i++)
		if (i % 2 != 0)
			resultWords.push_back(words[i]);

	// Сборка новой строки из вектора
	string resultString;
	for (const auto& w : resultWords)
		resultString += w + " ";

	return resultString;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер исходного массива: ";
	int sizeOfSourceArray;
	cin >> sizeOfSourceArray;
	int sourceArray[maximalsizeOfSourceArrays];
	srand(time(0));
	cout << "Исходный массив чисел:\n";
	for (int i = 0; i < sizeOfSourceArray; i++)
	{
		sourceArray[i] = rand() % 199 - 99;
		cout << sourceArray[i] << ' ';
	}
	cout << endl;

	int intArray[maximalsizeOfSourceArrays];
	int sizeOfIntArray = 0;
	for (int i = 0; i < sizeOfSourceArray; i++)
		if (i % 2 == 0)
		{
			intArray[sizeOfIntArray] = writeAnElement(i, sourceArray);
			sizeOfIntArray++;
		}
	cout << "Массив чисел типа int:\n";
	for (int i = 0; i < sizeOfIntArray; i++)
		cout << intArray[i] << ' ';
	cout << endl;

	double doubleArray[maximalsizeOfSourceArrays];
	int sizeOfdoubleArray = 0;
	for (int i = 0; i < sizeOfSourceArray; i++)
		if (i % 2 == 0)
		{
			doubleArray[sizeOfdoubleArray] = writeAnElement(i, sourceArray);
			sizeOfdoubleArray++;
		}
	cout << "Массив чисел типа double:\n";
	for (int i = 0; i < sizeOfdoubleArray; i++)
		cout << doubleArray[i] << ' ';
	cout << endl;

	cout << "Введите строку: ";
	cin.ignore(); // Игнорирование символа новой строки после ввода размера массива
	string inputString;
	getline(cin, inputString);
	string resultString = removeEvenWords(inputString);
	cout << "Строка без четных слов:\n" << resultString << endl;

	system("pause");
	return 0;
}