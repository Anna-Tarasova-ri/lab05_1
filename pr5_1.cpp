// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double g(const double a, const double b, const double c); // прототип
int main()
{
	double x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	double g2 = g(1, x, y) * g(1, x, y); // g^2(1, x, y)
	double r = (g(x * y, x * x, y * y) - g2) / (1 + g(sqrt(x), y * y, 1));
	cout << "r = " << r << endl;
	return 0;
}

double g(const double a, const double b, const double c) // визначення
{
	return a * a + b * b - c * c;
}