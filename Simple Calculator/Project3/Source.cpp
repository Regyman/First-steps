#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float num1, num2,result;
	char dei;
	cout << "Введите первое число-";
	cin >> num1;
	cout << "Введите второе число-";
    cin >> num2;
	cout << "Введите действие-";
	cin >> dei;
	if (dei == '*' || dei == '+' || dei == '-' || dei == '/')
	{
		if (dei == '+')
		{
			result = num1 + num2;
			cout << "Сумма чисел= " << result << "\n";


		}
		if (dei == '*')
		{
			result = num1 * num2;
			cout << "Произведение чисел= " << result << "\n";


		}
		if (dei == '-')
		{
			result = num1 - num2;
			cout << "Разность чисел= " << result << "\n";


		}
		if (dei == '/')
		{
			if (num2 != 0) {
				result = num1 / num2;
				cout << "При делении чисел получилось- " << result << "\n";

			}
			else
				cout << "Ошибка!\n";

		}
	}
	else
		cout << "Некорректное действие\n";

	system("pause");
	return 0;
}