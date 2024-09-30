#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool isWordEndingSymbol(char symbol)
{
	return (symbol == ' ' || symbol == '.' || symbol == ',' || symbol == '\"' || symbol == ':' || symbol == ';' || symbol == '!' || symbol == '?');
}

int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream sourceFile("F1.txt");
	remove("F2.txt");
	ofstream processedData("F2.txt");
	if (!sourceFile.is_open() || !processedData.is_open())
	{
		cout << "Исходный или конечный файл не был открыт";
		system("pause");
		return 0;
	}
	string currentLine;
	int numberOfWord = 0;
	string specialWord;
	int maximalAmountOfSpecialSymbols = 0;
	int numberOfSpecialWord;
	bool processedDataFileHasBeenRewritten = false;
	while (getline(sourceFile, currentLine)) // Внешний цикл по каждой строке
	{
		vector<string> words;
		string currentWord;
		int amountOfSpecialSymbols = 0;
		bool isWord = false;
		for (int i = 0; i < currentLine.size(); i++) // Вложенный цикл по каждому символу в строке
		{
			if (!isWordEndingSymbol(currentLine[i])) // Словом в тексте будет являтся набор символов идущих подряд, пока не будет найден одни из символов окончания слова
			{
				if (currentLine[i] == 'a' || currentLine[i] == 'A')
					amountOfSpecialSymbols++; // Английская буква А была найдена в любом регистре
				currentWord += currentLine[i]; // Создание слова из символов
				isWord = true;
			}
			else
			{
				if (isWord)
				{
					numberOfWord++;
					if (maximalAmountOfSpecialSymbols < amountOfSpecialSymbols)
					{
						specialWord = currentWord; // Поиск особого слова
						maximalAmountOfSpecialSymbols = amountOfSpecialSymbols;
						numberOfSpecialWord = numberOfWord;
					}
					if (amountOfSpecialSymbols != 0)
						amountOfSpecialSymbols = 0;
					isWord = false;
					words.push_back(currentWord);
				}
				currentWord = "";
			}
		}
		int amountOfWords = words.size();
		cout << amountOfWords << endl;
		for (int i = 0; i < amountOfWords; i++)
			cout << words[i] << " ";
		cout << endl;
		if (amountOfWords > 1)
		{
			bool flag = true;
			for (int i = 0; i < amountOfWords && flag; i++)
				for (int j = i + 1; j < amountOfWords && flag; j++)
				{
					if (words[i] == words[j])
					{
						processedData << currentLine << endl; // Запись строки, в которой было найдено не менее двух одинаковых слов
						processedDataFileHasBeenRewritten = true;
						flag = false;
					}

				}
		}
	}
	if (maximalAmountOfSpecialSymbols != 0)
	{
		cout << "Среди всех слов исходного файла первым было найдено слово, в котором больше всего английских букв \"А\": " << specialWord << endl;
		cout << "Количество запрошенных букв в нём: " << maximalAmountOfSpecialSymbols << endl;
		cout << "Его номер среди слов: " << numberOfSpecialWord << endl;
	}
	else
		cout << "Среди всех слов исходного файла не было найдено ни одного, в котором были бы английские буквы \"А\"\n";
	if (processedDataFileHasBeenRewritten)
		cout << "Конечный файл был перезаписан\n";
	else
		cout << "Конечный файл не был перезаписан\n";
	system("pause");
	return 1;
}