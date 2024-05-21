#include <iostream>
#include <cmath> // для використання sin, cos, log
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
    SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення
    // Введення значення x
    double x;
    cout << "Введіть значення x: ";
    cin >> x;

    double y;

    // Обчислення значення функції y залежно від значення x
    if (x <= 0) {
        y = sin(cos(x));
    }
    else {
        y = cos(log(x));
    }

    // Виведення результату
    cout << "Значення функції y: " << y << endl;

    // Виведення інформації про програму та автора
    cout << "Проект: Обчислення значення функції" << endl;
    cout << "Автор: Туна Деніз Мехметович" << endl;
    cout << "Завдання: Якщо x<=0, то y=sin(cos(x)), інакше x>0, то y=cos(ln(x))" << endl;

    return 0;
}
