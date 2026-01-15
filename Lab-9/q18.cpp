#include<iostream>
using namespace std;
// 18. Input the first two questions of this lab plan in an array and count vowels (a,e,i,o u) and consonants 
main(){
    int count=0;
    char text[] = "Input a float array of size 10 and display it on console on same line with tab spaces \n Declare and initialize character array of size 10 and display it on console";
    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            count++;
        }
    }
    cout << "ther are " << count << " vowels ";
    
}