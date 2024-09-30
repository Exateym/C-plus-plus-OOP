#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, string> my_map;
	my_map[0] = "Членси";
	my_map[1] = "Пачули";
	my_map[2] = "ПРЯНИКИ";
	for (auto& pair : my_map)
		cout << "Ключ: " << pair.first << ", значение: " << pair.second << endl;
	for (int i = 0; i < my_map.size(); ++i)
		cout << "Ключ: " << i << ", значение: " << my_map[i] << endl;
	return 0;
}