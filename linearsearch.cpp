#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    // Linear Search
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Element not found!" << endl;
    }

    return 0;
}
