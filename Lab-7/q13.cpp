#include<iostream>
#include "q13input.h"
#include "q13output.h"
using namespace std;
// 13. Write q. no 5 in header file and use two header file one for input and other for output used these header files
main(){
    int int1, int2, int3;
    float float1, float2, float3;
    char char1, char2, char3;

    input(int1, int2, int3);
    output(int1, int2, int3);

    input(float1, float2, float3);
    output(float1, float2, float3);

    input(char1, char2, char3);
    output(char1, char2, char3); 
}