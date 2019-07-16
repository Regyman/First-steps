#pragma once
#include "Sport.h"
class Sportsman :
	public Sport
{
private:
	int NumberOfPrizes;
public:
	void SetNumber(int NumberOfPrizes);
	void ShowAllInfoSpotsman();
	int GetPrizes();
	Sportsman(string type, string name, int age, int NumberOfPrizes);
	Sportsman();
	~Sportsman();
};

