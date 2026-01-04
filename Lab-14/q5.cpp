// 5.	Read numbers from a file and display their sum. 
#include <iostream>
#include <fstream>
using namespace std;
main()
{
    ifstream fin;
    fin.open("q5.txt");
    int number;
    int sum= 0;
    while (fin>> number)
    {
        sum= sum+ number;
    }
    cout << "The sum is: " << sum << endl;
    fin.close();
}