/*
CSC-120- Intro to Comp Sci/OOP
Project Name: BuyingInBulk
Student: Weiquan Mai
Date: October 5, 2024
Description: This program calculates final price of a transaction after accounting for bulk buying discount.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	double purchase; // To hold number of packages bought
	double totalCost; // To hold total cost

	//Constants for package and discounts
	const double package = 99.00,
		Discount20 = 0.2,
		Discount30 = 0.3,
		Discount40 = 0.4,
		Discount50 = 0.5;

	//Display information and ask for input
		cout << "One package costs $99, and discounts are given when buying in bulk.\n"
			<< "How many packages would you like to buy?\n";
		cin >> purchase;

	//Set the numeric output formatting
		cout << fixed << showpoint << setprecision(2);

	//Calculate cost and display cost
		if (purchase >= 100)// purchase of 100 packages or more
		{
			totalCost = (purchase * package) - (purchase * package * Discount50);
			cout << "Thank you for your purchase! Your total cost is $" << totalCost << endl;
		}
		else if (purchase >= 50)// purchase of 50 packages to 99 packages
		{
			totalCost = (purchase * package) - (purchase * package * Discount40);
			cout << "Thank you for your purchase! Your total cost is $" << totalCost << endl;
		}
		else if (purchase >= 20)// purchase of 20 packages to 49 packages
		{
			totalCost = (purchase * package) - (purchase * package * Discount30);
			cout << "Thank you for your purchase! Your total cost is $" << totalCost << endl;
		}
		else if (purchase >= 10)// Purchase of 10 packages to 19 packages
		{
			totalCost = (purchase * package) - (purchase * package * Discount20);
			cout << "Thank you for your purchase! Your total cost is $" << totalCost << endl;
		}
		else if (purchase > 0)// Purchase of 1 packages to 9 packages
		{
			totalCost = (purchase * package);
			cout << "Thank you for your purchase! Your total cost is $" << totalCost << endl;
		}
		else 
		{
			cout << "That is not valid. Please input a number greater than 0";
		}

	return 0;
}
