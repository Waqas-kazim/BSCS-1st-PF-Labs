#include<iostream>
using namespace std;

int main() {
    char arr[10];
    for(int i = 0; i < 10; i++) {
        cout << "enter characters: " << i+1;
        cin>>arr[i];
    }
    // for(int i = 0; i < 10; i++) {
        cout << arr;
    // }
    return 0;
}