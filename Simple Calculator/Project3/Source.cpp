#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float num1, num2,result;
	char dei;
	cout << "������� ������ �����-";
	cin >> num1;
	cout << "������� ������ �����-";
    cin >> num2;
	cout << "������� ��������-";
	cin >> dei;
	if (dei == '*' || dei == '+' || dei == '-' || dei == '/')
	{
		if (dei == '+')
		{
			result = num1 + num2;
			cout << "����� �����= " << result << "\n";


		}
		if (dei == '*')
		{
			result = num1 * num2;
			cout << "������������ �����= " << result << "\n";


		}
		if (dei == '-')
		{
			result = num1 - num2;
			cout << "�������� �����= " << result << "\n";


		}
		if (dei == '/')
		{
			if (num2 != 0) {
				result = num1 / num2;
				cout << "��� ������� ����� ����������- " << result << "\n";

			}
			else
				cout << "������!\n";

		}
	}
	else
		cout << "������������ ��������\n";

	system("pause");
	return 0;
}