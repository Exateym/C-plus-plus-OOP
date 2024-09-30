#include <iostream>
#include <ctime>
using namespace std;

static bool isCreated;
int N = 0;
int* mas;

void CreateMas(int*& mas, int N) {
    mas = new int[N];
    srand((unsigned int)time(NULL));
    for (int i = 0; i < N; i++)
        mas[i] = rand() % 100 - 50;
}

void PrintMas(int* mas, int N) {
    for (int i = 0; i < N; i++) {
        cout << mas[i] << " ";
    }
    cout << "\n";
}

void SortMas(int* mas, int N) {
    int r = 0;
    for (int i = 0; i < N; i++) {
        for (int j = N - 1; j >= i; j--) {
            if (mas[j] < mas[j - 1]) {
                r = mas[j];
                mas[j] = mas[j - 1];
                mas[j - 1] = r;
            }
        }
    }
}

int main() {
    setlocale(0, ""); // строка нужна для того чтобы в консоли нормально выводился русский язык
    isCreated = false;
    cout << "Добро пожаловать в систему!\n";
    cout << "Пожалуйста, введите N (N > 0): "; // просим ввести число N
    cin >> N; // вводим число N

    if (N <= 0 || N >= 101) { // проверяем: N это положительное число
        while (N <= 0 || N >= 101) {
            cout << "Введите другое N (N > 0 и N <= 100): ";
            cin >> N;
        }
    }

    CreateMas(mas, N);
    isCreated = true;
    cout << "Пожалуйста, выберите команду:\n";
    int otvet;

    do {
        cout << "1 - Создать новый массив\n";
        cout << "2 - Напечатать массив\n";
        cout << "3 - Отсортировать массив\n";
        cout << "4 - Выход\n";
        cout << "\n";
        cout << ">> ";
        cin >> otvet;

        if (otvet == 1) { // создать
            cout << "Введите N (N > 0): "; // просим ввести число N
            cin >> N; // вводим число N

            if (N <= 0 || N >= 101) { // проверяем: N это положительное число
                while (N <= 0 || N >= 101) {
                    cout << "Введите другое N (N > 0 и N <= 100): ";
                    cin >> N;
                }
            }

            CreateMas(mas, N);
            isCreated = true;
        }

        if (otvet == 2) { // напечатать
            if (isCreated) {
                cout << "Текущий массив: \n";
                PrintMas(mas, N);
            }
            else
                cout << "Массив пуст!\n";
        }

        if (otvet == 3) { // отсортировать
            if (isCreated) {
                SortMas(mas, N);
                cout << "Массив отсортирован\n";
            } else {
                cout << "Сначала создайте массив!\n";
            }
        }

        if (otvet == 4) exit(0);

        if (otvet < 1 || otvet > 4) cout << "Неверный номер команды. Попробуйте снова!\n";
    } while (otvet != 4);

    return 0;
}
