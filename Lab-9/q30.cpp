#include<iostream>
using namespace std;
// 30. Declare and initialize a 3X2 array with some values. Swap the element on first row and second column with the element on third row second column. Display it on screen without using loop
main(){
    int temp;
    int arr[3][2]={
        {2, 3},
        {6, 3},
        {6, 8}
    };
    temp= arr[0][1];
    arr[0][1]=arr[2][1];
    arr[2][1]=temp;
    cout << arr[0][0] << "\t"<< arr[0][1] << endl;
    cout << arr[1][0] << "\t"<< arr[1][1] << endl;
    cout << arr[2][0] << "\t"<< arr[2][1] << endl;


    
}