#include <iostream>
using namespace std;
const int m = 5;
int a[m][m];
int main()
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (j <= i)
				a[i][j] = i - j + 1;
			else
				a[i][j] = 0;
		}
	}
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}