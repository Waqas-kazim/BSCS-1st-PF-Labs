#include<iostream>
using namespace std;
// 6.  Overload Swap function for floats and characters 
void swap(float &a, float &b){
    float temp = a;
    a = b;
    b = temp;
}
void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}
main(){
    float float1 = 5.5, float2 = 10.5;
    char char1 = 'A', char2 = 'B';

    cout << "Before swapping floats: " << float1 << ", " << float2 << endl;
    swap(float1, float2);
    cout << "After swapping floats: " << float1 << ", " << float2 << endl;

    cout << "Before swapping characters: " << char1 << ", " << char2 << endl;
    swap(char1, char2);
    cout << "After swapping characters: " << char1 << ", " << char2 << endl;
    
}