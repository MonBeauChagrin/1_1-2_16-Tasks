#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	float sum, x, znamenatel;
	cin >> n >> x;
	sum = 1;
	znamenatel = 1;
	for (int i = 1; i < n; i++) {
		znamenatel *= i;
		sum += (pow(x, i) / znamenatel);
	}
	cout << sum;
	return 0;
}