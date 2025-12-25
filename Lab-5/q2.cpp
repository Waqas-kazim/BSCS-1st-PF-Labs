#include<iostream>
using namespace std;
// 2. Input the gender of 10 students in the form of ‘m, M’ or ‘f, F’. Force user to enter on m,M, f, F. Display how many
// students are male and female. Use do-while and for loop

main(){
    int i = 1;
    char gender;
    int maleCount = 0, femaleCount = 0;
    do{
        cout << "Enter m or M for male and f or F for remale: ";
        cin >>gender;
        if(gender == 'm' || gender == 'M'){
            maleCount++;
        }
        else if(gender == 'f' || gender == 'F'){
            femaleCount++;
        }
        else{
            cout << "Invalid input. Please enter again." << endl;
            continue;
        }
        i++;
    }while(i <= 10);
    cout << "Total Male students: " << maleCount << endl;
    cout << "Total Female students: " << femaleCount << endl;
}