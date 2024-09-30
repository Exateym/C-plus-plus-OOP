#include <iostream>
#include <stdlib.h>
using namespace std;
const int l = 500;

int main() {
        
    int a[l], s, q = 1, n = 1; // a[l] - массив, s - его используемая длина, q - количество максимальных элементов, n - номер первого нового макс. элемента
    
    cout << "Lenght of array: ";
    cin >> s;
    cout << "Elements: ";
	srand(time(0));
    for (int i = 0; i < s; i ++) { // заполнение массива случайными числами
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }
    cout << endl;
    
    int max = a[0]; // изначально берём первый элемент за макс.
    for (int i = 0; i < s; i ++) {
        if (a[i] > max) {
            max = a[i];
            q = 1; // было найдено новое макс. число, поэтому обнуляем счётчик
            n = i + 1;
        }
        else {
            if (a[i] == max) q ++;
        }
    }
    
    cout << "Maximal element: "<< max << endl;
    cout << "Quantity: " << q << endl;
    cout << "Its number: " << n << endl;
    
    return 0;
}