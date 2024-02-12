#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int a;
    int n;
    int suma = 0;
    cin >> n;
    if (n <= 0) {
        cout << "Невозможно посчитать сумму натуральных чисел при n <= 0" << endl;
    }
    else {
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            suma += a;
        }
    }
    cout << suma;
}