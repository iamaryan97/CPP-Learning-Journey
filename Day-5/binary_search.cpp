
#include <iostream>
using namespace std;
int main() 
{
    int a[6]= {1, 2, 3, 4, 5, 6};
    int key, flag = 0;
    int low = 0, high = 5, mid;

    cout<<"Enter key:";
    cin>>key;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            flag = 1;
            break;
        } else if (key < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (flag == 1) {
        cout<<"Search is successful at position: %d\n"<<mid + 1;
    } else {
        cout<<"Search is unsuccessful\n";
    }

    return 0;
}

