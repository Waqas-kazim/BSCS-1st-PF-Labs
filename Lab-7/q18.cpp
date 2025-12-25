#include<iostream> 
#include<cstdlib> 
#include<ctime> 
using namespace std; 
    int main(){ 
    srand(time(NULL)); 
    int randvalue=1+rand()%6; 
    cout<<randvalue<<endl; 
    return 0; 
} 