#include<iostream>
using namespace std;
void tabliza(int kolvo_strok, int kolvo_ryadov, int array[50][50]) {
	bool flag = false;
	int suma1 = 0;
	int suma2 = 0;
	for (int i = 1; i < kolvo_ryadov - 1; i++) {
		suma1 = 0;
		suma2 = 0;
		for (int masr1 = 0; masr1 < i; masr1++) {
			for (int mass1 = 0; mass1 < kolvo_strok; mass1++) {
				suma1 = suma1 + array[mass1][masr1];
			}
		}
		for (int masr2 = i + 1; masr2 < kolvo_ryadov; masr2++) {
			for (int mass2 = 0; mass2 < kolvo_strok; mass2++) {
				suma2 = suma2 + array[mass2][masr2];
			}
		}
		cout << endl << i << '.' << " Array sum on left = " << suma1 << " Array sum on the right = " << suma2;
		if (suma1 > suma2) {
			cout << endl << "The required column is there, its number " << i;
		}
	}
	if (flag == false) {
		cout << endl << "The required column is missing ";
	}
}
int main() {
	srand(time(NULL));
	int kolvo_strok, kolvo_ryadov;
	cout << "Enter the number of rows in the array and then the number of rows (greater than 2) " << endl;
	cin >> kolvo_strok >> kolvo_ryadov;
	int array[50][50];
	int range_max = 9;
	int range_min = 0;

	for (int i = 0; i < kolvo_strok; i++) {
		for (int j = 0; j < kolvo_ryadov; j++) {
			array[i][j] = rand() % (range_max - range_min + 1) + range_min;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	tabliza(kolvo_strok, kolvo_ryadov, array);
	return  0;
}
/*
Enter the number of rows in the array
3
Enter the number of columns in the array
10
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0

1 0 2 0 3 0 4 0 5 0
0 6 0 7 0 8 0 9 0 1
2 0 3 0 4 0 5 0 6 0
*/