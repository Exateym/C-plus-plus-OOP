#include <iostream>
using namespace std;

void hanoi(int rings, int start, int end, int reserve) {
	if (rings > 0) {
		hanoi(rings - 1, start, reserve, end);
		cout << start << " => " << end << endl;
		hanoi(rings - 1, reserve, end, start);
	}
}

int main() {
	int rings;
	cout << "Amount of rings: ";
	cin >> rings;
	hanoi(rings, 1, 3, 2);
	return 0;
}