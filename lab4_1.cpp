/* write a program to convert length in cm to length in m & km*/
#include<iostream>
using namespace std;
int main()
{
 
	//declare 3 variables of float type for length in cm, for length in m and length in kilometre
	
	float cm, m ,km;
	
	//prompt user for value	
	
	cout<<"Enter length in cm"<<endl;
	
	//input value
	
	cin >>cm;
	
	//calculate value for m & km	
	m=cm/100;
	km=cm/100000;
	
	//print
	cout << "Length in m is "<<m<< " and length in km is "<<km<<'\n';
	return 0;

}

