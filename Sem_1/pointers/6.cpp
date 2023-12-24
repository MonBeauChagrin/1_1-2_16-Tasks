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
		if (tmp == L'a' || tmp == L'е' || tmp == L'и' || tmp == L'о' || tmp == L'у' || tmp == L'э' || tmp == L'ю' || tmp == L'€') {
			CouGl++;
		}
		else {
			CouSo++;
		}
		pt++;
	}
	cout << "√ласных " << CouGl;
	cout << "—огласных " << CouSo;
	return 0;
}