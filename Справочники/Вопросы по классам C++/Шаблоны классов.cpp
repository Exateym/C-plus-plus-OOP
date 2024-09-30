#include <iostream>
using namespace std;

template<class T>
class Point {
    T x, y;
public:
    Point() : x(0), y(0) {}
    Point(T coordinate_x, T coordinate_y) : x(coordinate_x), y(coordinate_y) {}
    void Show();
};

template<class T>
void Point<T>::Show() {
    cout << "(" << x << ", " << y << ")" << endl;
}

int main() {
    Point<int> p1;
    Point<int> p2(1, 1);
    p1.Show();
    p2.Show();

    Point<double> p3(1.1, 2.2);
    p3.Show();

    return 0;
}