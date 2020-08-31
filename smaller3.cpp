/*
Author: Maya Lavi
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 1B

This program asks the user to input three integer numbers, and prints out the smallest of the three.
*/

#include <iostream>

int main()
{
	int first, second, third;

	std::cout << "Enter the first number: ";
	std::cin >> first;

	std::cout << "Enter the second number: ";
	std::cin >> second;

	std::cout << "Enter the third number: ";
	std::cin >> third;

	int smallest;
	if (first < second) {
		if (first < third) {
			smallest = first;
		} else {
			smallest = third;
		}
	} else {
		if (second < third) {
			smallest = second;
		} else {
			smallest = third;
		}
	}
	std::cout << "The smaller of the three is " << smallest << std::endl;

	return 0;
}