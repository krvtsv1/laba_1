#include <iostream>
#include <cmath>
using namespace std;
// Функция для вычисления периметра трапеции
double calculatePerimeter(double a, double b, double c, double d) {
 return a + b + c + d;
}
// Функция для вычисления площади трапеции
double calculateArea(double a, double b, double h) {
 return (a + b) * h / 2;
}
// Функция для вычисления длины средней линии трапеции
double calculateMidline(double a, double b) {
 return (a + b) / 2;
}
//проверка параметров трапеции
bool proverka(double a, double b, double c, double d, double h) {
  if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0) {
      cout << "Ошибка: Все длины сторон и высота должны быть положительными числами." << endl;
      return false;
  }
  if (c<=h || d<=h){
      cout << "Боковые стороны должны быть больше высоты." << endl;
      return false;
   }
  double baseDiff = abs(a - b); //проверка что сумма длин боковых сторон должна быть больше разности оснований
  if (c + d <= baseDiff) {
      cout << "Ошибка: Трапеция с такими сторонами не может существовать." << endl;
      return false;
  }
  return true;
}
int main() {
  double a, b, c, d, h;
  // Ввод данных
  cout << "Введите параметры трапеции:" << endl;
  cout << "Длина верхнего основания (a): ";
  cin >> a;
  cout << "Длина нижнего основания (b): ";
  cin >> b;
  cout << "Длина левой боковой стороны (c): ";
  cin >> c;
  cout << "Длина правой боковой стороны (d): ";
  cin >> d;
  cout << "Высота трапеции (h): ";
  cin >> h;
  // Проверка данных
  if (proverka(a, b, c, d, h)) {
      //вывод результатов
      cout << "Периметр трапеции: " << calculatePerimeter(a, b, c, d) << endl;
      cout << "Площадь трапеции: " << calculateArea(a, b, h) << endl;
      cout << "Длина средней линии: " << calculateMidline(a, b) << endl;
  } else {
      cout << "Трапеция с такими параметрами не существует. Вычисления не выполнены." << endl;
  }
  return 0;
}
