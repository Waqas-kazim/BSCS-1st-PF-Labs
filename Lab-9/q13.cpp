#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int key1, key2;
    bool found1 = false, found2 = false;
    cout << "Original array: ";
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }

    cout << "Enter first key: ";
    cin >> key1;
    cout << "Enter second key : ";
    cin >> key2;

    for(int i = 0; i < 10; i++) {
        if(arr[i] == key1) found1 = true;
        if(arr[i] == key2) found2 = true;
    }

    if(found1) cout << "Key 1 Found." << endl;
    else cout << "Key 1 Not Found." << endl;

    if(found2) cout << "Key 2 Found." << endl;
    else cout << "Key 2 Not Found." << endl;

    return 0;
}