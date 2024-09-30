#include<iostream>
using namespace std;
int main()
{
    const int m = 10;
    int s = 1;
    int a[m][m];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if ((i + j) % 2 == 1)
				a[i][j] = 0;
			else
			{
				a[i][j] = s;
				s++;
				if (s == 10)
					s = 1;
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}