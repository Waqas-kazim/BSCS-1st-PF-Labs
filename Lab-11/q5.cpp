#include<iostream>
using namespace std;
// 5.	Use a double pointer for single pointer to an integer location. Assign 10 to this location, add 50 to the value of this location and display it using double pointer. 
int main(){
    int num = 10;
    int * ptr1;
    int ** ptr2;
    ptr1 = &num;
    ptr2 = &ptr1;
    num += 50;
    cout << **ptr2;
    return 0;
}