#include <iostream>
#include <cmath>
using namespace std;

// Нахождение длины стороны по формуле расстояния между двумя точками
double d(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

// Нахождение площади треугольника по формуле Герона
double S(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    double points[3][2];
    setlocale(LC_ALL, "Russian");
    cout << "1. Введите координаты общей для всех треугольников вершины (x, y) (double):\nx = ";
    cin >> points[0][0];
    cout << "y = ";
    cin >> points[0][1];
    cout << "\n2. Введите следующую вершину (x, y) (double):\nx = ";
    cin >> points[1][0];
    cout << "y = ";
    cin >> points[1][1];
    cout << "\n3. Введите следующую вершину (x, y) (double):\nx = ";
    cin >> points[2][0];
    cout << "y = ";
    cin >> points[2][1];
    double sideLenghts[3];
    sideLenghts[0] = d(points[0][0], points[0][1], points[1][0], points[1][1]);
    cout << "\nДлина первой стороны равна " << sideLenghts[0];
    sideLenghts[1] = d(points[1][0], points[1][1], points[2][0], points[2][1]);
    cout << "\nДлина второй стороны равна " << sideLenghts[1];
    sideLenghts[2] = d(points[0][0], points[0][1], points[2][0], points[2][1]);
    cout << "\nДлина третьей стороны равна " << sideLenghts[2];
    double totalS = 0;
    double currentS = S(sideLenghts[0], sideLenghts[1], sideLenghts[2]);
    cout << "\nПлощадь последнего треуголька равна " << currentS;
    totalS += currentS;
    cout << "\nПлощадь всех треугольников равна " << totalS << endl;

    int counter = 4;
    while (true)
    {
        points[1][0] = points[2][0];
        points[1][1] = points[2][1];
        cout << "\n" << counter << ". Введите следующую вершину (x, y) (double):\nx = ";
        cin >> points[2][0];
        cout << "y = ";
        cin >> points[2][1];
        sideLenghts[0] = sideLenghts[2];
        cout << "\nДлина первой стороны равна " << sideLenghts[0];
        sideLenghts[1] = d(points[1][0], points[1][1], points[2][0], points[2][1]);
        cout << "\nДлина второй стороны равна " << sideLenghts[1];
        sideLenghts[2] = d(points[0][0], points[0][1], points[2][0], points[2][1]);
        cout << "\nДлина третьей стороны равна " << sideLenghts[2];
        currentS = S(sideLenghts[0], sideLenghts[1], sideLenghts[2]);
        cout << "\nПлощадь последнего треуголька равна " << currentS;
        totalS += currentS;
        cout << "\nПлощадь всех треугольников равна " << totalS << endl;
        counter++;
    }
    return 0;
}