#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Right-angled triangle
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= i; j++) 
        cout << "*";
        cout << endl;
    }
    cout << endl;

    // Inverted triangle
    for(int i = n; i >= 1; i--) 
    {
        for(int j = 1; j <= i; j++) 
        cout << "*";
        cout << endl;
    }
    cout << endl;

    // Square
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= n; j++) 
        cout << "*";
        cout << endl;
    }
    return 0;
}
