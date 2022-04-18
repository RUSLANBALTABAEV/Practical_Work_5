// Practical_work_5_Task_2_Listing_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

long double S(double a1, double b1, double a2, double b2, double a3, double b3)
{
	double S1, S2, S3;
	
	S1 = (a1 * b1) / 2;
	S2 = (a2 * b2) / 2;
	S3 = (a3 * b3) / 2;
	
	if (S1 >= S2 && S1 >= S3)
	{
		cout << "Площадь первого треугольника больше! И равно: " << S1 << endl;
	}

	if (S2 >= S1 && S2 >= S3)
	{
		cout << "Площадь второго треугольника больше! И равно: " << S2 << endl;
	}

	if (S3 >= S2 && S3 >= S1)
	{
		cout << "Площадь третьего треугольника больше! И равно: " << S3 << endl;
	}
	return S1, S2, S3;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2, z1, z2;
	cout << "Введите катеты прямоуольных треугольников через пробел значение a1, b1, a2, b2, a3, b3: ";
	cin >> x1 >> y1 >> x2 >> y2 >> z1 >> z2;
	S(x1, y1, x2, y2, z1, z2);
	_getch();
	return 0;
}