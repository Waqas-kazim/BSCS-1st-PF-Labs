#include<iostream>
using namespace std;
// 7. Write a template function, which takes 5 arguments and print their average. Use this function in main.
template <typename T>
T avg(T a, T b, T c, T d, T e){
    return (a + b + c + d + e) / 5;
}
main(){
    int int1 = 10, int2 = 20, int3 = 30, int4 = 40, int5 = 50;
    float float1 = 10.5, float2 = 20.5, float3 = 30.5, float4 = 40.5, float5 = 50.5;

    cout << "Average of integers: " << avg(int1, int2, int3, int4, int5) << endl;
    cout << "Average of floats: " << avg(float1, float2, float3, float4, float5) << endl;
    
}