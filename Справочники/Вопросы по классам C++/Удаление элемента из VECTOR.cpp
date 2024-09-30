#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> my_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	int index_to_remove = 3;
	if (index_to_remove >= 0 && index_to_remove < my_vector.size()) {
		my_vector.erase(my_vector.begin() + index_to_remove);
	}
	for (const auto& element : my_vector)
		cout << element << ' ';
	cout << endl;
	return 0;
}