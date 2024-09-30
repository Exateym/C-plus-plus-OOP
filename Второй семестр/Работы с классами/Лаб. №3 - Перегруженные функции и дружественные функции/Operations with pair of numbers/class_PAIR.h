#pragma once
#include <iostream>
using namespace std;

class Pair {
private:
	int first_number;
	double second_number;

public:
	// ������������
	Pair() : first_number(0), second_number(0.0) {}
	Pair(int f, double s) {
		first_number = f;
		second_number = s;
	}
	Pair(const Pair& original) {
		first_number = original.first_number;
		second_number = original.second_number;
	}

	// ���������
	int getFirstNumber() const {
		return first_number;
	}
	double getSecondNumber() const {
		return second_number;
	}

	// ������������
	void setFirstNumber(int f) {
		first_number = f;
	}
	void setSecondNumber(double s) {
		second_number = s;
	}

	// ������������� �������
	/*�������� ������������*/ Pair& operator=(const Pair& target) {
		if (&target == this) // �������� �� ����������������
			return *this;
		first_number = target.first_number;
		second_number = target.second_number;
		return *this;
	}
	/*���������� �������� ���������*/ Pair& operator++() {
		++first_number;
		++second_number;
		return *this;
	}
	/*���������� �������� ���������*/ Pair& operator--() {
		--first_number;
		--second_number;
		return *this;
	}
	/*����������� �������� ���������*/ Pair operator++(int) {
		Pair temporary = *this;  // ��������� ������� ������
		++first_number;  // ����������� ��������
		++second_number;
		return temporary;  // ���������� ������ ��������
	}
	/*����������� �������� ���������*/ Pair operator--(int) {
		Pair temporary = *this;
		first_number--;
		second_number--;
		return temporary;
	}
	/*�������� ��������*/ Pair operator+(Pair& summand) {
		int amount_of_first_numbers = first_number + summand.first_number;
		double amount_of_second_numbers = second_number + summand.second_number;
		Pair amount;
		amount.first_number = amount_of_first_numbers;
		amount.second_number = amount_of_second_numbers;
		return amount;
	}
	/*�������� ���������*/ Pair operator-(const Pair& deductible) const {
		return Pair(first_number - deductible.first_number, second_number - deductible.second_number);
	}
	/*�������� �����*/ friend istream& operator>>(istream& input_stream, Pair& data) {
		cout << "������ ����� (int) = ";
		input_stream >> data.first_number;
		cout << "������ ����� (double) = ";
		input_stream >> data.second_number;
		return input_stream;
	}
	/*�������� ������*/ friend ostream& operator<<(ostream& output_stream, const Pair& data) {
		return (output_stream << data.getFirstNumber() << " : " << data.getSecondNumber());
	}
	// ���������� ��������� � ���� �����
	/*��� ������ �����*/ Pair operator+(int constant) const {
		return Pair(first_number + constant, second_number);
	}
	/*��� ������������� �����*/ Pair operator+(double constant) const { 
		return Pair(first_number, second_number + constant);
	}
};