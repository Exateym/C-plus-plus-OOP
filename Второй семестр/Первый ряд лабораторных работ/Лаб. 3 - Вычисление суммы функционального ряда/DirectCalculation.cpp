#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    do {
        cout << "Введите количество членов ряда (int n, n > 0): ";
        cin >> n;
    } while (n <= 0);
    double x;
    cout << "Введите значение переменной (double x): ";
    cin >> x;
    double sumMembersRow = 0;
    for (int i = 1; i <= n; ++ i)
        sumMembersRow += pow(-1, i) * (pow(1 + x, 2 * i) / i);
    cout << "Сумма ряда: " << sumMembersRow << endl;
    system("pause");
    return 0;
}