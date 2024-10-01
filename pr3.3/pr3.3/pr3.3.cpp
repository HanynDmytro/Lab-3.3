// Lab_03_3.cpp
// Ганин Дмитро
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (-6 <= x && x <= 0) {
		y = ( - (R * x) / 6 ) - R;
	}
	else
		if (0 <= x && x <= R) {
			y = -sqrt(pow(R, 2) - pow(x, 2));
		}
		else
			if (R <= x && x <= 2 * R) {
				y = sqrt(( - 3 * pow(R, 2)) - pow(x, 2) + (4 * x * R));
			}
			else {
				y = R;
			}
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}