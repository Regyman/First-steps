#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	const double E = 1E-6;
	double a, b, x, y, f, d, c, e, z, gy , uy , gx , ux ,resy , resx,s,i ;
	cout << "система линейных уравнений имеет вид : \n ax+by=c\n dx+ey=f \n Вам неободимо ввести все переменные кроме x и y\n ";
	cout << "Введите a\n";
	cin >> a;
	cout << "Введите b\n";
	cin >> b;
	cout << "Введите c\n";
	cin >> c;
	cout << "Введите d\n";
	cin >> d;
	cout << "Введите e\n";
	cin >> e;
	cout << "Введите f\n";
	cin >> f;
	z = a * e - b * d;

		if (abs(z)> E){
			x = (c*e - b * f) / z;
		y = (a*f - c * d) / z;
		cout << "При решении системы уравнени получились следующие значения-" << "\nX=" << x << "\nY=" << y << endl;
		cout << "Проверка:" << endl;
		cout << x <<"*" << a <<"+"<<y<< "*" << b <<"-"<< c << x*a+y*b-c<<endl;
		s = x * a + y * b - c;
		cout << x << "*" << d << "+" << y << "*" << e << "-" << x * d + y * e -f;
		i = x * d + y * e - f;
		cout << endl;
		if (abs(s) < E&& abs(i) < E) {

			cout << "Неравенство  Верно"<<endl;
		}
		else
			cout << "Ошибка";
	}
		else {
			gy = a * f;
			uy = d * c;
			resy = gy - uy;
			gx = c * e;
			ux = f * b;
			resx = gx - ux;
			if (abs (resy) <E && abs(resx)< E) {
				cout << "Система уравнений имеет бесконечное количество решений\n";

			}
			else
				cout << "Система уравнений не имеет решений\n";
		}

	system("pause");
	return 0;
	

}
