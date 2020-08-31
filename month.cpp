/*
Author: Maya Lavi
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 1D

This program asks the user to input the year and the month (1-12) and prints the number of days in that month.
*/

#include <iostream>

int leap_year_func(int year)
{
	bool leap_year;
	
	if ((year % 4) == 0) {
		if ((year % 100) == 0) {
			if ((year % 400) == 0) {
				leap_year = true;
			} else {
				leap_year = false;
			}
		} else {
			leap_year = true;
		}
	} else {
		leap_year = false;
	}

	return leap_year;
}

int main()
{
	int year, month;

	std::cout << "Enter year: ";
	std::cin >> year;

	std::cout << "Enter month: ";
	std::cin >> month;

	bool leap_year = leap_year_func(year);
	int days;

	if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
		days = 30;
	} else if (month == 2) {
		if (leap_year) {
			days = 29;
		} else {
			days = 28;
		}
	} else {
		days = 31;
	}

	std::cout << days << " days" << std::endl;

	return 0;	
}