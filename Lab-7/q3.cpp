#include<iostream>
using namespace std;
// 3. Implement five functions with name add which return addition. First receive 2 integer arguments, second receive 2 float 
// arguments, third take 3 integer arguments and fourth takes 3 float arguments. 
int add(int a, int b){
    return a + b;
}
float add(float a, float b){
    return a + b;
}
int add(int a, int b, int c){
    return a + b + c;
}
float add(float a, float b, float c){
    return a + b + c;
}
main(){
    int int1 = 5, int2 = 10, int3 = 15;
    float float1 = 5.5, float2 = 10.5, float3 = 15.5;

    cout << "Addition of two integers: " << add(int1, int2) << endl;
    cout << "Addition of two floats: " << add(float1, float2) << endl;
    cout << "Addition of three integers: " << add(int1, int2, int3) << endl;
    cout << "Addition of three floats: " << add(float1, float2, float3) << endl;
    
}