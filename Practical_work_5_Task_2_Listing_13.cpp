// Practical_work_5_Task_2_Listing_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int max(int a, int b)
{
	int c;
	c = (a > b) ? a : b;   // тело функции
	return c;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	int x, y, u, v, r;
	cout << "Введите через пробел значение a, b: "; cin >> x >> y;
	u = max(x, y);
	v = max(x * y, x + y);
	r = max(u + pow(v, 2), 3.14);
	cout << "Значение u равна = " << u << endl;
	cout << "Значение v равна = " << v << endl;
	cout << "Конечный результат равна: " << r;
	_getch();
	return;
}