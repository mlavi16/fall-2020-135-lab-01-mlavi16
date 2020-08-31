/*
Author: Maya Lavi
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 1C

This program asks the user to input an integer representing a year number, 
and prints whether or not it is a Leap Year according to the modern Gregorian calendar.
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
	int year;
	
	std::cout << "Enter year: ";
	std::cin >> year;
	bool leap_year = leap_year_func(year);
	if (leap_year) {
		std::cout << "Leap year" << std::endl;
	} else {
		std::cout << "Common year" << std::endl;
	}
}

