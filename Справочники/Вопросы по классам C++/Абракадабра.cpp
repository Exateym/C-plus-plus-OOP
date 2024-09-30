#include <iostream>
using namespace std;

class A {
	int a;
public:
	void method() { cout << "method A" << endl; }
};
class B {
	int b;
public:
	void method() { cout << "method B" << endl; }
};
class C : public B, public A {
	int c;
public:
	void foo() {
		A::method(); // Явно указываем вызов метода method() из класса A
	}
};
int main() {
	C c;
	c.foo();
}