#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int CouGl = 0;
	int CouSo = 0;
	string st;
	cin >> st;
	const char* pt = st.c_str();
	for (int i = 0; i < st.length(); i++) {
		char tmp = tolower(*pt);
		cout << tmp;
		if (tmp == L'a' || tmp == L'�' || tmp == L'�' || tmp == L'�' || tmp == L'�' || tmp == L'�' || tmp == L'�' || tmp == L'�') {
			CouGl++;
		}
		else {
			CouSo++;
		}
		pt++;
	}
	cout << "������� " << CouGl;
	cout << "��������� " << CouSo;
	return 0;
}