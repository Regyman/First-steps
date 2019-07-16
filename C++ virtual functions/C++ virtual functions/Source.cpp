#include<iostream>
#include<conio.h>
#include"Figure.h"
#include"Circus.h"
#include"Rectangle.h"

using namespace std;

int main() 
{
	Circus x(5);
	Rectangle y(11, 2);

	cout << "Rectangle square: " << y.getSquare() << endl;
	cout << "Circle square: " << x.getSquare() << endl;
	_getch();
	return 0;
}