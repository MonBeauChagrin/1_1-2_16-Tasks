#include <iostream>
using namespace std;
int main() {
    int a;
    int n;
    int suma = 1;
    cin >> n;
    for (int i{ 1 }; i <= n; i++)
    {
        cin >> a;
        suma = suma * a;
    }
    cout << suma;
}