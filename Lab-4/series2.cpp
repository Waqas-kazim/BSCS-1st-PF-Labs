#include<iostream>
using namespace std;
main(){
    int n, sum=0;
    cout << "Enter ending number: " << endl;
    cin >> n;
    for(int i= 1;i<=n;i++){
        if(i%2==0)
            sum-=1/i;
            else
            sum+=1/i;
    }
    cout << "Result is: " << sum;
}