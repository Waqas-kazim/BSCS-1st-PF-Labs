#include<iostream>
using namespace std;
//  17. A company wants to send a four digit number in encrypted form on a network. Write functions with name encrypt and
//  decrypt. The function encrypts input a four digit number and then swaps the first and third; second and fourth digits. The
//  function decrypted input a four digit number and decrypt number in its original form. Force the user to only enter a four
//  digit number
int encrypt(int n){
    int d = n%10;
    int c = (n/10)%10;
    int b = (n/100)%10;
    int a = (n/1000)%10;
    int encrypted = (c*1000)+(d*100)+(a*10)+b;
    return encrypted;
}
int decrypt(int n){
    int d = n%10;
    int c = (n/10)%10;
    int b = (n/100)%10;
    int a = (n/1000)%10;
    int decrypted = (c*1000)+(d*100)+(a*10)+b;
    return decrypted;
}
main(){
    int n;
   cout <<"Enter a four digit number: ";
   cin>>n;
   int encrypted = encrypt(n);
    cout<<"Encrypted number: "<<encrypted<<endl;
    int decrypted = decrypt(encrypted);
    cout<<"Decrypted number: "<<decrypted<<endl;
    
}