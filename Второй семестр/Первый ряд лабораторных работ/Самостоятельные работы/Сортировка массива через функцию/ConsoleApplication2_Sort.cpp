#include<iostream>
using namespace std;
//функция, сливающая массивы
void Merge(int* A, int first, int last) {
	int middle, start, final, j;
	int* mas = new int[100];
	middle = (first + last) / 2; //вычисдение среднего элемента
	start = first;  //Начало левой части
	final = middle + 1;  //начало правой части
	for (j = first; j <= last; j++) {
		if ((start <= middle) && ((final > last) || (A[start] < A[final])))
		{
			mas[j] = A[start];
			start++;
		}
		else
		{
			mas[j] = A[final];
			final++;
		}
	}
	for (j = first; j <= last; j++) {
		A[j] = mas[j];
	}
	delete[] mas;
}
//рукурсивная процедура сортировки
void Sort(int* A, int first, int last) {
	if (first < last) {
		Sort(A, first, (first + last) / 2); //сортировка левой части
		Sort(A, (first + last) / 2 + 1, last); //сортировка правой части
		Merge(A, first, last); //слияние двух частей
	}
}
int main()
{
	setlocale(LC_ALL, "Ru");
	int i, n;
	cout << "Размер массива = ";
	cin >> n;
	int* A = new int[n];
	for (i = 1; i <= n; i++) {
		cout << i << " элемент = ";
		cin >> A[i];
	}
	Sort(A, 1, n);
	cout << "Упорядоченный массив: ";
	for (i = 1; i <= n; i++) {
		cout << A[i] << " ";
	}
	return 0;
}