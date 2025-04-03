#include <iostream>
#include <cmath>
using namespace std;

// Функция вычисления периметра
double Perimeter(double a, double b) {
    return 2 * (a + b);
}
// Функция вычисления площади
double Area(double a, double b) {
    return a * b;
}
// Функция вычисления диагонали
double Diagonal(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "Введите длину прямоугольника: ";
    cin >> a;
    cout << "Введите ширину прямоугольника: ";
    cin >> b;
    if (a <= 0 || b <= 0) {
        cout << "Ошибка: значения должны быть положительными!\n";
        return 1;
    }
    // Вызов функций для вычисления параметров
    double perimeter = Perimeter(a, b);
    double area = Area(a, b);
    double diagonal = Diagonal(a, b);

    cout << "\nРезультаты:\n";
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;
    cout << "Диагональ: " << diagonal << endl;

    return 0;
}

