/*
Author: Maya Lavi
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 1A

This program asks the user to input two integer numbers and prints out the smaller of the two.
*/
#include <iostream>

int main()
{
	int first, second;

	std::cout << "Enter the first number: ";
	std::cin >> first;
	std::cout << "Enter the second number: ";
	std::cin >> second;

	int smaller;
	if (first < second)
	{
		smaller = first;
	} else
	{
		smaller = second;
	}
	std::cout << "The smaller of the two is " << smaller << std::endl;
	return 0;
}