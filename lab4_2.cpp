//program to input and convert celsius into fahrenheit
#include<iostream>
using namespace std;
int main()
{

	//declare 2 float variables. one for cel and the other for fahr

	float cel,fahr;

	//prompt user for value in cel

	cout << "Enter celsius value to be converted into fahrenheit"<<'\n';

	//take input in cel 

	cin >> cel;


	//calculate fahr value for cel

	fahr= 1.8*cel +32;

	//print fahr value

	cout <<"Value in fahrenheit is "<<fahr<<'\n';
	return 0;
}

