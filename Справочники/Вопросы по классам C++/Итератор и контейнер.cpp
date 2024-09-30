#include <iostream>
using namespace std;

class Iterator {
	int* ptr;
public:
	Iterator(int* p) : ptr(p) {
		cout << "Новый итератор создан\n";
	}
	int& operator*() {
		return *ptr;
	}
	Iterator& operator++() {
		++ptr;
		return *this;
	}
	Iterator& operator++(int) {
		Iterator temp = *this;
		++ptr;
		return temp;
	}
	bool operator==(const Iterator& other) const {
		return ptr == other.ptr;
	}
	bool operator!=(const Iterator& other) const {
		return ptr != other.ptr;
	}
	~Iterator() {
		cout << "Итератор удалён\n";
	}
};

class Container {
	static const int size = 10;
	int data[size];
public:
	Container() {
		for (int i = 0; i < size; ++i)
			data[i] = i + 1;
		cout << "Контейнер создан\n";
	}
	Iterator begin() {
		return Iterator(data);
	}
	Iterator end() {
		return Iterator(data + size);
	}
	~Container() {
		cout << "Контейнер удалён\n";
	}
};

int main() {
	Container container;
	cout << "Элементы контейнера: ";
	for (Iterator it = container.begin(); it != container.end(); ++it)
		cout << *it << " ";
	cout << endl;
	return 0;
}