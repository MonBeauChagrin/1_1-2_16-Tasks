#include <iostream>
using namespace std;
void Chess_order(int n, int massiv[50][50]) {
	int k = 1;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j += 2) {
				if (k == 10) {
					k = 1;
				}
				massiv[i][j] = k;
				k += 1;
			}
		}
		else {
			for (int j = 1; j < n; j += 2) {
				if (k == 10) {
					k = 1;
				}
				massiv[i][j] = k;
				k += 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << massiv[i][j] << ' ';
		}
		cout << endl;
	}

}
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	int massiv[50][50];
	cout << "¬ведите размерность двумерного массива" << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			massiv[i][j] = 0;
			cout << massiv[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	Chess_order(n, massiv);
	return 0;
}
/*
¬ведите размерность двумерного массива
5
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

1 0 2 0 3
0 4 0 5 0
6 0 7 0 8
0 9 0 1 0
2 0 3 0 4
*/