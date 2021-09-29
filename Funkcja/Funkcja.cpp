#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	float a, b, c, delta, x1, x2, wynik;

	cout << "podaj a: "; cin >> a;
	cout << "podaj b: "; cin >> b;
	cout << "podaj c: "; cin >> c;

	delta = pow(b, 2) - 4 * a * c;

	cout << "delta to: " << delta << endl;
	
	if (delta > 0) {
		cout << "delta dodatnia" << endl;
		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);

		cout << "X1:" << x1 << endl;
		cout << "X2: " << x2 << endl;
	}
	else {
		if (delta == 0)
		{
			cout << "delta jest zerowa" << endl;
			x1 = x2 = (-b) / (2 * a);
			cout << "X1 i X2: " << x1;
		}
		else
		{
			cout << "delta jest ujemna" << endl;

		}
	}

}

