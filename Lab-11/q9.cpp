#include<iostream>
using namespace std;
// 9.	Create class Car with following private data; Company, Model_Year, Model_Name, KM Driven. Write functions to set and get class properties. Create an object and call functions of the car.
class Car
{
    private:
    string company;
    int Model_Year;
    string Model_Name;
    int KM_Driven;
    public:
    void set(){
        cout<<"Enter Company Name: ";
        cin>>company;
        cout<<"Enter Model Year: ";
        cin>>Model_Year;    
        cout<<"Enter Model Name: ";
        cin>>Model_Name;
        cout<<"Enter KM Driven: ";
        cin>>KM_Driven;
    }
    void get(){
        cout<<"Company Name: "<<company<<endl;
        cout<<"Model Year: "<<Model_Year<<endl;    
        cout<<"Model Name: "<<Model_Name<<endl;
        cout<<"KM Driven: "<<KM_Driven<<endl;
    }
};
main(){
    Car car1;
    car1.set();
    car1.get();
}