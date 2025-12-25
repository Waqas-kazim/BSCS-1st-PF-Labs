#include<iostream>
using namespace std;
// 9.	First Print the even in 1-100 on separate line and then odd numbers from 1-100 in same line with spaces 9.	Add digits from 1 to 25 and display the average of digits from 1 to 25
main(){
    int i = 1;
    cout << "Odd\tEven" << endl;
    while(i<=100){
        cout<<i<<"\t" << i+1 << "\n";
        i += 2;
    }

}