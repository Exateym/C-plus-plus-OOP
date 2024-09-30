#include <iostream>
using namespace std;
const int m = 11;
int main()
{
	int matrix[m][m];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
			matrix[i][j] = 1;
	for (int i = 0; i < m; i++)
		for (int j = i + 1; j < m - i - 1; j++)
			matrix[i][j] = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
	return 0;
}