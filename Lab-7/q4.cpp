#include<iostream>
using namespace std;
// 4. Write two functions which the name largest, which takes three arguments and print largest. One function receives all 
// integer argument and the other receives all float arguments. Call both function in main 
void largest(int a, int b, int c){
    if(a >= b && a >= c)
        cout << "Largest integer: " << a << endl;
    else if(b >= a && b >= c)
        cout << "Largest integer: " << b << endl;
    else
        cout << "Largest integer: " << c << endl;
}
void largest(float a, float b, float c){
    if(a >= b && a >= c)
        cout << "Largest float: " << a << endl;
    else if(b >= a && b >= c)
        cout << "Largest float: " << b << endl;
    else
        cout << "Largest float: " << c << endl;
}
main(){
    int int1 = 12, int2 = 25, int3 = 7;
    float float1 = 12.5, float2 = 25.3, float3 = 7.8;

    largest(int1, int2, int3);
    largest(float1, float2, float3);
    
}