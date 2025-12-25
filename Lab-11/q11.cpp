#include<iostream>
using namespace std;
// 11.	Create a class BOOK with properties ISBN, Title, Price, Main Area, Sub Area, No of Pages. Write input and output functions both outside the class.
class Book{
    private:
    string ISBN;
    string Title;
    float Price;
    string Main_Area;
    string Sub_Area;
    int No_of_Pages;
    public:
    void input();
    void output();
};
void Book::input(){
    cout<<"Enter ISBN: ";
    cin>>ISBN;
    cout<<"Enter Title: ";
    cin>>Title;
    cout<<"Enter Price: ";
    cin>>Price;
    cout<<"Enter Main Area: ";
    cin>>Main_Area;
    cout<<"Enter Sub Area: ";
    cin>>Sub_Area;
    cout<<"Enter Number of Pages: ";
    cin>>No_of_Pages;

}
void Book::output(){
    cout<<"Book Details:"<<endl;
    cout<<"ISBN: "<<ISBN<<endl;
    cout<<"Title: "<<Title<<endl;
    cout<<"Price: "<<Price<<endl;
    cout<<"Main Area: "<<Main_Area<<endl;
    cout<<"Sub Area: "<<Sub_Area<<endl;
    cout<<"Number of Pages: "<<No_of_Pages<<endl;
}
main(){
    Book book1;
    book1.input();
    book1.output();
    
}