// Practical_work_5_Task_1_Sample_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//описание функции max находится в данном файле ниже тела главной функции]
#include <iostream>  // Заголовочный файл с классами, функциями и переменными для организации ввода-вывода
#include <clocale>   // Заголовочный файл стандартной библиотеке C как <locale.h>
#include <conio.h>   // Заголовочный файл, консольный ввод-вывод

using namespace std; // использование пространство имён

void print(char);      // прототип функции

int main()             // фукнция main()
{
	setlocale(LC_ALL, "Russian");
	char x;
	cout << "\nВводите символы. " << " Enter - окончание ввода";
	do {
		x = _getch();
		print(x);
	} while (x != 13);
	return 0;
}
void print(char a) { cout << a << "\t"; }