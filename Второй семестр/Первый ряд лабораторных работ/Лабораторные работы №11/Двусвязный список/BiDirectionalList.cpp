#include <iostream>
#include <fstream>
#include <string>
using namespace std;

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

int findNodeNumber(List& list, string key) {
    Node* currentNode = list.headNode;
    for (int i = 1; i <= list.quantityOfNodes; ++i) {
        if (currentNode->data == key)
            return i;
        currentNode = currentNode->nextNode;
    }
    return 0;
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

void writeListToFile(List& list, bool feedback) {
    if (list.headNode == nullptr) {
        if (feedback)
            cout << "Нечего записать в файл\n";
        return;
    }
    remove("ListRecord.txt");
    cout << "Файл записи данных ListRecord.txt был удалён\n";
    ofstream file("ListRecord.txt");
    if (!file.is_open()) {
        if (feedback)
            cout << "Ошибка при создании или открытии файла\n";
        return;
    }
    Node* currentNode = list.headNode;
    while (currentNode != nullptr) {
        file << currentNode->data;
        if (currentNode->nextNode != nullptr)
            file << "\n";
        currentNode = currentNode->nextNode;
    }
    file.close();
    cout << "Все данные узлов были записаны в файл ListRecord.txt\n";
}

void clearList(List& list, bool feedback) {
    bool flag = false;
    while (list.headNode != nullptr)
        flag = removeNodeFromListEnd(list, false);
    if (feedback)
        if (flag)
            cout << "Список полностью очищен\n";
        else
            cout << "Список пуст, удалять нечего\n";
}

void uploadListInProgramFromFile(List& list, bool feedback) {
    ifstream file("ListRecord.txt");
    if (!file.is_open()) {
        if (feedback)
            cout << "Ошибка при чтении файла\n";
        file.close();
        return;
    }
    string data;
    int quantityOfNodes = 0;
    if (list.headNode != nullptr)
        clearList(list, true);
    while (getline(file, data)) {
        addNodeInListEnd(list, data, false);
        ++quantityOfNodes;
    }
    file.close();
    if (quantityOfNodes == 0) {
        if (feedback)
            cout << "Файл пуст. Выгрузить в программу нечего. Текущие данные списка не затронуты\n";
        return;
    }
    if (feedback)
        cout << "Было добавлено " << quantityOfNodes << " " << matchingWordNodeWithNumeral(quantityOfNodes) << " из файла ListRecord.txt\n";
}

int main() {
    system("title BiDirectionalList");
    system("chcp 1251");
    system("cls");
    List* list = new List;
    while (true) {
        cout << "1. Создать новый узел и поставить его в конец списка\n";
        cout << "2. Вывести данные о списке\n";
        cout << "3. Найти номер узла по его данным\n";
        cout << "4. Удалить последний узел\n";
        cout << "5. Сохранить данные узлов в файл\n";
        cout << "6. Очистить список\n";
        cout << "7. Загрузить список из файла в программу с уничтожением текущих узлов\n";
        cout << "8. Завершить работу консольного приложения\n";
        cout << "Выберите номер (int) опции работы со списком: ";
        int optionIdentificator;
        cin >> optionIdentificator;
        system("cls");
        string data;
        switch (optionIdentificator) {
            case 1:
                cout << "Введите данные для хранения в узле (string): ";
                cin >> data;
                addNodeInListEnd(*list, data, true);
                break;
            case 2:
                printList(*list);
                break;
            case 3:
                if (list->headNode == nullptr)
                    cout << "Список пуст, поиск невозможен\n";
                else {
                    cout << "Введите данные, по которым нужно найти номер узела (string): ";
                    cin >> data;
                    int nodeNumber = findNodeNumber(*list, data);
                    system("cls");
                    if (nodeNumber == 0)
                        cout << "В списке нет узла с заданными данными\n";
                    else
                        cout << "Найден узел с заданными данными. Его номер " << nodeNumber << endl;
                }
                break;
            case 4:
                removeNodeFromListEnd(*list, true);
                break;
            case 5:
                writeListToFile(*list, true);
                break;
            case 6:
                clearList(*list, true);
                break;
            case 7:
                uploadListInProgramFromFile(*list, true);
                break;
            case 8:
                return 0;
                break;
            default:
                cout << "Опции работы с программой под этим номером не существует\n";
        }
        system("pause");
        system("cls");
    }
}