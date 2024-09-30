#include <iostream>
#include <fstream>
using namespace std;

class Vector3 {
private:
    double X, Y, Z;
public:
    Vector3() : X(0), Y(0), Z(0) {}
    Vector3(double x, double y, double z) : X(x), Y(y), Z(z) {}
    Vector3(const Vector3& original) : X(original.X), Y(original.Y), Z(original.Z) {}

    void setX(double x) { X = x; }
    void setY(double y) { Y = y; }
    void setZ(double z) { Z = z; }
    void set(double x, double y, double z) { X = x; Y = y; Z = z; }

    double getX() const { return X; }
    double getY() const { return Y; }
    double getZ() const { return Z; }

    Vector3& operator++() { ++X; ++Y; ++Z; return *this; }

    // Исправленная перегрузка постфиксного оператора инкремента
    Vector3 operator++(int) {
        Vector3 temp = *this;  // Создание копии текущего объекта
        ++(*this);             // Увеличение текущего объекта
        return temp;           // Возврат копии до увеличения
    }

    friend bool operator==(const Vector3& first, const Vector3& second);
    friend ostream& operator<<(ostream& output_stream, const Vector3& object);
    friend istream& operator>>(istream& input_stream, Vector3& object);
};

bool operator==(const Vector3& first, const Vector3& second) {
    return first.X == second.X && first.Y == second.Y && first.Z == second.Z;
}

ostream& operator<<(ostream& output_stream, const Vector3& object) {
    output_stream << object.X << ' ' << object.Y << ' ' << object.Z;
    return output_stream;
}

istream& operator>>(istream& input_stream, Vector3& object) {
    input_stream >> object.X >> object.Y >> object.Z;
    return input_stream;
}

void writeNumbersInFile(const char* file_name) {
    fstream output_stream(file_name, ios::out | ios::trunc);
    int current_input = 1, amount_of_inputs = 5, number;
    for (; current_input <= amount_of_inputs; ++current_input) {
        cin >> number;
        output_stream << number << endl;
    }
    output_stream.close();
}

int main() {
    system("chcp 65001");
    system("title Перегрузка операторов");
    system("color f0");
    system("cls");

    Vector3 first_direction;
    Vector3 second_direction(3, 4, 5);

    cout << "Введите координаты для первого вектора (X Y Z): ";
    cin >> first_direction;

    if (first_direction == second_direction) {
        cout << "Направления совпадают\n";
    }
    else {
        cout << "Направления не совпадают\n";
    }

    cout << "Первый вектор: " << first_direction << endl;
    cout << "Второй вектор: " << second_direction << endl;

    ++first_direction;
    cout << "Первый вектор после префиксного инкремента: " << first_direction << endl;

    cout << "Второй вектор до постфиксного инкремента: " << second_direction++ << endl;
    cout << "Второй вектор после постфиксного инкремента: " << second_direction << endl;

    writeNumbersInFile("Циферкин.txt");

    return 0;
}
