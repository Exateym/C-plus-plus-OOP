#include <iostream>
using namespace std;

class Furry {
public:
	Furry() {
		cout << "Создан новый фурри\n";
	}
	virtual void speak() const {
		cout << "Фурри говорит\n";
	}
	virtual ~Furry() {
		cout << "Фурри сожжён\n";
	}
};

class Hoodwink : public Furry {
public:
	void speak() const override {
		cout << "I have squirrel pussy\n";
	}
};

class d2nd1 : public Furry {
public:
	void speak() const override {
		cout << "I lick squirrel pussy\n";
	}
};

void makeFurrySpeak(const Furry& furry) {
	furry.speak();
}

int main() {
	Furry furry;
	Hoodwink hoodwink;
	d2nd1 danny_who;
	makeFurrySpeak(furry);
	makeFurrySpeak(hoodwink);
	makeFurrySpeak(danny_who);
	return 0;
}