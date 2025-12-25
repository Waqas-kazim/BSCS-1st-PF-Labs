#include<iostream>
using namespace std;
main()
{
    int a, b, c, d, e, smallest, largest;
    cout << "Enter number A: " ;
    cin >> a;
    cout << "Enter number B: " ;
    cin >> b;
    cout << "Enter number C: " ;
    cin >> c;
    cout << "Enter number D: " ;
    cin >> d;
    cout << "Enter number E: " ;
    cin >> e;
    if(a>b){
        largest = a;
        smallest = b;
    }
    else{
        largest = b;
        smallest = a;
    }
    if(c>largest){
        largest = c;
    }
    if(c<smallest){
        smallest = c;
    }
    if(d>largest){
        largest = d;
    }
    if(d<smallest){
        smallest = d;
    }
    if(e>largest){
        largest = e;
    }
    if(e<smallest){
        smallest = e;
    }
    cout << "Largest number is: " << largest << endl;
    cout << "Smallest number is: " << smallest;


    
}