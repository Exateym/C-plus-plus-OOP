#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

struct Node {
    int data;
    Node* pointerToNextNode;
};

struct List {
    Node* headNode = nullptr;
    int quantityOfNodes = 0;
};

void removeNodeFromListBegin(List& list) {
    if (list.headNode == nullptr) {
        cout << "Невозможно удалить первый элемент списка: список пуст\n";
        return;
    }
    else {
        Node* pointerToSourceNode = list.headNode; // Сохранение указателя на текущий головной узел
        list.headNode = list.headNode->pointerToNextNode; // Переуказание головного узла на следующий узел списка
        delete pointerToSourceNode;
        --list.quantityOfNodes;
        cout << "Был успешно удалён первый узел списка\n";
    }
}

void addNodeInListBegin(List& list, const int& data) {
    Node* pointerToNewNode = new Node; // Создание динамической структуры узла и запись указателя на него
    pointerToNewNode->data = data; // Запись данных в новый узел по указателю
    Node* pointerToHeadNode = list.headNode; // Сохранение указателя на исходный головной узел списка
    pointerToNewNode->pointerToNextNode = pointerToHeadNode; // Перенос зарезервированного указателя в новый узел
    list.headNode = pointerToNewNode; // Указатель на головной узел списка указывает на новый узел
    ++list.quantityOfNodes;
    cout << "Успешно добавлен новый узел в начало списка\n";
}

void printList(List& list) {
    if (list.headNode == nullptr)
        cout << "Невозможно вывести узлы списка: список пуст\n";
    else {
        cout << "Количество узлов однонаправленного списка: " << list.quantityOfNodes << endl;
        int nodeNumber = 1;
        Node* currentNode = list.headNode; // Вывод списка начинается с головного узла
        do {
            cout << "Номер: " << nodeNumber << ". Адрес: " << currentNode << ". Данные: " << currentNode->data << ". Адрес следующего: " << currentNode->pointerToNextNode << endl;
            currentNode = currentNode->pointerToNextNode; // Текущий узел меняется через указатель на следующий узел
            nodeNumber++;
        } while (currentNode != nullptr); // Проверка на конец списка
    }
}

void addNodeInListEnd(List& list, const int& data) {
    Node* pointerToNewNode = new Node; // Создание динамической структуры узла и запись указателя на него
    pointerToNewNode->data = data;
    if (list.headNode == nullptr) // Если список пуст, происходит запись ссылки на новый головной узел
        list.headNode = pointerToNewNode;
    else {
        Node* currentNode = list.headNode; // Проход по списку осуществляется с головного узла
        while (currentNode->pointerToNextNode != nullptr) // Осуществляется переход к следующим узлам до конца списка
            currentNode = currentNode->pointerToNextNode;
        currentNode->pointerToNextNode = pointerToNewNode; // Создание ссылки с текущего последнего узла на новый последний узел
    }
}

void removeNodeFromListUsingPosition(List& list, int position) {
    if (position < 1 || position > list.quantityOfNodes) {
        cout << "Узла под таким номером не существует\n";
        return;
    }

    Node* currentNode = list.headNode;
    if (position == 1) { // Удаление первого узла
        list.headNode = list.headNode->pointerToNextNode;
        delete currentNode;
    }
    else {
        Node* prevNode = nullptr;
        for (int i = 1; i < position; ++i) {
            prevNode = currentNode;
            currentNode = currentNode->pointerToNextNode;
        }

        prevNode->pointerToNextNode = currentNode->pointerToNextNode;
        delete currentNode;
    }

    --list.quantityOfNodes;
    cout << "Был успешно удалён узел списка под номером " << position << endl;
}

void insertNodeInListUsingPosition(List& list, const int& data, int position) { // Вставляет новый узел в список со сдвигом цепочки узлов вправо, начиная с элемента с заданным номером
    if (position < 1 || position > list.quantityOfNodes) {
        cout << "Узла под таким номером не существует\n";
        return;
    }

    Node* newNode = new Node;
    newNode->data = data;
    newNode->pointerToNextNode = nullptr;

    if (list.headNode == nullptr) {
        list.headNode = newNode;
        cout << "Новый узел был успешно добавлен в качестве головного узла\n";
        return;
    }

    if (position == 1) {
        newNode->pointerToNextNode = list.headNode;
        list.headNode = newNode;
        cout << "Новый узел был успешно добавлен в начало списка\n";
        return;
    }

    Node* prevNode = list.headNode;
    for (int i = 1; i != position - 1; ++i) // Проход до узла, который будет предшествовать заданному
        prevNode = prevNode->pointerToNextNode;
    Node* lastNode = prevNode->pointerToNextNode;
    prevNode->pointerToNextNode = newNode;
    newNode->pointerToNextNode = lastNode;
    cout << "Новый узел был успешно установлен на позцию номер " << position << endl;
    ++list.quantityOfNodes;
}

void removeNodeFromListEnd(List& list) {
    if (list.headNode == nullptr) {
        cout << "Невозможно удалить последний элемент списка: список пуст\n";
        return;
    }

    if (list.headNode->pointerToNextNode == nullptr) {
        delete list.headNode;
        list.headNode = nullptr;
        list.quantityOfNodes = 0;
        cout << "Был успешно удалён последний узел списка\n";
        return;
    }

    Node* currentNode = list.headNode;
    Node* prevNode = nullptr;
    while (currentNode->pointerToNextNode != nullptr) {
        prevNode = currentNode;
        currentNode = currentNode->pointerToNextNode;
    }

    delete currentNode;
    prevNode->pointerToNextNode = nullptr;
    --list.quantityOfNodes;
    cout << "Был успешно удалён последний узел списка\n";
}

