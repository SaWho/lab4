//program to input and convert fahrenheit into celsius
#include<iostream>
using namespace std;
int main()
{


	//declare 2 float variables. one for fahr and the other for cel

	float cel,fahr;

	//prompt user for value in fahr

	cout << "Enter fahrenheit value to be converted into celsius"<<'\n';

	//take input in fahr 

	cin >> fahr;

	//calculate cel value for fahr

	cel= 5*(fahr-32)/9;

	//print cel value


	cout <<"Value in celsius is "<<cel<<'\n';
	return 0;
}

