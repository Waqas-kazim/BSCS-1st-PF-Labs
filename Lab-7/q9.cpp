#include<iostream>
using namespace std;
// 9. Write a template function, which takes three arguments and return the smallest. Use it in main in all possible ways. 
template <typename T>
T smallest(T a, T b, T c){
    T small = a;
    if(b < small){
        small = b;
    }
    if(c < small){
        small = c;
    }
    return small;
}
main(){
    int int1 = 10, int2 = 5, int3 = 15;
    float float1 = 10.5, float2 = 5.5, float3 = 15.5;
    char char1 = 'z', char2 = 'a', char3 = 'm';

    cout << "Smallest of integers: " << smallest(int1, int2, int3) << endl;
    cout << "Smallest of floats: " << smallest(float1, float2, float3) << endl;
    cout << "Smallest of characters: " << smallest(char1, char2, char3) << endl;
    
}