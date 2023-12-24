#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, tem;
	int* ptr1;
	int* ptr2;
	cin >> a;
	cin >> b;
	ptr1 = &a;
	tem = *ptr1;
	ptr2 = &b;
	*ptr1 = *ptr2;
	*ptr2 = tem;
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
}