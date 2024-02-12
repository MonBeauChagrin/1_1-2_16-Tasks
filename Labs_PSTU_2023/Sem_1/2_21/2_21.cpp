#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n, k;
	bool poryadok = true;
	cin >> n;
	while (n != 0) {
		k = n;
		cin >> n;
		if ((k > n) && (n != 0)) {
			poryadok = false;
		}
	}
	if (poryadok == true) {
		cout << "Порядок верный";
	}
	else {
		cout << "Порядок неверный";
	}
	return 0;
}