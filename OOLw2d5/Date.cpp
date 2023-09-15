#include "Date.h"
#include <iostream>
Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

int Date::GetDay() const {return day;}
int Date::GetMonth() const {return month;}
int Date::GetYear() const {return year;}

void Date::SetDay(int enter) {day = enter;}
void Date::SetMonth(int enter) {month = enter;}
void Date::SetYear(int enter) {year = enter;}

void Date::Print()
{
	std::cout << "Day: " << day << "\tMonth: " << month << "\tYear: " << year << std::endl;
}
