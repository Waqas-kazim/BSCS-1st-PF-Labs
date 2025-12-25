#include<iostream>
using namespace std;
// Write a function which uses a nested loop and display triangle of # of size 10 but only display odd rows 
void triangles(){
    for(int i = 1; i<=10 ; i++){
        if(i%2!=0)
        {
            for(int j=1; j<=i; j++){
                cout << "#" ;
            }
            cout<<endl;
        }
    }
}
main(){
    triangles();
    
}