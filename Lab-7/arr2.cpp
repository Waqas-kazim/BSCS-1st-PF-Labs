#include<iostream>
using namespace std;

main()
{
	int marks[10];
	int min = 0, max = 0;
	
	for(int i=0; i<10;i++)
	{
		cout<<"Enter Marks\n";
		cin>>marks[i];
}
min = marks[0];
max = marks[0];
for(int i = 0; i< 10; i++)
{
	if(marks[i] < min)
	{
		min = marks[i];
		
	}
	else if( marks[i] > max)
	{
		max = marks[i];
	}
}
	cout<<"Maximum value = " <<max<<endl;
	cout<<"Minimun value ="<<min<<endl;
}