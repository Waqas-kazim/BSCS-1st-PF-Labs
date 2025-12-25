#include<iostream>
using namespace std;
// 29. Declare and initialize a 3X5 array with some values. Display it on screen without using loop

main(){
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    
    cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << " " << arr[0][3] << " " << arr[0][4] << endl;
    cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << " " << arr[1][3] << " " << arr[1][4] << endl;
    cout << arr[2][0] << " " << arr[2][1] << " " << arr[2][2] << " " << arr[2][3] << " " << arr[2][4] << endl;
    
    return 0;
}