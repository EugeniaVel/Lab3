//Метод итераций
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double f(double x)
{
	return 0.6*pow(cos(x/2),2)+1.2;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, x0, eps;
	int i=0;
	cout << "Интервал поиска корня: [0;2]\n";
	cout << "Введите x0: ";
	cin >> x;
	cout << "Введите точность нахождения корня: ";
	cin >> eps;
	while (i<10000)
	{
		x0 = x;
		i++;
		x = f(x0);
		if (abs(x-x0)<eps) 
		{
			break;
		}
	}
	double func = 3*pow(cos(x/2),2)-5*x+6;
	cout << setprecision(13) << "Корень уравнения с указанной точностью: " << x;
	cout << setprecision(13) << "\nЗначение функции при найденном корне: " << func;
	cout << "\nЧисло итераций: " << i;
}