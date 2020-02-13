/*

Find monthly payments for Jeep
	Determine PRINCIPAL
		Determine INTEREST RATE
			Use constant of $1000 as DOWN PAYMENT

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;


int main()
{


	double
		YEARS,
		JEEP,
		DOWNP;

	cout << "\nHow much is the vehicle?\t";
	cin >> JEEP;

	cout << "\nHow much will you be paying down?\t";
	cin >> DOWNP;

	const int
		PRNC = JEEP - DOWNP;

	cout << "\nFor how many years will you need a loan?\t";
	cin >> YEARS;

	double
		MONTHS = YEARS * 12,
		ARATE = (YEARS * 1.5) / 1.25;

	cout << "\n\nYour Annual Interest Rate will be " << ARATE << "%.";

	double
		IRATE = (ARATE / 12),
		MONTHNUM = PRNC * IRATE;

	const float
		POW = (1 + IRATE, MONTHS),
		MONTHLY = (MONTHNUM) / (POW);

	cout << "\n\nYour payments will be $" << MONTHLY << " a month for the next " << YEARS << " years." << endl;


	return 0;

}
