/* 

Display:

Joists, 2x6's, 2x4's, 4x4's and 4x8 sheet plywood,

Quantities needed,

How much each costs individually,

the total cost for each item

and the overall cost

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::setw;
using std::right;
using std::endl;
using namespace std;



int main ()

{
	string
		print;

	const double joist = 25.00F;
	const double twobysix = 100.00F;
	const double twobyfour = 25.00F;
	const double fourbyfour = 20.00F;
	const double sheetply = 100.00F;

	double
		joist$,
		twobysix$,
		twobyfour$,
		fourbyfour$,
		sheetply$;

	cout << "\nHow much are joists running for these days?\t";
	cin >> joist$;
	cout << "\nAnd how much are 2x6's?\t\t";
	cin >> twobysix$;
	cout << "\nWhat about 2x4's?\t";
	cin >> twobyfour$;
	cout << "\n4x4's?\t";
	cin >> fourbyfour$;
	cout << "\nFinal question, I promise. How much for your 4x8 sheets of plywood?\t";
	cin >> sheetply$;

	cout << "\n\n\nPlease type 'print' to render the Bill of Materials\n";
	cin >> print;

	double
		totaljoists = joist * joist$,
		totaltwobysixs = twobysix * twobysix$,
		totaltwobyfours = twobyfour * twobyfour$,
		totalfourbyfours = fourbyfour * fourbyfour$,
		totalsheetplys = sheetply * sheetply$,
		totalcost = totaljoists + totaltwobysixs + totaltwobyfours + totalfourbyfours + totalsheetplys;



	cout << "**************************************************************************************************\n";
	cout << "*" << setw(60) << "*Bill of Materials*" << setw(38) << "*\n";
	cout << "**************************************************************************************************\n";
	cout << "*\tItem" << setw(28) << " Need " << setw(28) << " Cost per " << setw(25) << " Total Cost\t *";
	cout << "\n**************************************************************************************************\n";
	cout << "*\tJoists" << setw(24) << joist << setw(29) << joist$ << setw(24) << totaljoists << setw (7) << "*";
	cout << "\n**************************************************************************************************";
	cout << "\n*\t 2x6" << setw(25) << twobysix << setw(30) << twobysix$ << setw(21) << totaltwobysixs << setw(10) << "*";
	cout << "\n**************************************************************************************************";
	cout << "\n*\t 2x4" << setw(26) << twobyfour << setw(29) << twobyfour$ << setw(24) << totaltwobyfours << setw(7) << "*";
	cout << "\n**************************************************************************************************";
	cout << "\n*\t 4x4" << setw(26) << fourbyfour << setw(29) << fourbyfour$ << setw(21) << totalfourbyfours << setw(10) << "*";
	cout << "\n**************************************************************************************************";
	cout << "\n*\t 4x8" << setw(24) << sheetply << setw(31) << sheetply$ << setw(21) << totalsheetplys << setw(10) << "*";
	cout << "\n*    Sheet Plywood" << setw(80) << "*";
	cout << "\n**************************************************************************************************";
	cout << "\n*" << setw(83) << "* Total Cost = " << totalcost << setw(8) << "*";
	cout << "\n**************************************************************************************************" << endl;


	return 0;

}