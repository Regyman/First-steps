#include "Student.h"
#include<iomanip>
#include<sstream>

int Student::GetMark()
{
	return mark;
}

void Student::Setmark(int n)
{
	mark = n;
}

void Student::SetCourse(int b)
{
	Course = b;
}

int Student::GetCourse()
{
	return Course;
}

int Student::GetDebts()
{
	return debts;
}

void Student::SetDebts(int c)
{
	debts = c;
}

string Student::showGeneralInformation()
{
	return Man::showGeneralInformation() + "  ����- " + to_string(Course) + "  ���������� ������- " + to_string(debts) + "  ������� ������- " + to_string(mark);
}


Student::Student()
{

}


Student::~Student()
{

}
