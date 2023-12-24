#include <iostream>
using namespace std;
int main() {
    int n;
    int suma = 0;
    int umn;
    int schetchik;
    int opredchisla;
    cin >> n;
    for (int i{ 1 }; i <= n; i++){
        opredchisla = i;
        umn = i;
        while (opredchisla != 0) {
            schetchik = i + opredchisla;
            opredchisla = opredchisla--;
            umn = umn * schetchik;
        }
        suma = suma + umn;
    }
    cout << suma;
}