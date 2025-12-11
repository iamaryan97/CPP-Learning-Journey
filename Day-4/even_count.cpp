#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int countEven = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 == 0)
            countEven++;

    cout << countEven;
    return 0;
}
