#include <iostream>
#include <cmath>
using namespace std;

int n;
double x;

double sumMembersRow(int currentMember) {
    if (currentMember >= n)
        return pow(-1, currentMember) * (pow(1 + x, 2 * currentMember) / currentMember);
    double result = pow(-1, currentMember) * (pow(1 + x, 2 * currentMember) / currentMember);
    return result + sumMembersRow(currentMember + 1);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    do {
        cout << "Введите количество членов ряда (int n, n > 0): ";
        cin >> n;
    } while (n <= 0);
    cout << "Введите значение переменной (double x): ";
    cin >> x;
    cout << "Сумма ряда: " << sumMembersRow(1) << endl;
    system("pause");
    return 0;
}
