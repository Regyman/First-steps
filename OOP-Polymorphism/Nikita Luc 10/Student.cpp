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
	return Man::showGeneralInformation() + "  Курс- " + to_string(Course) + "  Количество Долгов- " + to_string(debts) + "  Средняя оценка- " + to_string(mark);
}


Student::Student()
{

}


Student::~Student()
{

}
