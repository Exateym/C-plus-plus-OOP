#include <iostream>
using namespace std;

const int maximalSize = 5;

struct Node {
    Node* previousNode = nullptr;
    string data;
    Node* nextNode = nullptr;
};

struct Queue {
    Node* headNode = nullptr;
    Node* tailNode = nullptr;
    int quantityOfNodes = 0;
};

// Может как просто добавить узел (вернётся false), так и ещё удалить с конца, когда очередь полна (вернётся true)
bool addNodeInQueue(Queue& queue, string data) {
    Node* newNode = new Node;
    newNode->data = data;
    bool tailNodeHasBeenDeleted = false;
    if (queue.quantityOfNodes == 0) {
        queue.headNode = newNode;
        queue.tailNode = newNode;
    }
    if (queue.quantityOfNodes > 0) {
        newNode->nextNode = queue.headNode;
        queue.headNode->previousNode = newNode;
        queue.headNode = newNode;
    }
    if (queue.quantityOfNodes > maximalSize - 1) {
        Node* previousNode = queue.tailNode->previousNode;
        previousNode->nextNode = nullptr;
        delete queue.tailNode;
        queue.tailNode = previousNode;
        tailNodeHasBeenDeleted = true;
    }
    if (!tailNodeHasBeenDeleted)
        ++queue.quantityOfNodes;
    return tailNodeHasBeenDeleted;
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

void printQueue(Queue& queue) {
    if (queue.headNode == nullptr) {
        cout << "Очередь пуста\n";
        return;
    }
    cout << "Головной: " << queue.headNode << ". Хвостовой: " << queue.tailNode << endl;
    cout << "Очередь содержит " << queue.quantityOfNodes << " " << matchingWordNodeWithNumeral(queue.quantityOfNodes) << " из " << maximalSize << " возможных:\n";
    int nodeNumber = 1;
    Node* currentNode = queue.headNode;
    do {
        cout << "Номер: " << nodeNumber << ". Адрес: " << currentNode << ". Предыдущий: " << currentNode->previousNode << ". Данные: " << currentNode->data << ". Следующий: " << currentNode->nextNode << endl;
        currentNode = currentNode->nextNode;
        ++nodeNumber;
    } while (currentNode != nullptr);
}

// Удалит узел с конца очереди и вернёт true, иначе если нечего удалять, вернёт false
bool removeNodeFromQueue(Queue& queue) {
    if (queue.quantityOfNodes == 0)
        return false;
    if (queue.quantityOfNodes == 1) {
        delete queue.headNode;
        queue.headNode = nullptr;
        queue.tailNode = nullptr;
        --queue.quantityOfNodes;
        return true;
    }
    Node* previousNode = queue.tailNode->previousNode;
    previousNode->nextNode = nullptr;
    delete queue.tailNode;
    queue.tailNode = previousNode;
    --queue.quantityOfNodes;
    return true;
}

// Вернёт номер узла в пределах maximalSize, иначе это можно расценивать как случай, когда узел не был найден
int findNodeNumberByData(Queue& queue, string data) {
    Node* currentNode = queue.headNode;
    int nodeNumber = 1;
    while (currentNode != nullptr) {
        if (currentNode->data == data)
            return nodeNumber;
        currentNode = currentNode->nextNode;
        ++nodeNumber;
    }
    return nodeNumber;
}

// Не предусматривает собой проверку на реальность такого номера узла, поэтому перед вызовом требуется дополнительная проверка
string findNodeDataByNumber(Queue& queue, int nodeNumber) {
    Node* currentNode = queue.headNode;
    for (int i = 1; i < nodeNumber; ++i)
        currentNode = currentNode->nextNode;
    return currentNode->data;
}

int main() {
    system("title Queue");
    system("chcp 1251");
    system("cls");
    Queue* queue = new Queue;
    while (true) {
        cout << "1. Добавить новый узел в очередь\n";
        cout << "2. Вывести данные о очереди\n";
        cout << "3. Найти номер узла по его данным\n";
        cout << "4. Найти данные узла по его номеру\n";
        cout << "5. Удалить последний узел из очереди\n";
        cout << "6. Завершить работу консольного приложения\n";
        cout << "Выберите номер (int) опции работы с очередью: ";
        int optionIdentificator;
        cin >> optionIdentificator;
        system("cls");
        string data;
        switch (optionIdentificator) {
        case 1:
            cout << "Введите данные для хранения в узле (string): ";
            cin >> data;
            if (addNodeInQueue(*queue, data))
                cout << "Очередь была переполнена. Последний узел удалён\n";
            break;
        case 2:
            printQueue(*queue);
            break;
        case 3:
            if (queue->headNode == nullptr)
                cout << "Очередь пуста, поиск невозможен\n";
            else {
                cout << "Введите данные, по которым нужно найти номер узла (string): ";
                cin >> data;
                int nodeNumber = findNodeNumberByData(*queue, data);
                system("cls");
                if (nodeNumber > maximalSize)
                    cout << "В очереди нет узла с заданными данными\n";
                else
                    cout << "Найден узел с заданными данными. Его номер " << nodeNumber << endl;
            }
            break;
        case 4:
            cout << "Введите номер узла для поиска данных: ";
            int nodeNumber;
            cin >> nodeNumber;
            system("cls");
            if (nodeNumber > maximalSize || nodeNumber > queue->quantityOfNodes || nodeNumber <= 0)
                cout << "Узел с таким номером отсутствует в очереди\n";
            else
                cout << "Данные узла с номером " << nodeNumber << ": " << findNodeDataByNumber(*queue, nodeNumber) << endl;
            break;
        case 5:
            if (!removeNodeFromQueue(*queue))
                cout << "Очередь пуста, удаление невозможно\n";
            else
                cout << "Последний узел успешно удалён из очереди\n";
            break;
        case 6:
            return 0;
            break;
        default:
            cout << "Опции работы с программой под этим номером не существует\n";
        }
        system("pause");
        system("cls");
    }
}

