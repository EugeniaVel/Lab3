//����� �������
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
	cout << "�������� ������ �����: [-2;2]\n";
	cout << "������� x1: ";
	cin >> x1;
	cout << "������� x2: ";
	cin >> x2;
	cout << "������� �������� ���������� �����: ";
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
	
	cout << "������ ��������� � �������� ���������: " << x3;
	cout << "\n���������� ��������: " << i;
}