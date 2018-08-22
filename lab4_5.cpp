//to calculate 3rd angle from input 2 angles in degrees
#include<iostream>
using namespace std;
int main()
{
	//declare 3 floats for angles 

	float a1,a2,a3;

	//prompt user for two angles

	cout <<"Enter 2 angles of a triangle in degrees"<<endl;

	//input 2 values

	cin>>a1>>a2;

	//calculate 3rd angle

	a3= 180-(a1+a2);

	//print 

	cout<< "The 3rd angle is "<<a3<<endl;

	return 0;
}

