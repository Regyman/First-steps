#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<time.h>

using namespace std;

int turn();
int BrosokIgrok();
int BrosokComputer();



int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");

	int res = turn();
	cout << "Привет ,сейчас мы поиграем в кости!" << endl;
	cout << "Порядок ходов определяется случайным образом,всего будет 4 броска" << endl;

	int resi, resc;
	if (res == 0) 
	{
		
		resc = BrosokComputer();
	    resi = BrosokIgrok();
	    
       cout << "Сумма очков после 4 бросков компьютера:\n" << resc << endl;
	   cout << "Сумма очков после 4 ваших бросков: " << resi << endl;
	}
		

	else
	{
		
		resi = BrosokIgrok();
		resc = BrosokComputer();		
		cout << "Сумма очков после 4 ваших бросков: " << resi << endl;
		cout << "Сумма очков после 4 бросков компьютера:\n" << resc << endl;
	}
		

	
	 
	if (resi > resc)
		cout << "Поздравляем!Вы победили!"<<endl;

	else if (resi == resc)
		cout << "В этот раз победила дружба!"<<endl;

	else if (resi < resc)
		cout << "Увы,вы проиграли.Повезет в следующий раз!" << endl;




	_getch();
	return 0;
}

int turn() 
{
	
	int n = rand() % 2;
	
	return n;
}

int BrosokIgrok() 
{
	cout << "Ваш ход: " << endl;
	int bro,i,count;
	for (i = 1,count = 0;i <= 4;i++) 
	{
		cout << "Для броска нажмите 1" << endl;
		cin >> bro;				
	    int n = 1 + rand() % 6;
	    cout << "У вас выпало: " << n << endl;
		
		switch (n)
		{
		case 1:
			cout << "@@@@@@@\n";
			cout << "@@@@@@@\n";
			cout << "@@@ @@@\n";
			cout << "@@@@@@@\n";
			cout << "@@@@@@@\n";
			break;
		case 2:
			cout << "@@@@@@@\n";
			cout << "@ @@@@@\n";
			cout << "@@@@@@@\n";
			cout << "@@@@@ @\n";
			cout << "@@@@@@@\n";
			break;
		case 3:
			cout << "@@@@@@@\n";
			cout << "@ @@@@@\n";
			cout << "@@@ @@@\n";
			cout << "@@@@@ @\n";
			cout << "@@@@@@@\n";
			break;
		case 4:
			cout << "@@@@@@@\n";
			cout << "@ @@@ @\n";
			cout << "@@@@@@@\n";
			cout << "@ @@@ @\n";
			cout << "@@@@@@@\n";
			break;
		case 5:
			cout << "@@@@@@@\n";
			cout << "@ @@@ @\n";
			cout << "@@@ @@@\n";
			cout << "@ @@@ @\n";
			cout << "@@@@@@@\n";
			break;
		case 6:
			cout << "@@@@@@@\n";
			cout << "@ @ @ @\n";
			cout << "@@@@@@@\n";
			cout << "@ @ @ @\n";
			cout << "@@@@@@@\n\n";
			break;
		}
	
		count += n;
	}
	

	return count;
}

int BrosokComputer() 
{
	cout << "Ход компьютера: " << endl;
	int bro, i, count;
	for (i = 1, count = 0;i <= 4;i++)
	{
		cout << "Для броска компьютера нажмите 1" << endl;
		cin >> bro;		
		int n = 1 + rand() % 6;
		cout << "У компьютера  выпало: " << n << endl;

		switch (n)
		{
		case 1:
			cout << "@@@@@@@\n";
			cout << "@@@@@@@\n";
			cout << "@@@ @@@\n";
			cout << "@@@@@@@\n";
			cout << "@@@@@@@\n";
			break;
		case 2:
			cout << "@@@@@@@\n";
			cout << "@ @@@@@\n";
			cout << "@@@@@@@\n";
			cout << "@@@@@ @\n";
			cout << "@@@@@@@\n";
			break;
		case 3:
			cout << "@@@@@@@\n";
			cout << "@ @@@@@\n";
			cout << "@@@ @@@\n";
			cout << "@@@@@ @\n";
			cout << "@@@@@@@\n";
			break;
		case 4:
			cout << "@@@@@@@\n";
			cout << "@ @@@ @\n";
			cout << "@@@@@@@\n";
			cout << "@ @@@ @\n";
			cout << "@@@@@@@\n";
			break;
		case 5:
			cout << "@@@@@@@\n";
			cout << "@ @@@ @\n";
			cout << "@@@ @@@\n";
			cout << "@ @@@ @\n";
			cout << "@@@@@@@\n";
			break;
		case 6:
			cout << "@@@@@@@\n";
			cout << "@ @ @ @\n";
			cout << "@@@@@@@\n";
			cout << "@ @ @ @\n";
			cout << "@@@@@@@\n\n";
			break;
		}

		count += n;
	}
	return count;
}
