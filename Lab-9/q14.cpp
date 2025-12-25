#include<iostream>
using namespace std;
main(){
    int fv = 1, sv = 1,current, bound;
    cout<< "Enter boundary: " << endl;
    cin >> bound;
    cout <<"0, 1, 1, ";
    int i= fv;
    while( fv+sv<bound){
        current=fv + sv;
        cout<<  current << ", ";
        i = fv = sv;
        sv = current;
    }
    
    
    
}
