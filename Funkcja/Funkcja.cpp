#include <cmath>
#include <iostream>

using namespace std;

float delta(float a, float b, float c) {
	return b * b - 4 * a * c;
}

float x1 (float a, float b, float delta){
	return (-b - sqrt(delta)) / (2 * a);
}

float x2 (float a, float b, float delta){
	return (-b + sqrt(delta)) / (2 * a);
}

int main()
{
	float a, b, c, d;

	cin >> a >> b >> c;

	d = delta(a, b, c);
	cout << d << endl;

	if (d > 0)
	{
		cout << x1(a, b, d) << endl;
		cout << x2(a, b, d) << endl;
	}

	else {
		if (d == 0) {
			cout << x1(a, b, d) << endl;
		}
		else
		{
			cout << "delta jest ujemna" << endl;
		}
	}


	return 0;
}

