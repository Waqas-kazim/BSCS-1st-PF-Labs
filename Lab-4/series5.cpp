#include<iostream>
#include<math.h>
using namespace std;
main(){
    float sum, n, i=0;
    cout << "enter ending number: "<<endl;
    cin>>n;
    
    
    for(float i = 1.0; i<=n;i++){

        sum+= (2*i-1)/pow(2,i);
        // cout << "The sum is: " << sum <<endl;
    }
    cout << "The sum is: " << sum;

}