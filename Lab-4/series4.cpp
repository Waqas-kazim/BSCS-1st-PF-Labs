#include<iostream>
using namespace std;
main(){
    int n;
    float sum=0.0;
    cout << "Enter ending number: " << endl;
    cin >> n;
    for(int i=1;i<=n;i++){
        sum = sum + (1.0*(i+1))/((i+1)*(i+2));
    }
    cout << "The sum is: " << sum;
}