#include <iostream>
#include <stdlib.h>
using namespace std;
const int l = 500;

int main() {
    
    int a[l], s; // a[l] - массив, s - его используемая длина
    
    cout << "Lenght of array: ";
    cin >> s;
    for (int i = 0; i < s; i ++) { // заполнение массива вводом из консоли
        cout << "Element " << i + 1 << ": ";
        cin >> a[i];
    }
    cout << endl;
    
    int i = 0;
	bool flag = true;
    while (i < s - 1 && flag == true) {
        if (a[i] <= a[i + 1]) i ++; // является ли ряд чисел неубывающей последовательностью
        else flag = false; // переключаем флажок, если это не так
    }
    
    if (flag == true) cout << "It is sorted array";
    else cout << "It is not sorted array";
    
    return 0;
}