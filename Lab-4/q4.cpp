#include<iostream>
using namespace std;
// 4.	 Write a program that takes purchase amount and customer type (R-regular, P-premium). For premium customers apply 20% discount. For regular customers: 
// Rs 0 - 50: No discount 
// Rs 51 - 100: 5% discount 
// Rs 101 - 200: 10% discount 
// Rs 201+: 15% discount 
// Displays final amount 

main(){
    float discount, pAmount;
    char sub;
    cout << "Enter \'R\' for regular, \'P\' for premium ";
    cin>>sub;
    cout << "Enter total purchase amount: " <<endl;
    cin>>pAmount;
    if(sub=='p'){
        discount = 0.2* pAmount;
    }else if(sub=='r'){
        if(pAmount>200){
            discount = pAmount*0.15;
        }else if(pAmount<=200 &&pAmount>100){
            discount = pAmount*0.1;
        }else if(pAmount <=100 &&pAmount>50){
            discount = pAmount*0.05;
        }else if(pAmount<=50 &&pAmount>=0){
            discount= 0;
        }
    }
    cout << "Final amount is: " << pAmount-discount;

}