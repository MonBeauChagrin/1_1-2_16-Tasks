#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	int sum = 0;
	int* ptr1;
	int* ptr2;
	cin >> a >> b;
	ptr1 = &a;
	ptr2 = &b;
	sum = *ptr1 + *ptr2;
	cout << sum;
	return 0;
}