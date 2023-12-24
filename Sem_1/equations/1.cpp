#include <iostream>
#include <cmath>
//3x - 4lnx - 5 = 0
//[2;4]
//f'(x) = 3 - 4/x
//f"(x) = 4/x^2
//f(b) * f"(b) > 0
//r = max(|f'(a)|,|f'(b)|)
//r = max(|3-4/2|,|3-4/4|) = max(1,2) = 2
//f'(x) > 0 => -1/r < lambda < 0
//lambda = -1/10 = -0.1
using namespace std;
void binary() {
	float a, b, c;
	float fA, fB, fC;
	double eps = 0.001;
	a = 2;
	b = 4;
	while (b - a > eps) {
		c = (a + b) / 2;
		fA = (3 * a - 4 * log(a) - 5);
		fB = (3 * b - 4 * log(b) - 5);
		fC = (3 * c - 4 * log(c) - 5);
		if (fA * fC < 0) {
			b = c;
		}
		else if (fC * fB < 0) {
			a = c;
		}
		else {
			cout << "Ошибка";
		}
	}
	cout << "Корень по методу деления: " << (a + b) / 2 << endl;
}
void tangentmethod() {
	float x, xPrev;
	x = 4;
	xPrev = 1;
	double eps = 0.001;
	while (abs(x - xPrev) > eps) {
		xPrev = x;
		x = xPrev - (3 * xPrev - 4 * log(xPrev) - 5) / (4 / xPrev * xPrev);
	}
	cout << "Корень по методу касательной: " << x << endl;
}
void iterations() {
	float x, xPrev;
	double lambda = -0.1;
	x = 4;
	xPrev = 1;
	double eps = 0.001;
	while (abs(x - xPrev) > eps) {
		xPrev = x;
		x = lambda * (3 * xPrev - 4 * log(xPrev) - 5) + xPrev;
	}
	cout << "Корень по методу итераций: " << x << endl;
}
int main() {
	setlocale(LC_ALL, "Russian");
	binary();
	metodkasat();
	iteracii();
	return 0;
}