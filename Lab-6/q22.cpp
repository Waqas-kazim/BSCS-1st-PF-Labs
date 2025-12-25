#include<iostream>
using namespace std;
// 15. Write a function multiple with two integer arguments and bool return type. The functions check whether first integer is 
// multiple of second if yes return 1 else return 0. Use this function in main in the if condition 
bool multiple(int a, int b){
    if(a%b==0){
        return 1;
    }else{
        return 0;
    }
}
main(){
    int a = 8;
    int b = 4;
    if(multiple(a, b)){
        cout << "a is multiple of b";
    }else{
        cout << "a is not multiple";
    }
}