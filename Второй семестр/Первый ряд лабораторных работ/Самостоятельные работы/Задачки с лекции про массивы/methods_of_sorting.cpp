#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a[100], N;
	cout << "Enter count: "; cin >> N;
	for (int i=0; i < N; i++)
	{
		a[i] = rand()%200 - 50;
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	int* b = a;
	cout << "Метод вставки: " << endl;
	for (int i = 1; i < N; i++)
		for (int j = i; j > 0 && a[j-1] > a[j]; j--)
		{
			int tmp = a[j - 1];
			a[j - 1] = a[j];
			a[j] = tmp;
		}
	for (int i = 0; i < N; i++) cout << "a[" << i << "] = " << a[i] << endl;
	*a = *b;
cout << "Метод выбора: " << endl;
for (int i = 0; i < N - 1; i++)
{
    int min = i;
    for (int j = i + 1; j < N; j++)
        if (a[j] < a[min]) min = j;
    int tmp = a[min];
    a[min] = a[i];
    a[i] = tmp;
}
for (int i = 0; i < N; i++)
    cout << "a[" << i << "] = " << a[i] << endl;
*a = *b;
	cout << "Метод обмена: " << endl;
	for (int i = N-1; i> 0; i--)
		for (int j = N-1; j >= N-i; j--)
			if (a[j] < a[j - 1])
			{
				int tmp = a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
			}
	for (int i = 0; i < N; i++)
		cout << "a[" << i << "] = " << a[i] << endl;
	return 0;
}