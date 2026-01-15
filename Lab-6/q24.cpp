#include<iostream>
using namespace std;
// Modification of encrypt function from previous lab in such a way that add 3 to every digit and modulate (%) with 10. Then modify decrypt function accordingly.
int encrypt(int n){
    int d = (n%10 +3)%10;
    int c =((n/10)%10 +3)%10;

    int b = ((n/100)%10 +3)%10;
    int a = ((n/1000)%10 +3)%10;
    int encrypted = (c*1000) +(d*100)+(a*10)+b;
    return encrypted;
}
int decrypt(int n){
    int d = (((n%10-3)+10)%10);

    int c = ((((  n/10)%10-3)+ 10)%10);

    int b = ((((n/100 )%10-3)+10) %10);

    int a = (((( n/1000 )% 10-3)+10)%10);
    int decrypted = (c *1000)+(d* 100)+(a *10)+b;
    return decrypted;
}
main(){
    int n;
   cout<<"Enter four digit number: ";
   cin>>n;
   int encrypted = encrypt(n);
    cout<<"Encrypted number: "<<encrypted <<endl;
    int decrypted = decrypt(encrypted);
    cout<<"Decrypted number: "<<decrypted <<endl;
    
}
