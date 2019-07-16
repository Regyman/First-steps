#include "Employee.h"
#include<sstream>
#include<iomanip>
using namespace std;

int Employee::GetViolations()
{
	return violations;
}

void Employee::SetViolatoins(int n)
{
	violations = n;
}

long int Employee::GetSalary()
{
	return salary;
}

void Employee::SetSalary(int n)
{
	salary = n;
}

void Employee::SetPosition( const char pos[])
{
	strcpy_s(position, pos);
}

char* Employee::GetPosition()
{
	return position;
}

string Employee::showGeneralInformation()
{
	return Man::showGeneralInformation() + " Занимаемая должность- " + position + "  Зарплата- " + to_string(salary) + "руб" + "  Количество нарушений- " + to_string(violations);
}

Employee::Employee()
{

}


Employee::~Employee()
{
}
