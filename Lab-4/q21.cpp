#include<iostream>
using namespace std;
// 8.	Ask the user to enter a number and print digits from 0 to that number using the for loop with spaces
main(){
    int  n;
    cout << "enter ending number : "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout << i << " " ;
    }

}