#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n, a, znak;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a < 0) {
			cout << "������������� ����� ���� ������";
			break;
		}
		if (a > 0) {
			cout << "������������� ����� ���� ������";
			break;
		}
	}
}