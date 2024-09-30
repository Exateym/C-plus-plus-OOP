#include <iostream>
#include <cmath>
using namespace std;
double function(double x) {
    return exp(x) - exp(-x) - 2;
}
int main() {
    const double epsilon = pow(10, -6);
    double a, b, x;
    a = 0;
    b = 1;
    while (abs(a - b) > epsilon) {
        x = (a + b) / 2;
        if (function(a) * function(x) < 0) b = x;
        else a = x;
        cout << x << endl;
    }
    return 0;
}