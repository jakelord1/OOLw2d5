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
	if (m > 12) {
		month = 12;
	}
	else if (m < 0) {
		month = 1;
	}
	else
		month = m;

	if (d > 0) {
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (d > 31)
				day = 31;
			else
				day = d;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (d > 30)
				day = 30;
			else
				day = d;
		}
		else if (month == 2) {
			if (d > 28)
				day = 28;
			else
				day = d;
		}
	}
	else
		day = 1;
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

bool Date::operator==(Date d)const
{
	if (day == d.day && month == d.month && year == d.year) 
		return true;
	else
		return false;
}

bool Date::operator!=(Date d)const
{
	if (day != d.day && month != d.month && year != d.year)
		return true;
	else
		return false;
}

bool Date::operator<=(Date d)const
{
	if (year > d.year) {
		if (month > d.month)
		{
			if (day > d.day) 
				return false;
			else
				return true;
		}
		else
			return true;
	}
	else
		return true;
}
bool Date::operator>=(Date d)const
{
	if (year < d.year) {
		if (month < d.month)
		{
			if (day < d.day)
				return false;
			else
				return true;
		}
		else
			return true;
	}
	else
		return true;
}

bool Date::operator>(Date d)const
{
	if (year <= d.year) {
		if (month <= d.month)
		{
			if (day <= d.day)
				return false;
			else
				return true;
		}
		else
			return true;
	}
	else
		return true;
}
bool Date::operator<(Date d)const
{
	if (year >= d.year) {
		if (month >= d.month)
		{
			if (day >= d.day)
				return false;
			else
				return true;
		}
		else
			return true;
	}
	else
		return true;
}

Date& Date::operator++()
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		if (day == 31);
		else
			day++;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day == 30);
		else
			day++;
	}
	else if (month == 2) {
		if (day == 28);
		else
			day++;
	}
	return *this;
}

Date Date::operator++(int)
{
	Date temp(day, month, year);
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (day == 31);
			else
				day++;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (day == 30);
			else
				day++;
		}
		else if (month == 2) {
			if (day == 28);
			else
				day++;
		}
	return temp;
}
Date& Date::operator--()
{
	if (day == 1);
	else
		day--;
	return *this;
}

Date Date::operator--(int)
{
	Date temp(day, month, year);
	if (day == 1);
	else
		day--;
	return temp;
}

Date& Date::operator+=(int d)
{
	while (d > 0) {
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (day != 31) {
				day++;
				d--;
			}
			else
			{
				day = 1;
				d--;
				if (month != 12) {
					month++;
				}
				else {
					year++;
					month = 1;
				}
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (day != 30) {
				day++;
				d--;
			}
			else
			{
				day = 1;
				d--;
				month++;
			}
		}
		else if (month == 2) {
			if (day != 28) {
				day++;
				d--;
			}
			else
			{
				day = 1;
				d--;
				month++;
			}
		}
	}
	return *this;
}
Date& Date::operator-=(int d)
{
	while (d > 0) {
		if (day != 1) {
			d--;
			day--;
		}
		else {
			month--;
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				day = 31;
				d--;
				if (month == 1) {
					year--;
					month = 12;
				}
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11) {
				day = 30;
				d--;
			}
			else if (month == 2) {		
				day = 28;
				d--;
			}
		}
	}
	return *this;
}

Date Date::operator+(int d)
{
	Date temp(this->day, this->month, this->year);
	while (d > 0) {
		if (temp.month == 1 || temp.month == 3 || temp.month == 5 || temp.month == 7 || temp.month == 8 || temp.month == 10 || temp.month == 12) {
			if (temp.day != 31) {
				temp.day++;
				d--;
			}
			else
			{
				temp.day = 1;
				d--;
				if (temp.month != 12) {
					temp.month++;
				}
				else {
					temp.year++;
					temp.month = 1;
				}
			}
		}
		else if (temp.month == 4 || temp.month == 6 || temp.month == 9 || temp.month == 11) {
			if (temp.day != 30) {
				temp.day++;
				d--;
			}
			else
			{
				temp.day = 1;
				d--;
				temp.month++;
			}
		}
		else if (temp.month == 2) {
			if (temp.day != 28) {
				temp.day++;
				d--;
			}
			else
			{
				temp.day = 1;
				d--;
				temp.month++;
			}
		}
	}
	return temp;
}

Date Date::operator-(int d)
{
	Date temp(this->day, this->month, this->year);
	while (d > 0) {
		if (temp.day != 1) {
			d--;
			temp.day--;
		}
		else {
			temp.month--;
			if (temp.month == 1 || temp.month == 3 || temp.month == 5 || temp.month == 7 || temp.month == 8 || temp.month == 10 || temp.month == 12) {
				temp.day = 31;
				d--;
				if (temp.month == 1) {
					temp.year--;
					temp.month = 12;
				}
			}
			else if (temp.month == 4 || temp.month == 6 || temp.month == 9 || temp.month == 11) {
				temp.day = 30;
				d--;
			}
			else if (temp.month == 2) {
				temp.day = 28;
				d--;
			}
		}
	}
	return temp;
}

int Date::operator-(Date d)
{
	Date temp(day, month, year);
	int count = 0;
	while (temp.day != d.day && temp.month != d.month && temp.year != d.year) {
		if (temp.day != 1) {
			count++;
			temp.day--;
		}
		else {
			temp.month--;
			if (temp.month == 1 || temp.month == 3 || temp.month == 5 || temp.month == 7 || temp.month == 8 || temp.month == 10 || temp.month == 12) {
				temp.day = 31;
				count++;
				if (temp.month == 1) {
					temp.year--;
					temp.month = 12;
				}
			}
			else if (temp.month == 4 || temp.month == 6 || temp.month == 9 || temp.month == 11) {
				temp.day = 30;
				count++;;
			}
			else if (temp.month == 2) {
				temp.day = 28;
				count++;
			}
		}
	}
	return count;
}
