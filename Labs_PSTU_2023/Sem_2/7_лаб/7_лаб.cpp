#include <iostream>
#include <cstring>
using namespace std;
void numbertranslation(char S[50], long int desdrob, int linelen) {
	long long int chislit = 0;
	int entovoe;
	int nullcounter = 0;
	for (int i = 0; i < desdrob; i++) {
		if (S[i] == '0') {
			nullcounter += 1;
		}
		entovoe = S[i] - '0';
		chislit += entovoe * pow(10, linelen - 2 - i);
	}
	for (int i = desdrob + 1; i < linelen; i++) {
		if (S[i] == '0') {
			nullcounter += 1;
		}
		entovoe = S[i] - '0';
		chislit += entovoe * pow(10, linelen - i - 1);
	}
	if (nullcounter > 0) {
		chislit = chislit / pow(10, nullcounter);
	}
	cout << chislit;
	cout << '/';
	cout << '1';
	for (int i = 0; i < linelen - desdrob - 1 - nullcounter; i++) {
		cout << '0';
	}
}
void numbertranslation(char S[], int obdrob, int linelen) {
	long int chislit = 0;
	long int znamen = 0;
	int a;
	for (int i = 0; i < obdrob; i++) {
		a = S[i] - '0';
		chislit += a * pow(10, linelen - (linelen - obdrob) - 1 - i);
	}
	for (int i = obdrob + 1; i < linelen; i++) {
		a = S[i] - '0';
		znamen += a * pow(10, linelen - i - 1);
	}
	chislit = chislit * 10000000;
	float otvet = chislit / znamen;
	otvet = otvet / 10000000;
	cout << (otvet);
}
int main() {
	char S[50];
	long int desdrob;
	int obdrob;
	cin.getline(S, 50);
	int linelen = strlen(S);
	for (int i = 0; i < 50; i++) {
		if (S[i] == '/') {
			obdrob = i;
			numbertranslation(S, obdrob, linelen);
		}
		if (S[i] == '.' || S[i] == ',') {
			desdrob = i;
			numbertranslation(S, desdrob, linelen);
		}
	}
	return 0;
}