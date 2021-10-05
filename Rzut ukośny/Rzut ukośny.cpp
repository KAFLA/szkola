#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	float a, v, angl, Z;
	const float g = 9.81;

	cout << "Podaj predkosc poczatkowa (V0): "; cin >> v; 
	cout << "Podaj kat alfa: "; cin >> a;

	angl = a * M_PI / 180;

	cout << "sin(" << a << ") = " << sin(angl) << endl;
	cout << M_PI << endl;

	Z = (pow(v, 2) * sin(2 * angl)) / g;

	cout << "Zasieg wynosi: " << Z << endl;


}

