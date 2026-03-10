#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r, angle;

    cout << "Введите радиус: ";
    cin >> r;

    cout << "Введите угол сектора (в градусах): ";
    cin >> angle;
    
    // проверка значений
    if (angle <= 0 || r <= 0) {
        cout << "Ошибка: должны быть положительными числами" << endl;
        return 1;
    }

    double length = 2 * M_PI * r;
    double area = M_PI * r * r;
    double sector = (angle / 360) * area;

    cout << "Длина окружности: " << length << endl;
    cout << "Площадь круга: " << area << endl;
    cout << "Площадь сектора: " << sector << endl;

    return 0;
}
