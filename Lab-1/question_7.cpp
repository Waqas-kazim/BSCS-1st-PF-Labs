#include<iostream>
#define PIE 3.14
using namespace std;
int main()
{
	float diameter = 520;
	float speedInKph = 4;
	float speedInMps = speedInKph * 0.27;
	float distance = diameter * PIE;
	float timeTaken = distance/speedInMps;
	cout << "He will cover one round in ";
	cout << timeTaken;
	cout << " seconds" << endl;
	
}
