// Lab_02.cpp
// Чипігіна Анастасія
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 23

#include <iostream>
using namespace std;

int main()
{
    double a; // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу
    double z3;

    cout << "a = "; cin >> a;

    z1 = (sin(2*a)+sin(5*a)-sin(3*a))/(cos(a)+1-2*sin(2*a)*sin(2*a));
    z2 = 2 * sin(a);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}