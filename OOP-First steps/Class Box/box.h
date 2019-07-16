#pragma once
#include<iostream>
class box
{
	friend std::ostream& operator<< (std::ostream &out, const box &B);
private:
	int length;
	int height;
	int breadth;
public:
	int getLength();
	int getHeight();
	int getBreadth();
	long long CalculateVolume();
	box(const box &a);
	box(int lenght, int height, int breadth);
	box();
	~box();
	bool operator < (box &B);
	 
	

};