void clearList(List& list) {
    Node* currentNode = list.headNode;
    while (currentNode != nullptr) {
        Node* temp = currentNode;
        currentNode = currentNode->pointerToNextNode;
        delete temp;
    }
    list.headNode = nullptr;
    list.quantityOfNodes = 0;
    cout << "Текущий список был успешно очищен\n";
}

void rewriteNodeByPosition(List& list, const int& newData, int position) {
    if (position < 1 || position > list.quantityOfNodes) {
        cout << "Узла под таким номером не существует\n";
        return;
    }

    Node* currentNode = list.headNode;
    for (int i = 1; i < position; ++i) {
        currentNode = currentNode->pointerToNextNode;
    }

    currentNode->data = newData;
    cout << "Данные узла списка под номером " << position << " успешно перезаписаны\n";
}

void writeListToFile(const List& list, const string& filename) {
    if (list.headNode == nullptr) {
        cout << "Список пуст: записывать нечего\n";
        return;
    }

    ofstream outFile(filename);
    if (!outFile.is_open()) {
        cout << "Ошибка при открытии файла для записи\n";
        return;
    }

    Node* currentNode = list.headNode;
    while (currentNode != nullptr) {
        outFile << currentNode->data << "\n";
        currentNode = currentNode->pointerToNextNode;
    }

    outFile.close();
    cout << "Список успешно записан в файл " << filename << endl;
}

void restoreListFromFile(List& list, const string& filename) {
    ifstream inFile(filename);
    if (!inFile.is_open()) {
        cout << "Ошибка при открытии файла для чтения\n";
        return;
    }

    if (list.headNode != nullptr) {
        clearList(list);
    }

    string line;
    while (getline(inFile, line)) {
        istringstream iss(line);
        int data;
        if (iss >> data) {
            addNodeInListEnd(list, data);
        }
        else {
            cout << "Ошибка при чтении данных из файла\n";
            break;
        }
    }

    inFile.close();
    cout << "Список успешно восстановлен из файла " << filename << "\n";
}

int findNodeByValue(const List& list, int key) {
    int position = 1;
    Node* currentNode = list.headNode;

    while (currentNode != nullptr) {
        if (currentNode->data == key) {
            return position;
        }
        currentNode = currentNode->pointerToNextNode;
        ++position;
    }

    // Если элемент не найден, возвращаем -1
    return -1;
}

int main() {
    system("title More than nothing!");
    List* list = new List;
    system("chcp 1251");
    system("cls");
    while (true) {
        cout << "1. Добавить узел в начало списка\n";
        cout << "2. Удалить узел из начала списка\n";
        cout << "3. Вывести данные о списке\n";
        cout << "4. Завершить работу программы\n";
        cout << "5. Удалить узел по номеру\n";
        cout << "6. Удалить последний узел\n";
        cout << "7. Добавить узел в конец списка\n";
        cout << "8. Вставить узел по номеру со сдвигом всех последующих вправо\n";
        cout << "9. Очистить список\n";
        cout << "10. Перезаписать данные узла, находящегося под заданным номером\n";
        cout << "11. Записать данные списка в файл\n";
        cout << "12. Восстановить данные списка с ликвидацией текущего списка (не работает, может взорвать терминал!)\n";
        cout << "13. Найти номер элемента по его ключу\n";
        cout << "Выберите номер (int) опции работы со списком: ";
        int optionIdentificator;
        cin >> optionIdentificator;
        system("cls");
        int data;
        int position;
        string fileName;
        switch (optionIdentificator) {
        case 1:
            cout << "Введите данные узла (int): ";
            cin >> data;
            addNodeInListBegin(*list, data);
            break;
        case 2:
            removeNodeFromListBegin(*list);
            break;
        case 3:
            printList(*list);
            break;
        case 4:
            return 0;
        case 5:
            cout << "Введите номер узла (int): ";
            cin >> position;
            removeNodeFromListUsingPosition(*list, position);
            break;
        case 6:
            removeNodeFromListEnd(*list);
            break;
        case 7:
            cout << "Введите данные узла (int): ";
            cin >> data;
            addNodeInListEnd(*list, data);
            break;
        case 8:
            cout << "Введите данные узла (int): ";
            cin >> data;
            cout << "Введите номер узла, на место которого нужно вставить новый (int): ";
            cin >> position;
            insertNodeInListUsingPosition(*list, data, position);
            break;
        case 9:
            clearList(*list);
            break;
        case 10:
            cout << "Введите новые данные узла (int): ";
            cin >> data;
            cout << "Введите номер узла, данные которого нужно перезаписать (int): ";
            cin >> position;
            rewriteNodeByPosition(*list, data, position);
            break;
        case 11:
            cout << "Введите название файла с расширением (string), в который будет дозаписан список узлов: ";
            cin >> fileName;
            writeListToFile(*list, fileName);
            break;
        case 12:
            cout << "Введите название файла с расширением (string), из которого будет восстановлен список узлов: ";
            cin >> fileName;
            restoreListFromFile(*list, fileName);
            break;
        case 13:
            cout << "Введите ключ (число, записанное в узел), по которому будет произведён поиск номера элемента: ";
            cin >> data;
            position = findNodeByValue(*list, data);
            if (position != -1)
                cout << "Был найден элемент с таким ключом по адресу " << findNodeByValue << endl;
            else
                cout << "Не был найден элемент с запрошенным ключом\n";
            break;
        default:
            cout << "Такой опции нет в программе\n";
        }
        system("pause");
        system("cls");
    }
    return 0;
}