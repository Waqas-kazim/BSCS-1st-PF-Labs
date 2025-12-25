#include<iostream>
using namespace std;
// 8.	Ask the user to enter a number and print digits from 0 to that number using the while loop with spaces
main(){
    int i=1, n;
    cout << "enter ending number : "<<endl;
    cin>>n;
    while(i <=n){
        cout << i << " " ;
        i++;
    }

}