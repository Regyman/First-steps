#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	const double E = 1E-6;
	double a, b, x, y, f, d, c, e, z, gy , uy , gx , ux ,resy , resx,s,i ;
	cout << "������� �������� ��������� ����� ��� : \n ax+by=c\n dx+ey=f \n ��� ��������� ������ ��� ���������� ����� x � y\n ";
	cout << "������� a\n";
	cin >> a;
	cout << "������� b\n";
	cin >> b;
	cout << "������� c\n";
	cin >> c;
	cout << "������� d\n";
	cin >> d;
	cout << "������� e\n";
	cin >> e;
	cout << "������� f\n";
	cin >> f;
	z = a * e - b * d;

		if (abs(z)> E){
			x = (c*e - b * f) / z;
		y = (a*f - c * d) / z;
		cout << "��� ������� ������� �������� ���������� ��������� ��������-" << "\nX=" << x << "\nY=" << y << endl;
		cout << "��������:" << endl;
		cout << x <<"*" << a <<"+"<<y<< "*" << b <<"-"<< c << x*a+y*b-c<<endl;
		s = x * a + y * b - c;
		cout << x << "*" << d << "+" << y << "*" << e << "-" << x * d + y * e -f;
		i = x * d + y * e - f;
		cout << endl;
		if (abs(s) < E&& abs(i) < E) {

			cout << "�����������  �����"<<endl;
		}
		else
			cout << "������";
	}
		else {
			gy = a * f;
			uy = d * c;
			resy = gy - uy;
			gx = c * e;
			ux = f * b;
			resx = gx - ux;
			if (abs (resy) <E && abs(resx)< E) {
				cout << "������� ��������� ����� ����������� ���������� �������\n";

			}
			else
				cout << "������� ��������� �� ����� �������\n";
		}

	system("pause");
	return 0;
	

}
