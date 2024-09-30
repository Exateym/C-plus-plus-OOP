#include <iostream>
using namespace std;

class Vector2D {
private:
    double x, y;

public:
    Vector2D() : x(0), y(0) {}
    Vector2D(double x, double y) : x(x), y(y) {}

    // Перегрузка оператора сложения
    Vector2D operator+(const Vector2D& other) const {
        return Vector2D(x + other.x, y + other.y);
    }

    // Перегрузка оператора вычитания
    Vector2D operator-(const Vector2D& other) const {
        return Vector2D(x - other.x, y - other.y);
    }

    // Перегрузка оператора умножения на скаляр
    Vector2D operator*(double scalar) const {
        return Vector2D(x * scalar, y * scalar);
    }

    // Перегрузка оператора сравнения
    bool operator==(const Vector2D& other) const {
        return (x == other.x && y == other.y);
    }

    // Перегрузка оператора вывода
    friend ostream& operator<<(ostream& os, const Vector2D& v) {
        os << "(" << v.x << ", " << v.y << ")";
        return os;
    }
};

int main() {
    Vector2D v1(3.0, 4.0);
    Vector2D v2(1.0, 2.0);

    Vector2D v3 = v1 + v2; // Использование перегруженного оператора +
    Vector2D v4 = v1 - v2; // Использование перегруженного оператора -
    Vector2D v5 = v1 * 2.0; // Использование перегруженного оператора *

    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v1 + v2: " << v3 << endl;
    cout << "v1 - v2: " << v4 << endl;
    cout << "v1 * 2.0: " << v5 << endl;

    if (v1 == v2) {
        cout << "v1 и v2 равны" << endl;
    }
    else {
        cout << "v1 и v2 не равны" << endl;
    }

    return 0;
}