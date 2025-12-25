#include<iostream>
using namespace std;
// 18.	Ask the user to enter 10 numbers and display the largest and smallest number among these numbers
main(){
    int i=2, num, largest, smallest;
    cout << "Enter number: \'1\'"<<endl;
    cin>>num;
    largest=num;
    smallest=num;
    while(i<=10){
        cout << "Enter number: \'" << i << "\'"<<endl;
        cin>>num;
        if(num>largest)
            largest = num;
        if(num<smallest)
            smallest = num;
        i++;
    }
    cout << "largest: " << largest << endl;
    cout << "smallest: " << smallest << endl;
    
}