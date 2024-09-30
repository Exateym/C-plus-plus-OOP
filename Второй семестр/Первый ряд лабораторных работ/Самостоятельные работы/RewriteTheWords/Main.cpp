#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <codecvt> // Для UTF-8

int main()
{
    std::wifstream input("File1.txt");
    input.imbue(std::locale(input.getloc(), new std::codecvt_utf8<wchar_t>));

    std::wofstream output("File2.txt");
    output.imbue(std::locale(output.getloc(), new std::codecvt_utf8<wchar_t>));

    std::wstring line;
    while (getline(input, line))
        if (!line.empty() && line[0] == L'а') // Обратите внимание на использование L'а' для широких символов
            output << line << L'\n';

    input.close();
    output.close();

    system("pause");
    return 0;
}