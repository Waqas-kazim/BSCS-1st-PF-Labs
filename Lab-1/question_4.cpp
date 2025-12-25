#include<iostream>
#define PIE 3.14
using namespace std;
int main()
{
	float diameter = 100;
	float radius = diameter * 0.5;
	float totalDistance = 2 * PIE * radius;
	cout << "Total distance travelled is: " ;
	cout <<  totalDistance << endl;
	return 0;
}
