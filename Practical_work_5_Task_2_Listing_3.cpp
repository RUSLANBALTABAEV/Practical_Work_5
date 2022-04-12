// Practical_work_5_Task_2_Listing_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>  // Заголовочный файл с классами, функциями и пеменными для организации ввода-вывода
#include <conio.h>   // Заголовочный файл, консольный ввод-вывод
#include <math.h>    // Заголовочный файл, для использование мат-функций
#include <iomanip>	 // Заголовок <iomanip> объекта iostreams для определения нужного числа манипуляторов, каждый из которых принимает один аргумент

using namespace std; // использование пространство имён

long long  factorial(long long  n)
{
    return n <= 1 ? 1 : n * factorial(n - 1);
}

double  get_P(long long  n)
{
    return  pow(3.0, double(n)) * exp(-3.0) / factorial(n);
}

int main()
{
    std::locale::global(std::locale(""));
    const long long  N_MIN = 0;
    const long long  N_MAX = 20;
    for (;;)
    {
        long long  n = 0;

        cout << "В порт приходят в среднем 3 корабля в день." << endl << "Введите количество кораблей для вычисления вероятности " << N_MIN << ".." << N_MAX << ": "; cin >> n;
        if (n < N_MIN || N_MAX < n) break;
        cout << "Вероятность того, что в порт в день придут " << n << " кораблей, равна: " << fixed << setprecision(10) << get_P(n) << "." << endl << endl << endl << endl;
    }
    _getch();
    return 0;
}