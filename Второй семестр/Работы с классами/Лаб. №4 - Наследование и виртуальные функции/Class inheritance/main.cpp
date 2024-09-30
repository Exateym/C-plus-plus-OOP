#include <iostream>
#include "Person.h" // Подключение класса базового типа
#include "Student.h" // Подключение класса производного типа

using namespace std;

// Функция, принимающая объект базового класса
void displayPerson(const Person& person) {
    cout << "Отображение данных объекта Person: " << person << endl;
}

// Функция, возвращающая объект базового класса
Person createPerson() {
    return Person("Петр Петров", 45);
}

// Функция, определяющая наличие неудовлетворительных оценок у студента
bool Unsatisfactory(const Student& student) {
    for (const auto& subject : student.getSubjects()) { // Получение всех предметов и их оценок
        if (subject.grade < 3) {
            return true;
        }
    }
    return false;
}

int main() {
    system("chcp 1251");
    system("cls");

    // Демонстрация создания объектов
    Person p1("Иван Иванов", 30); // Объект базового класса
    Student s1("Алексей Сидоров", 20, { { "Математика", 4 }, { "Информатика", 5 } }); // Объект производного класса
    Student s2("Василий Петров", 22, { { "Математика", 2 }, { "Информатика", 4 } }); // Студент с неудовлетворительной оценкой

    // Проверка функции Unsatisfactory
    cout << "Проверка на неудовлетворительные оценки:\n";
    if (Unsatisfactory(s2)) { // Проверка второго студента
        cout << "У студента есть неудовлетворительные оценки:\n";
        cout << s2 << endl;
    }

    // Использование функций с объектами базового класса
    displayPerson(p1); // Передача объекта базового класса
    displayPerson(s1); // Использование принципа подстановки

    Person p2 = createPerson(); // Получение объекта базового класса из функции
    cout << "Созданный с помощью функции объект Person: " << p2 << endl;

    system("pause");
    return 0;
}
