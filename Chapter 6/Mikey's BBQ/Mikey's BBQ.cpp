/*
Determine size of grill
	Grill surface area is 18"w * 18"d

Determine how many burgers can fit onto grill?
	diameter of x"
		must be kept 1/2" apart
			
			

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;


int main()
{

	int
		BurgerDiameter,
		GrillDepth,
		GrillWidth;

	double
		BurgersWidth,
		BurgersDepth,
		Burgers,
		Grill;


	cout << "\nHow wide is your grill in inches?\t";
	cin >> GrillWidth;

	cout << "\n\nHow deep is the grill in inches?\t";
	cin >> GrillDepth;

	Grill = GrillDepth * GrillWidth;

	cout << "\nThe surface are of your grill is " << Grill << " inches.\n";

	cout << "\nWhat is the diameter of the burger patties you are using?\t";
	cin >> BurgerDiameter;

	BurgersWidth = GrillWidth % BurgerDiameter;
	BurgersDepth = GrillDepth % BurgerDiameter;

	Burgers = BurgersDepth * BurgersWidth;

	cout << "\n\nYou can fit " << Burgers << " burgers on your grill." << endl;

	return 0;

}

