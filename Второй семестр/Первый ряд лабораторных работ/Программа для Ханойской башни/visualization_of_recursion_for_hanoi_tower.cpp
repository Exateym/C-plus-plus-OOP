#include <iostream>
using namespace std;

void hanoi (int rings, int start, int end, int reserve, int& first, int& second, int& third)
{
    if (rings > 0)
    {
        hanoi (rings - 1, start, reserve, end, first, second, third);
        cout << start << " => " << end << endl;
        switch (start)
        {
            case 1: -- first; break;
            case 2: -- second; break;
            case 3: -- third;
        }
        switch (end)
        {
            case 1: ++ first; break;
            case 2: ++ second; break;
            case 3: ++ third;
        }
        cout << "First: " << first << ". Second: " << second << ". Third: " << third << "\n\n";
        hanoi(rings - 1, reserve, end, start, first, second, third);
    }
}

int main ()
{
    int rings;
    cout << "Amount of rings: ";
    cin >> rings;
    int first = rings, second = 0, third = 0;
    cout << "First: " << first << ". Second: " << second << ". Third: " << third << "\n\n";
    hanoi (rings, 1, 3, 2, first, second, third);
    return 0;
}