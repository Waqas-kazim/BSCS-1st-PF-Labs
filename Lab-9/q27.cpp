#include<iostream>
using namespace std;
// 27. Declare and initialize a float array of size 20. Pass the first, tenth and last element of the array to a function which take the average of these values and return it to calling function. Display it in main.

float avg(float first, float tenth, float last);
main(){
    float arr[20] = {1.5, 2.3, 3.1, 4.2, 5.8, 6.4, 7.9, 8.1, 9.3, 10.5,11.2, 12.6, 13.4, 14.8, 15.3, 16.7, 17.2, 18.9, 19.4, 20.1};
    
    float first = arr[0];
    float tenth = arr[9];
    float last = arr[19];
    
    float average = avg(first, tenth, last);
    cout << "Average: " << average << endl;
    

}

float avg(float first, float tenth, float last){
    return (first + tenth + last) / 3.0;
}