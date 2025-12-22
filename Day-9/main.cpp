#include <iostream>
using namespace std;

int main() {
    int a, b, choice;
    cin >> a >> b;

    cout << "1.Add 2.Sub 3.Mul 4.Div" << endl;
    cin >> choice;

    switch(choice) {
        case 1: cout << a + b; break;
        case 2: cout << a - b; break;
        case 3: cout << a * b; break;
        case 4: cout << (float)a / b; break;
        default: cout << "Invalid";
    }

    return 0;
}
