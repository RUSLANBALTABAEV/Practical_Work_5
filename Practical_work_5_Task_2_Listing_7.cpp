// Practical_work_5_Task_2_Listing_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

long double the_area_of_the_full_surface_pyramid(int l, int p, int a)
{
	double S_a_f_p, S, S_a_s, S_a_b;
	S_a_s = 0.5 * l * p;
	S_a_b = 0.5 * (sqrt(3) * pow(a, 2) / 4);
	S_a_f_p = S_a_s + S_a_b;
	return S_a_s;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int l2, p2, a2;
	cout << "Введите через пробел длину ребер и периметр треугольной пирамиды: "; cin >> l2 >> p2 >> a2;
	cout << "Площадь полной поверхности треугольной пирамиды равна = " << the_area_of_the_full_surface_pyramid(l2, p2, a2);
	_getch();
	return 0;
}