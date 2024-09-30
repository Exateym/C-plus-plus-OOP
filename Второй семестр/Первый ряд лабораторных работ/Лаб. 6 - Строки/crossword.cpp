#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    string pairOfWords;
    cout << "Введите два слова, разделённые пробелом: ";
    getline(cin, pairOfWords);
    
    // Поиск индекса пробела
    int spaceIndex;
    bool flag = false;
    for (int i = 0; i < pairOfWords.size() && !flag; i++)
        if (pairOfWords[i] == ' ')
        {
            spaceIndex = i;
            flag = true;
        }

    // Вычленение слов из исходной строки
    string firstWord;
    for (int i = 0; i < spaceIndex; i++)
        firstWord += pairOfWords[i];
    string secondWord;
    for (int i = spaceIndex + 1; i < pairOfWords.size(); i++)
        secondWord += pairOfWords[i];
    // Для дальнейшего удобства первое слово будет выбрано самым длинным из двух
    if (firstWord.size() < secondWord.size())
    {
        string reserve = firstWord;
        firstWord = secondWord;
        secondWord = reserve;
    }

    // Поиск первых совпадающих индексов символов
    int matchingIndexForFirst; // Первое слово по вертикали
    int matchingIndexForSecond; // Второе слово по горизонтали
    flag = false;
    for (int i = 0; i < firstWord.size() && !flag; i++)
        for (int j = 0; j < secondWord.size() && !flag; j++)
            if (firstWord[i] == secondWord[j])
            {
                matchingIndexForFirst = i;
                matchingIndexForSecond = j;
                flag = true;
            }
    // Случай, когда составить кроссвод невозможно
    if (!flag)
    {
        cout << "В словах нет совпадающих символов\n";
        system("pause");
        return 0; // Не удалось успешно выполнить поставленную задачу
    }

    // Создание массива из строк для кроссворда
    vector<string> crossword;
    int crosswordSize = 0;
    for (int i = 0; i < secondWord.size(); i++) // Внешний цикл по строкам
    {
        string currentLine; // Сначала составляется строка из символов
        if (i == matchingIndexForSecond) // Если второе слово лежит в строке
            for (int j = 0; j < firstWord.size(); j++)
            {
                currentLine += firstWord[j];
                currentLine += ' ';
            }
        else // Когда второе слово не лежит в строке, рассматриваются случаи для записи первого слова
            for (int j = 0; j < firstWord.size(); j++)
            {
                if (j == matchingIndexForFirst) // Если на этом месте в строке должен быть символ первого слова
                {
                    currentLine += secondWord[i];
                    currentLine += ' ';
                }
                else // Если на этом месте в строке нет символов первого слова
                    currentLine += "  ";
            }
        crossword.push_back(currentLine);
        crosswordSize++;
    }
    // Вывод кроссворда в консоль
    for (int i = 0; i < crosswordSize; i++)
        cout << crossword[i] << endl;

    system("pause");
    return 1; // Поставленная задача выполнена успешно
}