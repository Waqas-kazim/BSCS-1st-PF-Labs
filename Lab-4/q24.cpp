#include<iostream>
using namespace std;
// 11.	Input the gender of 10 students in the form of ‘m, M’ or ‘f, F’. Display how many students are male and female.
main(){
    int male=0, female=0;
    char gender;
    for(int i=1; i<=10; i++){
        cout<<"Enter gender of student "<<i<<" (m/f): ";
        cin>>gender;
        if(gender=='m' || gender=='M'){
            male++;
        } else if(gender=='f' || gender=='F'){
            female++;
        } else {
            cout<<"Invalid input. Please enter 'm' or 'f'."<<endl;
            i--;
        }
    }
    cout<<"Total male students: "<<male<<endl;
    cout <<"Total female students: "<< female << endl;

}