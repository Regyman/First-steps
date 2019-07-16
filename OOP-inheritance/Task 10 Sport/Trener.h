#pragma once
#include "Sport.h"
class Trener :
	public Sport
{
private:
	int experience;
	int NumberOfSportsman;
public:
	int GetExp();
	int GetNumberOfSportsman();
	void SetExp(int experience);
	void SetNumberOfSportsman(int NumberOfSportsman);
	void ShowAllInfoTrener();
	Trener();
	Trener(string type, string name, int age, int experience, int NumberOfSportsman);
	~Trener();
};

