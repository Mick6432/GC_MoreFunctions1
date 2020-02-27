//
//

#include <iostream>
#include <string>
#include "Functions.h"
using namespace std;

int main()
{
	double savings_balance = 545.00;
	int year = 2018;
	string myString = "I wouldn't want to be looking at it than looking for it.";

	cout << endl << "\t\tOverloaded Functions Example" << endl;
	cout << "\t\t\tAverage of 3 and 6 is ---------> " << average(3, 6) << endl;
	cout << "\t\t\tAverage of 3, 6, and 9 is -----> " << average(3, 6, 9) << endl;
	cout << "\t\t\tAverage of 3, 6, 9, and 12 is -> " << average(3, 6, 9, 12) << "\n\n";

	printMultiple("Hello, World!!!", 4);
	printMultiple("Hi Back!!");

	cout << "\n";

	printHeader();
	for (int i = 1; i <= 9; i++)
	{
		increasePercentage(savings_balance, year, 4);
	}
	
	cout << "\n\nOriginal String = " << myString << endl;
	replace_string(myString, "wouldn't want to", "would rather");
	cout << "New String = " << myString;

	cout << "\n\n";
	system("pause");
}