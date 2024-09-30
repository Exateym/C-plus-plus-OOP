#include <iostream>
#include <stdlib.h>
using namespace std;
const int n = 10;
int a[n];

// Функция вывода содержимого массива
int print_a(int x) {
    for (int i = 0; i < x; ++ i) {
	    cout << a[i];
		if (i != x - 1) {
		   cout << " "; 
		}
		else {
		    cout << endl;
		}
	}
	return 0;
}

int main() {
    
    // Заполнение массива случайными числами
	srand(time(0));
	for (int i = 0; i < n; ++ i) {
		a[i] = rand() % 100 - 50;
	}
	cout << "Origin array. Lenght n = " << n << "." << endl;
	print_a(n);
	cout << endl;
	
	// Прокрутка массива слева направо: первым в конечном счёте должен быть элемент k из начального состояния, последним — k - 1
	int k, r;
	cout << "Enter k-element (k <= n)." << endl;
	do {
	    cin >> k;
	} while (k > n); // Элемент с номером k должен быть в рамках массива
	cout << endl;
	k = n - k + 1; // Расчёт количества прокруток
	cout << "Iterative process." << endl;
	for (int i = 1; i <= k; ++ i) {
    	r = a[n - 1];
    	for (int j = n - 1; j > 0; -- j) { // Перебор элементов идёт справа налево
    	    a[j] = a[j - 1];
    	}
    	a[0] = r;
    	cout << i << ": ";
    	print_a(n);
	}
	cout << endl << "Handled array." << endl;
	print_a(n);
	cout << endl;
	
	// Упорядочивание элементов массива по неубыванию
	bool flag_one, flag_two;
	flag_one = true;
	cout << "Ordering the sequence by non-decreasing:" << endl;
	while (flag_one == true) { // Цикл перемещает элементы по массиву
    	for (int i = n - 1; i > 0; -- i) {
            if (a[i] < a[i - 1]) {
                r = a[i - 1];
                a[i - 1] = a[i];
                a[i] = r;
                print_a(n);
            }
    	}
    	flag_two = true;
    	for (int i = 0; i < n - 1; ++ i) { // Проверка на монотонность последовательности по неубыванию
    	    for (int j = i + 1; j < n; ++ j) {
    	        if (a[i] > a[j]) {
                    flag_two = false;
    	        }
    	    }
    	}
    	if (flag_two == true) {
    	    flag_one = false;
    	}
	}
	cout << endl;
	
	// Удаление элементов массива с чётным значением
	cout << "Removing even elements:" << endl;
	int p = n;
	for (int i = 0; i < p; ++ i) {
        if (a[i] % 2 == 0) {
            for (int j = i; j < p; ++ j) {
                a[j] = a[j + 1];
            }
            -- p;
            -- i;
            print_a(p);
        }
    }
	cout << endl << "New size of array: p = " << p << endl << endl;
	
	// Снова делаем прокрутку массива
	cout << "Enter k-element (k <= p)." << endl;
	do {
	    cin >> k;
	} while (k > p); // Элемент с номером k должен быть в рамках массива
	cout << endl;
	k = p - k + 1; // Расчёт количества прокруток
	cout << "Iterative process." << endl;
	for (int i = 1; i <= k; ++ i) {
    	r = a[p - 1];
    	for (int j = p - 1; j > 0; -- j) { // Перебор элементов идёт справа налево
    	    a[j] = a[j - 1];
    	}
    	a[0] = r;
    	cout << i << ": ";
    	print_a(p);
	}
	cout << endl << "Handled array." << endl;
	print_a(p);
	cout << endl;
	
	return 0;
}