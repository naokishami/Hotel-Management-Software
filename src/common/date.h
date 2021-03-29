#pragma once

#include <iostream>

class Date {
public:
	int year;
	int month;
	int day;

public:
	Date(int _month, int _day, int _year);
	Date();

	void change_date();
	void create_new_date();
	void print_date();

	int GetYear();
	int GetMonth();
	int GetDay();

	void SetYear(int y);
	void SetMonth(int m);
	void SetDay(int d);

	friend std::ostream& operator<<(std::ostream& os, const Date& date);
};