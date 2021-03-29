#include "date.h"

#include <iostream>

Date::Date() {
	year = 2020;
	month = 12;
	day = -1;
}

Date::Date(int _month, int _day, int _year) {
	day = _day;
	month = _month;
	year = _year;
}

void Date::change_date()	{
	std::cout << "What is the new date? " << std::endl;
	std::cout << "Month: ";
	std::cin >> month;
	std::cout << "Day: ";
	std::cin >> day;
	std::cout << "Year: ";
	std::cin >> year;
}	

void Date::create_new_date() {
	std::cout << "Month : ";
	std::cin >> month;
	std::cout << "Day : ";
	std::cin >> day;
	std::cout << "Year : ";
	std::cin >> year;
}

void Date::print_date() {
	std::cout << month << "/" << day << "/" << year << std::endl;
}

int Date::GetYear() {
	return year;
}

int Date::GetMonth() {
	return month;
}

int Date::GetDay() {
	return day;
}

void Date::SetYear(int y) {
	year = y;
}

void Date::SetMonth(int m) {
	month = m;
}

void Date::SetDay(int d) {
	day = d;
}

// std::ostream& operator<<(std::ostream& os, const Date& date) {
// 	os << date.month << '/' << date.day << '/' << date.year;
// 	return os;
// }