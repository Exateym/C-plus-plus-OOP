#include <iostream>
#include <map>
using namespace std;

template <class T1, class T2>
void addElements(map<T1, T2>& m, int n) {
	T1 key = 0;
	T2 temp2;
	for (int i = 0; i < n; i += 2)
	{
		cin >> temp2;
		m.insert(make_pair(n++, temp2));
	}
}

int main() {
	return 0;
}