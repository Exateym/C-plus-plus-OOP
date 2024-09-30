#include <iostream>
using namespace std;

// Базовый класс
class BaseClass {
public:
    BaseClass() { cout << "BaseClass Constructor" << endl; }
    virtual ~BaseClass() { cout << "BaseClass Destructor" << endl; }

    virtual void show() {
        cout << "BaseClass show() method" << endl;
    }
};

// Производный класс от BaseClass
class DerivedClass : public BaseClass {
public:
    DerivedClass() { cout << "DerivedClass Constructor" << endl; }
    ~DerivedClass() { cout << "DerivedClass Destructor" << endl; }

    void show() override { // Переопределение виртуальной функции
        cout << "DerivedClass show() method" << endl;
    }
};

// Производный класс от DerivedClass
class SecondDerivedClass : public DerivedClass {
public:
    SecondDerivedClass() { cout << "SecondDerivedClass Constructor" << endl; }
    ~SecondDerivedClass() { cout << "SecondDerivedClass Destructor" << endl; }

    void show() override { // Переопределение виртуальной функции
        cout << "SecondDerivedClass show() method" << endl;
    }
};

void demonstratePolymorphism(BaseClass* basePtr) {
    basePtr->show(); // Вызов переопределенного метода в зависимости от типа объекта
}

int main() {
    system("chcp 65001");
    system("title Полиморфизм в иерархии классов");
    system("color f0");
    system("cls");

    BaseClass* b = new BaseClass();
    BaseClass* d = new DerivedClass();
    BaseClass* sd = new SecondDerivedClass();

    demonstratePolymorphism(b); // Вызовет BaseClass::show()
    demonstratePolymorphism(d); // Вызовет DerivedClass::show()
    demonstratePolymorphism(sd); // Вызовет SecondDerivedClass::show()

    delete b;
    delete d;
    delete sd;

    return 0;
}
