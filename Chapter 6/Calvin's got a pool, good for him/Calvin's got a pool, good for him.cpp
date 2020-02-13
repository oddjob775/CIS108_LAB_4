/*

display input for diameter
    use to find radius
        radius = half of diameter

display input for depth
    depth = height

 use inputs to determine volume of pool
    π * r**2 * h = cu. ft.

 convert cu. ft. to cu. in.
    1 cu ft = 1728 cu in
        cu ft * 1728

convert cu in to gallon
    1 gallon = 231 cu in
        cu in / 231

convert gallon to unit
    1 unit = 748 gal
        gal / 748

convert unit to dollars
    1 unit = $1.80
        unit * 1.80

*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using namespace std;


int main()

{
    string
        ok,
        begin,
        name;

    const float π = 3.14159F;
    const double CuFt_CuIn = 1728;
    const double CuIn_Gal = 231;
    const double Gal_Unit = 748;
    const double Unit_$ = 1.80;

    double
        PoolDiameter,
        PoolRadius,
        PoolDepth,
        PoolVolumeCuFt,
        PoolVolumeCuIn,
        PoolGallons,
        PoolUnit,
        PoolFillCost;

    cout << "\nTo whom am I speaking?\t";
        cin >> name;

        cout << "\nHi, " << name << " what is the desired diameter for your pool in feet?\t";
        cin >> PoolDiameter;

        cout << "\n\nI'm going to convert that to radius for you.";
        PoolRadius = PoolDiameter/2;

        cout << "\nThe radius of your pool is\t" << PoolRadius;

        cout << "\n\nWhat's the desired depth for your pool in feet?\t";
        cin >> PoolDepth;

        cout << "\n\nLet me find the volume for you. Please type 'ok.\t";
        PoolVolumeCuFt = (PoolRadius * PoolRadius) * π * PoolDepth;
        cin >> ok;

        cout << "\nOkay, the volume of your pool is " << PoolVolumeCuFt << " cubic feet.";
        cout << "\n\nI'm going to run this info through some conversions.";
        cout << "\nPlease type 'begin' to initialize the conversion process.\t";
        cin >> begin;

        PoolVolumeCuIn = PoolVolumeCuFt * CuFt_CuIn;
        PoolGallons = PoolVolumeCuIn / CuIn_Gal;
        PoolUnit = PoolGallons / Gal_Unit;
        PoolFillCost = PoolUnit * Unit_$;

        cout << "\n\nThe cost to fill your pool with water is $" << PoolFillCost << ".\n\t\tHave a nice day, " << name << "!" << endl;


        return 0;

}