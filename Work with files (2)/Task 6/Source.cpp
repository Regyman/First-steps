#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

void ReadFile(string Name, const int N, double arr[]) 
{
	ifstream fin;
	fin.open(Name);
	double x;
	for (int i = 0;i < N;i++) 
	{
		fin >> *(arr + i);
	}
	    fin.close();
}	

int main()
{
	setlocale(LC_ALL, "Rus");
	int x, y;
	cout << "������� ���������� x" << endl;
	cin >> x;
	cout << "������� ���������� y" << endl;
	cin >> y;
	const int N = 10;
	double CircleX[N], CircleY[N], CircleR[N], Array[N];

	for (int i = 0 ; i < N ; i++) 
	{
		ReadFile("XPositions.txt", N, Array);
		CircleX[i] = Array[i];        
	}

	for (int i = 0 ; i < N ; i++) 
	{
		ReadFile("YPositions.txt", N, Array);
		CircleY[i] = Array[i];
	}

	for (int i = 0 ; i < N ; i++)
	{
		ReadFile("RPositions.txt", N, Array);
		CircleR[i] = Array[i];
	}
	
	cout << "������:" << endl;

	for (int i = 0 ; i < N ; i++) 
	{
		cout << CircleX[i] << " ";

		cout << CircleY[i] << " ";

		cout << CircleR[i] << "\n";
	}

	for (int i2 = 0 ; i2 < N ; i2++)
	{
		if (pow(x - CircleX[i2], 2) + pow(y - CircleY[i2], 2) > pow(CircleR[i2], 2))
		{
			cout << "���, �� ��������\n";
            _getch();
	        return 0;
		}
		if (pow(x - CircleX[i2], 2) + pow(y - CircleY[i2], 2) <= pow(CircleR[i2], 2)) {
			cout << "��,��������";
			_getch();
			return 0;

		}
	}

    




	






	
}