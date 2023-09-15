#pragma once
class Date
{
	int day;
	int month;
	int year;
public:
	Date();
	Date(int d, int m, int y);
	int GetDay() const;
	int GetMonth() const;
	int GetYear() const;
	void SetDay(int enter);
	void SetMonth(int enter);
	void SetYear(int enter);
	void Print();

	bool operator==(Date d) const;
	bool operator!=(Date d) const;
	bool operator<=(Date d) const;
	bool operator>=(Date d) const;
	bool operator>(Date d) const;
	bool operator<(Date d) const;

	Date& operator++();
	Date& operator--();
	Date operator++(int);
	Date operator--(int);
	
	Date& operator+=(int d);
	Date& operator-=(int d);

	Date operator+(int d);
	Date operator-(int d);
	int operator-(Date d);

};

