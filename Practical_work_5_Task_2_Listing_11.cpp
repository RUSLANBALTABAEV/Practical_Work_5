// Practical_work_5_Task_2_Listing_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

double s(double a, double b, double c)
{
	double p, S;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	return S;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a2, b2, c2, a3, b3, c3, a4, b4, c4, R;
	cout << "Введите через пробел шесть значений стороны треугольника: "; cin >> a2 >> b2 >> c2 >> a3 >> b3 >> c3;
	R = s(a2, b2, c2) + s(a3, b3, c3);
	cout << "Площадь елки равна = " << R;
	_getch();
	return 0;
}