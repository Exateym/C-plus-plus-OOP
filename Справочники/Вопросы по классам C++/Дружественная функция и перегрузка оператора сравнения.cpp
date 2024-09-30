#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    std::string name;
    int age;

public:
    Student() : name("Unknown"), age(0) {}
    Student(const std::string& name, int age) : name(name), age(age) {}
    Student(const Student& other) : name(other.name), age(other.age) {}

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    friend bool operator==(const Student& stud1, const Student& stud2);
};

bool operator==(const Student& stud1, const Student& stud2) {
    return stud1.age == stud2.age;
}

int main() {
    Student student1("Alice", 21);
    Student student2("Bob", 21);
    Student student3("Charlie", 22);

    if (student1 == student2) {
        std::cout << "student1 and student2 are the same age." << std::endl;
    }
    else {
        std::cout << "student1 and student2 are not the same age." << std::endl;
    }

    if (student1 == student3) {
        std::cout << "student1 and student3 are the same age." << std::endl;
    }
    else {
        std::cout << "student1 and student3 are not the same age." << std::endl;
    }

    return 0;
}
