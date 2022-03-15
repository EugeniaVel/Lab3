//Метод секущих
#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{
	return sin(x)*exp(-2*x);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, x3, eps;
	int i=0;
	cout << "Интервал поиска корня: [-2;2]\n";
	cout << "Введите x1: ";
	cin >> x1;
	cout << "Введите x2: ";
	cin >> x2;
	cout << "Введите точность нахождения корня: ";
	cin >> eps;
	while (i<10000)
	{
		x3=x2-((x2-x1)*f(x2))/(f(x2)-f(x1));
		x1=x2;
		x2=x3;
		i++;
		if (abs(f(x3))<=eps)
		{
			break;
		}	
	}
	
	cout << "Корень уравнения с заданной точностью: " << x3;
	cout << "\nКоличество итераций: " << i;
}