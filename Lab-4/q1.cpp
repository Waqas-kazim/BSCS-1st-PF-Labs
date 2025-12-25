#include<iostream>
using namespace std;
// 1.	Ask the user to enter his marks in the Programming course, if the marks are greater than equal to 60 then display a message “He is Passed in the course” otherwise, display message: “ He is Failed” (Ternary Operator)
main(){
int marks;
cout << "Enter marks: " << endl;
cin>> marks;
(marks>=60)?cout<<"Passed":cout<<"failed";

}