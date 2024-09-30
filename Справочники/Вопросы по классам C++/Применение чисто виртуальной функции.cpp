#include <iostream>
using namespace std;

class Shape {
public:
	virtual double area() const = 0;
	virtual ~Shape() {};
};

class Rectangle : public Shape {
private:
	double width, height;
public:
	Rectangle(double w, double h) {
		width = w;
		height = h;
	}
	double area() const override {
		return width * height;
	}
};

int main() {
	double width, height;
	cout << "Введите стороны прямоугольника: ";
	cin >> width >> height;
	Rectangle rectangle(width, height);
	cout << "Площадь прямоугольника равна: " << rectangle.area() << endl;
	return 0;
}