#pragma once
#include <iostream>
using namespace std;

class Pair {
private:
	int first_number;
	double second_number;

public:
	// Конструкторы
	Pair() : first_number(0), second_number(0.0) {}
	Pair(int f, double s) {
		first_number = f;
		second_number = s;
	}
	Pair(const Pair& original) {
		first_number = original.first_number;
		second_number = original.second_number;
	}

	// Селекторы
	int getFirstNumber() const {
		return first_number;
	}
	double getSecondNumber() const {
		return second_number;
	}

	// Модификаторы
	void setFirstNumber(int f) {
		first_number = f;
	}
	void setSecondNumber(double s) {
		second_number = s;
	}

	// Перегруженные функции
	/*Операция присваивания*/ Pair& operator=(const Pair& target) {
		if (&target == this) // Проверка на самоприсваивание
			return *this;
		first_number = target.first_number;
		second_number = target.second_number;
		return *this;
	}
	/*Префиксная операция инкремент*/ Pair& operator++() {
		++first_number;
		++second_number;
		return *this;
	}
	/*Префиксная операция декремент*/ Pair& operator--() {
		--first_number;
		--second_number;
		return *this;
	}
	/*Постфиксная операция инкремент*/ Pair operator++(int) {
		Pair temporary = *this;  // Сохраняем текущий объект
		++first_number;  // Увеличиваем значения
		++second_number;
		return temporary;  // Возвращаем старое значение
	}
	/*Постфиксная операция декремент*/ Pair operator--(int) {
		Pair temporary = *this;
		first_number--;
		second_number--;
		return temporary;
	}
	/*Операция сложения*/ Pair operator+(Pair& summand) {
		int amount_of_first_numbers = first_number + summand.first_number;
		double amount_of_second_numbers = second_number + summand.second_number;
		Pair amount;
		amount.first_number = amount_of_first_numbers;
		amount.second_number = amount_of_second_numbers;
		return amount;
	}
	/*Операция вычитания*/ Pair operator-(const Pair& deductible) const {
		return Pair(first_number - deductible.first_number, second_number - deductible.second_number);
	}
	/*Оператор ввода*/ friend istream& operator>>(istream& input_stream, Pair& data) {
		cout << "Первое число (int) = ";
		input_stream >> data.first_number;
		cout << "Второе число (double) = ";
		input_stream >> data.second_number;
		return input_stream;
	}
	/*Оператор вывода*/ friend ostream& operator<<(ostream& output_stream, const Pair& data) {
		return (output_stream << data.getFirstNumber() << " : " << data.getSecondNumber());
	}
	// Добавление константы к паре чисел
	/*Для целого числа*/ Pair operator+(int constant) const {
		return Pair(first_number + constant, second_number);
	}
	/*Для вещественного числа*/ Pair operator+(double constant) const { 
		return Pair(first_number, second_number + constant);
	}
};