//Лаб 4.41.cpp
// <Яшиної Світлани>
// Лабораторна робота № 4.4
// Варіант 24

#include <iostream>
#include <clocale>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	setlocale(LC_ALL, "Russian");
	cout << "                   Лабораторна робота № 4.4" << endl;
	cout << "                    Яшиної С.М. " << endl;
	cout << "          на тему : Табуляція функції, заданої графіком " << endl;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << " R ="; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= 0)
			y = -R * (x / 6 + 1);
		else
			if (x > 0 && x <= R)
				y = -(sqrt(R * R - x * x));
			else
				if (x > R && x <= 2 * R)
					y = sqrt(R * R - (x - 2 * R) * (x - 2 * R));
				else
					if (x > 2 * R)
						y = R;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}// лаб 4.41.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//