#include <iostream>
using namespace std;
int amount_of_rings;
const int lenght_of_array = 100;
string first[lenght_of_array], second[lenght_of_array], third[lenght_of_array];
string temporary;
int step = 1;

void visualize(int amount_of_rings_on_first, int amount_of_rings_on_second, int amount_of_rings_on_third) {
    cout << "First rod: " << amount_of_rings_on_first << endl;
    for (int i = 0; i < amount_of_rings; ++ i) cout << first[i] << endl;
    cout << "Second rod: " << amount_of_rings_on_second << endl;
    for (int i = 0; i < amount_of_rings; ++ i) cout << second[i] << endl;
    cout << "Third rod: " << amount_of_rings_on_third << endl;
    for (int i = 0; i < amount_of_rings; ++ i) cout << third[i] << endl;
}

void hanoi(int amount_of_rings, int amount_of_rings_on_first, int amount_of_rings_on_second, int amount_of_rings_on_third) {       
    if (amount_of_rings_on_third < amount_of_rings) {
        cout << "Step: " << step << endl;
        visualize(amount_of_rings_on_first, amount_of_rings_on_second, amount_of_rings_on_third);
        cout << "№ => №\n";
        int start, end;
        cin >> start >> end;
        switch(start) {
            case 1:
                temporary = first[amount_of_rings - amount_of_rings_on_first];
                first[amount_of_rings - amount_of_rings_on_first] = "";
                -- amount_of_rings_on_first;
                break;
            case 2:
                temporary = second[amount_of_rings - amount_of_rings_on_second];
                second[amount_of_rings - amount_of_rings_on_second] = "";
                -- amount_of_rings_on_second;
                break;
            case 3:
                temporary = third[amount_of_rings - amount_of_rings_on_third];
                third[amount_of_rings - amount_of_rings_on_third] = "";
                -- amount_of_rings_on_third;
        }
        switch(end) {
            case 1:
                first[amount_of_rings - 1 - amount_of_rings_on_first] = temporary;
                ++ amount_of_rings_on_first;
                break;
            case 2:
                second[amount_of_rings - 1 - amount_of_rings_on_second] = temporary;
                ++ amount_of_rings_on_second;
                break;
            case 3:
                third[amount_of_rings - 1 - amount_of_rings_on_third] = temporary;
                ++ amount_of_rings_on_third;
        }
        visualize(amount_of_rings_on_first, amount_of_rings_on_second, amount_of_rings_on_third);
        ++ step;
        hanoi(amount_of_rings, amount_of_rings_on_first, amount_of_rings_on_second, amount_of_rings_on_third);
    }
}
int main() {
    cout << "Amount of rings: ";
    cin >> amount_of_rings;
    int amount_of_spaces = amount_of_rings - 1;
    int amount_of_asterisks = 1;
    string spaces, asterisks;
    for (int i = 0; i < amount_of_rings; ++ i) {
        spaces = "";
        for (int j = 0; j < amount_of_spaces; ++ j) spaces += "  ";
        -- amount_of_spaces;
        asterisks = "";
        for (int j = 0; j < amount_of_asterisks; ++ j) asterisks += "* ";
        amount_of_asterisks += 2;
        first[i] = spaces + asterisks + spaces;
    }
    int amount_of_rings_on_first = amount_of_rings, amount_of_rings_on_second = 0, amount_of_rings_on_third = 0;
    hanoi(amount_of_rings, amount_of_rings_on_first, amount_of_rings_on_second, amount_of_rings_on_third);
    return 0;
}