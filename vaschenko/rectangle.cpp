#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;

    cout << "Введите стороны прямоугольника: ";
    cin >> a >> b;
    
    // проверка значений
    if (a <= 0 || b <= 0) {
        cout << "Ошибка: стороны должны быть положительными числами" << endl;
        return 1;
    }

    double perimeter = 2 * (a + b);
    double area = a * b;
    double diagonal = sqrt(a*a + b*b);

    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;
    cout << "Диагональ: " << diagonal << endl;

    return 0;
}
