#include<iostream>
using namespace std;
int main()
{
    const int n = 5;
    int mas[n][n] = {0};
    int mid = n / 2;
    mas[0][mid] = 1;
    int x1 = mid;
    int x2 = mid;
	for (int i = 1; i < n; i++)
	{
		if (i <= mid)
		{
		    x1--;
		    x2++;
		}
		else
		{
		    x1++;
		    x2--;
		}
		mas[i][x1] = 1;
		mas[i][x2] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
