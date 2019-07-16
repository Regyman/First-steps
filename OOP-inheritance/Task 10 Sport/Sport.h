#pragma once
#include<iostream>
using namespace std;
class Sport
{
protected:
	string type;
	string name;
	int age;
	 
public:
	void SetName(string name);
	void SetType(string type);
	void SetAge(int age);
	void ShowAllInfoGeneral();
	int GetAge();
	string GetName();
	string GetType();
	Sport(string type, string name, int age);
	Sport();
	~Sport();
	
};

