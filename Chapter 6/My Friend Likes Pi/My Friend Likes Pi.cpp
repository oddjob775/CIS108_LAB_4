/*
display radius
	use radius to find circumference
		use radius to find area
*/
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

const double
	π = 3.14159F;

double
	r;



int main()
{
	cout << "What is the desired radius?\t";
	cin >> r;

	double
		circ = π * 2 * r,
		area = π * r * r;

	cout << "Here's the circumference " << circ << " and the area " << area << "." << endl;

	return 0;
}
