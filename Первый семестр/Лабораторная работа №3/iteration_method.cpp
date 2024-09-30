#include <iostream>
#include <cmath>
using namespace std;
double expression(double x) {
	return log(exp(-x) + 2);
}
double derivative(double x) {
	return -(exp(-x))/(exp(-x) + 2);
}
int main() {
	const double epsilon = pow(10, -6);
	double a, b, x;
	a = 0;
	b = 1;
	x = (a + b) / 2;
	if (abs(derivative(x)) < 1) {
	    while (abs(x - a) > epsilon) {
	        a = x;
	        x = expression(x);
			cout << x << endl;
	    }
	}
	return 0;
}