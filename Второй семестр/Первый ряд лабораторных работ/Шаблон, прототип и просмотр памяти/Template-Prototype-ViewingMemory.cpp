#include <iostream>
using namespace std;

// Использование шаблона
template <typename T>
T summaOfTwoNumbers(T first, T second) {
    return first + second;
}

// Просмотр памяти
struct Node {
    Node* previousNode = nullptr;
    string data;
    Node* nextNode = nullptr;
};
struct List {
    Node* headNode = nullptr;
    Node* tailNode = nullptr;
    int quantityOfNodes = 0;
};
void addNodeInListEnd(List& list, const string& data, bool feedback) {
    Node* newNode = new Node;
    newNode->data = data;
    ++list.quantityOfNodes;
    if (list.headNode == nullptr) {
        list.headNode = newNode;
        list.tailNode = newNode;
        if (feedback)
            cout << "Добавлен первый узел списка\n";
        return;
    }
    newNode->previousNode = list.tailNode;
    list.tailNode->nextNode = newNode;
    list.tailNode = newNode;
    if (feedback)
        cout << "Новый узел добавлен в конец списка\n";
}
int simplificationOfNumeral(int number) {
    if (number > 19 && number < 100)
        return number % 10;
    if (number > 99) {
        number = number % 100;
        if (number > 19 && number < 100)
            return number % 10;
    }
    return number;
}
string matchingWordNodeWithNumeral(int number) {
    number = simplificationOfNumeral(number);
    if (number == 0 || number > 4)
        return "узлов";
    if (number == 1)
        return "узел";
    return "узла";
}
void printList(List& list) {
    if (list.headNode == nullptr) {
        cout << "Список пуст\n";
        return;
    }
    cout << "Головной: " << list.headNode << ". Хвостовой: " << list.tailNode << endl;
    cout << "Список хранит в себе " << list.quantityOfNodes << " " << matchingWordNodeWithNumeral(list.quantityOfNodes) << ":\n";
    int nodeNumber = 1;
    Node* currentNode = list.headNode;
    do {
        cout << "Номер: " << nodeNumber << ". Адрес: " << currentNode << ". Предыдущий: " << currentNode->previousNode << ". Данные: " << currentNode->data << ". Следующий: " << currentNode->nextNode << endl;
        currentNode = currentNode->nextNode;
        nodeNumber++;
    } while (currentNode != nullptr);
}
bool removeNodeFromListEnd(List& list, bool feedback) {
    if (list.headNode == nullptr) {
        if (feedback)
            cout << "Список пуст, удалять нечего\n";
        return false;
    }
    --list.quantityOfNodes;
    if (list.quantityOfNodes == 0) {
        Node* removingNode = list.headNode;
        list.headNode = nullptr;
        list.tailNode = nullptr;
        delete removingNode;
        if (feedback)
            cout << "В списке больше не осталось узлов\n";
        return true;
    }
    Node* lastNode = list.tailNode;
    Node* previousNode = list.tailNode->previousNode;
    list.tailNode = previousNode;
    list.tailNode->nextNode = nullptr;
    delete lastNode;
    if (feedback)
        cout << "Последний узел был удалён\n";
    return true;
}

// Прототип функции G
int G(int number);
int F(int number) {
    if (number < 3)
        return 1;
    return F(number - 1) + G(number - 2);
}
int G(int number) {
    if (number < 3)
        return 1;
    return F(number - 1) + G(number - 2);
}

int main() {
    system("chcp 1251");
    system("cls");
    List* list = new List;
    while (true) {
        cout << "1. Найти сумму двух целых чисел\n";
        cout << "2. Найти сумму двух вещественных чисел\n";
        cout << "3. Создать новый узел и поставить его в конец списка\n";
        cout << "4. Вывести данные о списке\n";
        cout << "5. Удалить последний узел\n";
        cout << "6. Вычислить значение сложной функции\n";
        cout << "7. Завершить работу консольного приложения\n";
        cout << "Выберите номер (int) опции работы со списком: ";
        int optionIdentificator;
        cin >> optionIdentificator;
        system("cls");
        int intA, intB;
        double doubleA, doubleB;
        string data;
        int number;
        switch (optionIdentificator) {
            case 1:
                cout << "Введите первое число (int): ";
                cin >> intA;
                cout << "Введите второе число (int): ";
                cin >> intB;
                cout << "Результат вызова функции для двух целых чисел: " << summaOfTwoNumbers(intA, intB) << endl;
                break;
            case 2:
                cout << "Введите первое число (double): ";
                cin >> doubleA;
                cout << "Введите второе число (double): ";
                cin >> doubleB;
                cout << "Результат вызова функции для двух целых чисел: " << summaOfTwoNumbers(doubleA, doubleB) << endl;
                break;
            case 3:
                cout << "Введите данные для хранения в узле (string): ";
                cin >> data;
                addNodeInListEnd(*list, data, true);
                break;
            case 4:
                printList(*list);
                break;
            case 5:
                removeNodeFromListEnd(*list, true);
                break;
            case 6:
                cout << "Введите аргумент для функции (int): ";
                cin >> number;
                if (number < 10)
                    cout << "Вычисленное значение: " << F(number) << endl;
                else
                    cout << "Слишком большое число (лучше не вводить больше 9)\n";
                break;
            case 7:
                return 0;
                break;
            default:
                cout << "Опции работы с программой под этим номером не существует\n";
        }
        system("pause");
        system("cls");
    }
}