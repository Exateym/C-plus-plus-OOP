#include <iostream>
using namespace std;

class Iterator {
	int* pointer;
public:
	Iterator(int* p) : pointer(p) {}
	bool operator!=(const Iterator& other) {
		return pointer != other.pointer;
	}
	Iterator& operator++() {
		++pointer;
		return *this;
	}
	int& operator*() {
		return *pointer;
	}
};

class NaturalNumbers {
	static const int amount_of_elements = 10;
	int numbers[amount_of_elements];
public:
	NaturalNumbers() {
		for (int i = 0; i < amount_of_elements; ++i)
			numbers[i] = i + 1;
	}
	Iterator begin() {
		return Iterator(numbers);
	}
	Iterator end() {
		return Iterator(numbers + amount_of_elements);
	}
};

int main() {
	NaturalNumbers numbers;
	for (Iterator it = numbers.begin(); it != numbers.end(); ++it)
		cout << *it << ' ';
	cout << endl;
	return 0;
}