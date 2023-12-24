#include <iostream>
using namespace std;
int main() {
	long int n, b;
	cin >> n;
	while (n > 0) {
		b = n % 10;
		n = n / 10;
		cout << b;
	}
	return 0;
}