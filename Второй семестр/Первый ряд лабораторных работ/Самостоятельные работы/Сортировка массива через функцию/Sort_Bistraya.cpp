#include<iostream>
using namespace std;
void SortRecursive(int *mas, int size) {
	//Указатели в начало и в конец массива
	int i = 0;
	int j = size - 1;
	int pivot = mas[size / 2];//ключевой элемент
	//Делим массив
	do
	{
		while (mas[i] < pivot) {  //В левой части пропускаме элементы, которые меньше ключевого
			i++;
		}
		while (mas[j] > pivot) {  //В правой части пропускаем элементы, которые болье ключевого
			j--;
		}
		if (i <= j) {
			swap(mas[i], mas[j]);
			i++;
			j--;
		}
	} while (i <= j);
	//Рекурсивные вызовы, если осталось, что сортировать
	if (j > 0) {
		SortRecursive(mas, j + 1);//левая часть
	}
	if (i < size) {
		SortRecursive(&mas[i], size - i);
	}
}
int main()
{
	setlocale(LC_ALL, "Ru");
	int i,n;
	cout << "Размер массива = ";
	cin >> n;
	int *A = new int[n];
	for (i = 1; i <= n; i++) {
		cout << i << " элемент = ";
		cin >> A[i];
	}
	SortRecursive(A, n + 1);
	cout << "Упорядоченный массив: ";
	for (i = 1; i <= n; i++) {
		cout<<A[i]<<" ";
	}
	return 0;
}