#include <iostream>
#include<string.h>
#include<conio.h>
#include<Windows.h>
using namespace std;

char *reverse(char* str, char* rev)
{

	int j, i, tempj, tempi;
	i = 0;
	tempi = strlen(str);
	for (j = strlen(str);j >= 0;j--)
	{
		if (str[j - 1] == ' ' || j == 0)
		{

			for (tempj = j;tempj < tempi;tempj++)
			{

				rev[i] = str[tempj];
				i++;

			}
			rev[i] = ' ';
			i++;
			tempi = j - 1;
		}

	}

	rev[strlen(str)] = '\0';
	return rev;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	 setlocale(LC_ALL, "Rus");

	 const int  len = 100;
     char str[len], rev[len];

	cout << "Введите строку:" << endl;
	cin.get(str, len);

	cout <<"Перевернутая строка:\n" << reverse(str,rev);

	_getch();
	return 0;
}
