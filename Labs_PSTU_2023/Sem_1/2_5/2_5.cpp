#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	cout << "Введите n - катет треугольника" << endl;
	int n;
	cin >> n;
	int zv = 1;
	int schet;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < (n - i); j++) {
			cout << ' ';
		}
		for (int j = 0; j < zv; j++) {
			cout << '*';
		}
		zv += 1;
		cout << endl;
	}
}