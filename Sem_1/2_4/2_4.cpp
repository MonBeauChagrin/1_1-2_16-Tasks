#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	cout << "Введите натуральное нечётное число n (основание треугольника) большее 3" << endl;
	int n;
	cin >> n;
	int zv = 1;
	int schet;
	while ((n < 4)||((n % 2) == 0)){
		cout << "Число n должно быть больше 3 и нечётным" << endl;
		cin >> n;
	}
	schet = ((n - 1) / 2);
	for (int i = 0; i < (n + 1) / 2; i++) {
		for (int j = 0; j < schet; j++) {
			cout << ' ';
		}
		schet--;
		for (int j = 0; j < zv; j++) {
			cout << '*';
		}
		zv += 2;
		cout << endl;
	}
}