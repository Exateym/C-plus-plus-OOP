#include <iostream>
#include <stdlib.h>
using namespace std;
const int l = 500;

int main() {
    
    int a[l], s;
    
    cout << "Lenght of array: ";
    cin >> s;
    cout << "Elements: ";
	srand(time(0));
    for (int i = 0; i < s; i ++) { // заполнение массива случайными числами
        a[i] = rand() % 100 - 50;
        cout << a[i] << " ";
    }
    cout << endl << endl;
    
    for (int i = 0; i < s; i ++) { // поставить перед всеми чётными числами "-1"
        if (a[i] % 2 == 0) {
            s ++;
            for (int j = s; j > i; j --) { // сдвиг элементов вправо (сдвинутся все последующие за чётным)
                a[j + 1] = a[j];
            }
            a[i] = -1;
            i ++;
            for (int j = 0; j < s; j ++) { // отображение изменений в массиве
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
    cout << "Current usage of array length: " << s << endl << endl;
    
    for (int i = 0; i < s; i ++) { // удаление нечётных элементов ряда
        if (abs(a[i]) % 2 == 1) {
            s --;
            for (int j = i; j < s; j ++) { // сдвиг элементов влево
                a[j] = a[j + 1];
            }
            i --;
            for (int j = 0; j < s; j ++) { // отображение изменений в массиве
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
    cout << "Current usage of array length: " << s;
    
    return 0;
}