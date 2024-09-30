#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

class SquareEquation {
    double a, b, c, x1, x2;
    bool roots_has_been_found;
public:
    SquareEquation(double A, double B, double C) : a(A), b(B), c(C), roots_has_been_found(false) {}
    void printFormula() {
        cout << a << "x^2 + " << b << "x + " << c << " = 0\n";
    }
    void calculateRoots() {
        if (a == 0)
            throw invalid_argument("Не является квадратным уравнением\n");
        double discriminant = pow(b, 2) - 4 * a * c;
        if (discriminant < 0)
            throw runtime_error("У данного уравнения комплексные корни\n");
        double root_of_discriminant = sqrt(discriminant);
        x1 = (-b - root_of_discriminant) / (2 * a);
        x2 = (-b + root_of_discriminant) / (2 * a);
        roots_has_been_found = true;
    }
    double getFirstRoot() {
        if (roots_has_been_found)
            return x1;
        else
            throw runtime_error("Корни не были вычислены\n");
    }
    double getSecondRoot() {
        if (roots_has_been_found)
            return x2;
        else
            throw runtime_error("Корни не были вычислены\n");
    }
    void printRoots() {
        cout << "Первый корень = " << getFirstRoot() << ", второй = " << getSecondRoot() << endl;
    }
};

int main() {
    SquareEquation square_equation(0, 3, 4);
    square_equation.printFormula();
    try {
        square_equation.calculateRoots();
        square_equation.printRoots();
    }
    catch (const invalid_argument& e) {
        cout << "Неверный аргумент: " << e.what();
    }
    catch (const runtime_error& e) {
        cout << "Возникла ошибка при выполнении: " << e.what();
    }
    return 0;
}