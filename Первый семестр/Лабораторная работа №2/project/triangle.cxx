#include <iostream>
using namespace std;
int main () {
	int n, p, z, s;
	while (n < 5 || n % 2 == 0) {
		cin >> n;
	}
	p = (n - 1) / 2;
	z = 1;
	s = (n + 1) / 2;
	for (int i = 1; i <= s; ++ i) {
		cout << endl;
		for (int j = 1; j <= p; ++ j) {
			cout << "  ";
		}
		-- p;
		for (int j = 1; j <= z; ++ j) {
			cout << "* ";
		}
		z += 2;
	}
	return 0;
}