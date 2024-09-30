#include <iostream>
using namespace std;

struct Node {
    int data = 0;
    Node* previous = nullptr;
    Node* next = nullptr;
};

class List {
    Node* head;
    Node* tail;
    int size;
public:
    List() {
        head = tail = nullptr;
        size = 0;
    }
    ~List() {
        if (size != 0) {
            Node* current = head;
            for (int i = 0; i < size; ++i) {
                Node* target = current;
                current = current->next;
                delete target;
            }
        }
    }
    Node* getHead() const {
        return head;
    }
    Node* getTail() const {
        return tail;
    }
    void addNode(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        if (tail == nullptr) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->previous = tail;
            tail = newNode;
        }
        ++size;
    }
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        Node* current = head;
        for (int i = 0; i < index; ++i) {
            current = current->next;
        }
        return current->data;
    }

    int getSize() const {
        return size;
    }
};

class Iterator {
    Node* currentNode;
public:
    Iterator(Node* start) {
        currentNode = start;
    }
    Iterator& operator++() {
        currentNode = currentNode->next;
        return *this;
    }
    Iterator& operator--() {
        currentNode = currentNode->previous;
        return *this;
    }
    bool operator==(const Iterator& it) const {
        return currentNode == it.currentNode;
    }
    bool operator!=(const Iterator& it) const {
        return !(*this == it);
    }
    int& operator*() {
        return currentNode->data;
    }
};

int main() {
    system("chcp 1251");
    List listA;
    List listB;

    // Добавление элементов в списки
    listA.addNode(1);
    listA.addNode(2);
    listA.addNode(3);

    listB.addNode(4);
    listB.addNode(5);
    listB.addNode(6);

    // Перемножение элементов списков A и B
    for (int i = 0; i < min(listA.getSize(), listB.getSize()); ++i) {
        cout << "A[" << i << "] * B[" << i << "] = " << listA[i] * listB[i] << endl;
    }

    // Переход вправо до элемента с номером n с помощью итератора
    int n;
    cout << "\nВведите номер элемента для перехода итератора (int): ";
    cin >> n;

    if (n >= 0 && n < listA.getSize()) {
        Iterator it(listA.getHead());
        for (int i = 0; i < n; ++i) {
            ++it;
        }

        cout << "Итератор указывает на элемент с номером " << n << ": " << *it << endl;
    }
    else {
        cout << "Неверный номер элемента\n";
    }

    system("pause");
    return 0;
}
