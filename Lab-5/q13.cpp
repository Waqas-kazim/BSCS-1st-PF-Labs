#include<iostream>
using namespace std;
//  13. Write a function which uses a nested loop and display triangle of # of size 10 but only display odd rows
void printTriagle(){
    for(int i = 1; i<=10; i++){
        if(i%2==0)continue;
        for(int j = 1; j<=i; j++){
                cout << "#";
        }
        cout << endl;
    }
}
main(){
    printTriagle();
    
}