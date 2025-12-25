#include<iostream>
using namespace std;
//  11. Write a function which input 5 numbers and display minimum and maximum
void minMax(int a, int b, int c, int d, int e){
    int sml=a, lrg=a;
    if(b>lrg){
        lrg = b;
    }else if(b<sml){
        sml = b;
    }
    if(c>lrg){
        lrg = c;
    }else if(c<sml){
        sml = c;
    }
    if(d>lrg){
        lrg = d;
    }else if(d<sml){
        sml = d;
    }
    if(e>lrg){
        lrg = e;
    }else if(e<sml){
        sml = e;
    }
    cout << "Smallest number is: " << sml << endl;
    cout << "Largest number is: " << lrg << endl;

}
main(){
    minMax(3, 8, 9, 2, 6);
}