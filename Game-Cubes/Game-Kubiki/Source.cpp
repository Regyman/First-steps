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
	cout << "������ ,������ �� �������� � �����!" << endl;
	cout << "������� ����� ������������ ��������� �������,����� ����� 4 ������" << endl;

	int resi, resc;
	if (res == 0) 
	{
		
		resc = BrosokComputer();
	    resi = BrosokIgrok();
	    
       cout << "����� ����� ����� 4 ������� ����������:\n" << resc << endl;
	   cout << "����� ����� ����� 4 ����� �������: " << resi << endl;
	}
		

	else
	{
		
		resi = BrosokIgrok();
		resc = BrosokComputer();		
		cout << "����� ����� ����� 4 ����� �������: " << resi << endl;
		cout << "����� ����� ����� 4 ������� ����������:\n" << resc << endl;
	}
		

	
	 
	if (resi > resc)
		cout << "�����������!�� ��������!"<<endl;

	else if (resi == resc)
		cout << "� ���� ��� �������� ������!"<<endl;

	else if (resi < resc)
		cout << "���,�� ���������.������� � ��������� ���!" << endl;




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
	cout << "��� ���: " << endl;
	int bro,i,count;
	for (i = 1,count = 0;i <= 4;i++) 
	{
		cout << "��� ������ ������� 1" << endl;
		cin >> bro;				
	    int n = 1 + rand() % 6;
	    cout << "� ��� ������: " << n << endl;
		
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
	cout << "��� ����������: " << endl;
	int bro, i, count;
	for (i = 1, count = 0;i <= 4;i++)
	{
		cout << "��� ������ ���������� ������� 1" << endl;
		cin >> bro;		
		int n = 1 + rand() % 6;
		cout << "� ����������  ������: " << n << endl;

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
