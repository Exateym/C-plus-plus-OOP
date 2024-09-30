#include <iostream>

// Класс для арифметической прогрессии
class ArithmeticProgression {
private:
    double first;  // первый элемент A0
    unsigned int diff;  // разность прогрессии

public:
    // Конструктор
    ArithmeticProgression(double first_element, unsigned int common_difference) {
        first = first_element;
        diff = common_difference;
    }

    // Метод для получения j-го элемента прогрессии
    double get_element(unsigned int j) {
        return first + (j * diff);
    }

    // Метод для вывода всех элементов до j
    void print_elements(unsigned int j) {
        std::cout << "Arithmetic progression elements up to index " << j << ":\n";
        for (unsigned int i = 0; i <= j; ++i) {
            std::cout << "A" << i << ": " << get_element(i) << std::endl;
        }
    }
};

int main() {
    double first_element = 2.5;  // первый элемент A0
    unsigned int common_difference = 3;  // разность R

    // Создаем объект арифметической прогрессии
    ArithmeticProgression ap(first_element, common_difference);

    unsigned int index = 5;  // вычислим элемент с индексом 5

    // Получаем и выводим j-й элемент прогрессии
    std::cout << "Element at index " << index << ": " << ap.get_element(index) << std::endl;

    // Выводим все элементы прогрессии до j
    ap.print_elements(index);

    return 0;
}