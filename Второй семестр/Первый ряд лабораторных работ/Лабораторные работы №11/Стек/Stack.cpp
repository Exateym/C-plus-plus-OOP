#include <iostream>
using namespace std;

const int maximalSize = 5;

struct Node {
    string data;
    Node* nextNode = nullptr;
};

struct Stack {
    Node* headNode = nullptr;
    int quantityOfNodes = 0;
};

bool stackIsFull(Stack& stack) {
    return stack.quantityOfNodes == maximalSize;
}

void pushInStack(Stack& stack, string data) {
    Node* newNode = new Node;
    ++stack.quantityOfNodes;
    newNode->data = data;
    newNode->nextNode = stack.headNode;
    stack.headNode = newNode;
    cout << "В стек добавлен новый узел\n";
}

bool stackIsEmpty(Stack& stack) {
    return stack.headNode == nullptr;
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

void printStack(Stack& stack) {
    cout << "Адрес верхнего узла стека: " << stack.headNode << endl;
    cout << "Стек содержит в себе " << stack.quantityOfNodes << " " << matchingWordNodeWithNumeral(stack.quantityOfNodes) << ":\n";
    Node* currentNode = stack.headNode;
    for (int i = 1; currentNode != nullptr; ++i) {
        cout << i << ". Адрес: " << currentNode << ". Данные: " << currentNode->data << ". Следующий: " << currentNode->nextNode << endl;
        currentNode = currentNode->nextNode;
    }
}

void rewriteNodeData(Stack& stack, int nodeNumber, string data) {
    Node* currentNode = stack.headNode;
    for (int i = 1; i < nodeNumber; ++i)
        currentNode = currentNode->nextNode;
    currentNode->data = data;
    cout << "Узел под номером " << nodeNumber << " был перезаписан\n";
}

int findNumberOfNodeByData(Stack& stack, string data) {
    Node* currentNode = stack.headNode;
    for (int i = 1; currentNode != nullptr; ++i) {
        if (currentNode->data == data)
            return i;
        currentNode = currentNode->nextNode;
    }
    return 0;
}

void removeFromStack(Stack& stack) {
    Node* secondNode = stack.headNode->nextNode;
    delete stack.headNode;
    stack.headNode = secondNode;
    --stack.quantityOfNodes;
    cout << "Узел с верхушки стека был удалён\n";
}

void removeFromStackUsingNumber(Stack& stack, int nodeNumber) {
    Node* currentNode = stack.headNode;
    Node* previousNode = nullptr;
    for (int i = 1; i != nodeNumber; ++i) {
        previousNode = currentNode;
        currentNode = currentNode->nextNode;
    }
    previousNode->nextNode = currentNode->nextNode;
    delete currentNode;
    --stack.quantityOfNodes;
    cout << "Был удалён узел под номером " << nodeNumber << endl;
}

int main() {
    system("title Stack");
    system("chcp 1251");
    system("cls");
    Stack* stack = new Stack;
    while (true) {
        cout << "1. Затолкнуть новый узел в стек\n";
        cout << "2. Вывести данные о стеке\n";
        cout << "3. Переписать данные узла\n";
        cout << "4. Найти номер узла по его данным\n";
        cout << "5. Убрать узел из стека\n";
        cout << "6. Исключить узел по его номеру\n";
        cout << "7. Завершить работу программы\n";
        cout << "Выберите номер опции (int): ";
        int optionIdentificator;
        cin >> optionIdentificator;
        system("cls");
        string data;
        int number;
        switch (optionIdentificator) {
            case 1:
                if (stackIsFull(*stack))
                    cout << "Стек заполнен. Добавление нового узла невозможно\n";
                else {
                    cout << "Введите данные нового узла (string): ";
                    cin >> data;
                    pushInStack(*stack, data);
                }
                break;
            case 2:
                if (stackIsEmpty(*stack))
                    cout << "Стек пуст\n";
                else
                    printStack(*stack);
                break;
            case 3:
                if (stackIsEmpty(*stack))
                    cout << "Стек пуст. Редактировать нечего\n";
                else {
                    cout << "Введите номер узла (int): ";
                    cin >> number;
                    if (number < 1 || number > maximalSize)
                        cout << "Узла под этим номером не может быть\n";
                    else
                        if (number > stack->quantityOfNodes)
                            cout << "В стеке нет узла под этим номером\n";
                        else {
                            cout << "Введите новые данные для узла (string): ";
                            cin >> data;
                            rewriteNodeData(*stack, number, data);
                        }
                }
                break;
            case 4:
                if (stackIsEmpty(*stack))
                    cout << "Стек пуст. Найти ничего не получится\n";
                else {
                    cout << "Введите данные, по которым можно найти узел (string): ";
                    cin >> data;
                    number = findNumberOfNodeByData(*stack, data);
                    if (number > 0)
                        cout << "Был найден узел с такими данными. Его номер " << number << endl;
                    else
                        cout << "Узла с такими данными не существует\n";
                }
                break;
            case 5:
                if (stackIsEmpty(*stack))
                    cout << "Стек пуст. Удалять нечего\n";
                else
                    removeFromStack(*stack);
                break;
            case 6:
                if (stackIsEmpty(*stack))
                    cout << "Стек пуст. Удалять нечего\n";
                else {
                    cout << "Введите номер узла, который нужно удалить (int): ";
                    cin >> number;
                    if (number < 1 || number > maximalSize)
                        cout << "Узла под этим номером не может быть\n";
                    else
                        if (number > stack->quantityOfNodes)
                            cout << "В стеке нет узла под этим номером\n";
                        else
                            if (number == 1)
                                removeFromStack(*stack);
                            else
                                removeFromStackUsingNumber(*stack, number);
                }
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