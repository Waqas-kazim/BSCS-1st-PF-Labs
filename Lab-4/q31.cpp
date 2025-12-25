#include<iostream>
using namespace std;
// 18.	Ask the user to enter 10 numbers and display the largest and smallest number among these numbers
main(){
    int num, largest, smallest;
    cout << "Enter number: \'1\'"<<endl;
    cin>>num;
    largest=num;
    smallest=num;
 
    for(int i = 2;i<=10;i++){
        cout << "Enter number: \'" << i << "\'"<<endl;
        cin>>num;
        if(num>largest)
            largest = num;
        if(num<smallest)
            smallest = num;
        
    }
    cout << "largest: " << largest << endl;
    cout << "smallest: " << smallest << endl;
    
}