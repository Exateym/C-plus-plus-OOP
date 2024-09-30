#include <iostream>
#include <cmath>
using namespace std;
double curve(double x) {
	return exp(x) - exp(-x) - 2;
}
double tangent(double x) {
	return exp(x) + exp(-x);
}
double convergence(double x) {
	return exp(x) - exp(-x);
}
int main() {
	const double epsilon = pow(10, -6);
	double a, b, x;
	a = 0;
	b = 1;
	if (curve(a) * convergence(a) > 0) x = a;
	else x = b;
	while (abs(curve(x)) > epsilon) {
		x = x - curve(x) / tangent(x);
		cout << x << endl;
	}
	return 0;
}