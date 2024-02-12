#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    float c;
    cin >> a >> b;
    if (b == 0) {
        cout << "Деление невозможно";
    }
    else {
        c = a / b;
        cout << (c);
    }

}