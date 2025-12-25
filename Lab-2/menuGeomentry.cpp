#include<iostream>
using namespace  std;
main() {
	int opt;
menu:
	cout<<"1. Area of Circle\n2. Area of Rectangle\n3. Area of Triangle\n4. Area of Square\n5. Area of Trapezoid\n6. Area of Parallelogram\n7. Exit\n";
	cout<<"Enter your option: ";
	cin>>opt;
	switch(opt) {
		case 1: {
			float r, area;
			cout<<"Enter radius of circle: ";
			cin>>r;
			area=3.14*r*r;
			cout<<"Area of Circle is: "<<area<<endl;
			goto menu;
		}
		case 2: {
			float l, b, area;
			cout<<"Enter length and breadth of rectangle: ";
			cin>>l>>b;
			area=l*b;
			cout<<"Area of Rectangle is: "<<area<<endl;
			goto menu;
		}
		case 3: {
			float b, h, area;
			cout<<"Enter base and height of triangle: ";
			cin>>b>>h;
			area=0.5*b*h;
			cout<<"Area of Triangle is: "<<area<<endl;
			goto menu;
		}
		case 4: {
			float s, area;
			cout<<"Enter side of square: ";
			cin>>s;
			area=s*s;
			cout<<"Area of Square is: "<<area<<endl;
			goto menu;
		}
		case 5: {
			float a, b, h, area;
			cout<<"Enter the lengths of the two parallel sides and the height of trapezoid: ";
			cin>>a>>b>>h;
			area=0.5*(a+b)*h;
			cout<<"Area of Trapezoid is: "<<area<<endl;
			goto menu;
		}
		case 6: {
			float b, h, area;
			cout<<"Enter base and height of parallelogram: ";
			cin>>b>>h;
			area=b*h;
			cout<<"Area of Parallelogram is: "<<area<<endl;
			goto menu;
		}
		case 7: {
			cout<<"Exiting the program."<<endl;
			break;
		}
		default: {
			cout<<"Invalid option! Please select a valid option."<<endl;
		}
	}

}
