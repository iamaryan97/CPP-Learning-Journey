#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, maxVal;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        if(i == 0 || arr[i] > maxVal)
            maxVal = arr[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Max: " << maxVal << endl;

    return 0;
}
