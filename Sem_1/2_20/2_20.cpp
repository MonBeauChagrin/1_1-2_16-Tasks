#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	float n, a;
	int i = 1;
	float nujnoechislo = 5;
	bool flag = false;
	cin >> n >> nujnoechislo;
	while (i <= n && !flag) {
		a = sin(n + i / n);
		a = round(a * 10) / 10;
		cout << n + i / n << "|" << a << endl;
		if (a == nujnoechislo) {
			flag = true;
		}
		else {
			i++;
		}
	}
	if (flag) {
		cout << "������� ������" << endl;
	}
	else {
		cout << "������� �� ������" << endl;
	}
	return 0;

}