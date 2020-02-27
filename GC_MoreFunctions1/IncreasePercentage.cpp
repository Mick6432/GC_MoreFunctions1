#include <iostream>
#include "Functions.h"

void increasePercentage(double& value, int& rentYear, int percent)
{
	//Lot Rent for 2018 to 2027

	cout.precision(5);
	cout << showpoint;
	if (rentYear == 2018)
		cout << "Monthly Lot Rent-> $" << value << "\t" << rentYear << endl;

	value -= 2.5;
	value += value * percent / 100;
	value += 2.5;
	cout << "Monthly Lot Rent-> $" << value << "\t" << ++rentYear << endl;
}