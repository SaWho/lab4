//to input and convert days into years weeks and days
#include<iostream>
using namespace std;
int main()
{
	//declare int values for days(in) ,year,weeks and days(out)

	int din,yr,wk,dout;

	// user prompt for input

	cout <<"Enter days to be converted into years weeks and days"<< endl;

	//take input

	cin>>din;

	//calculate yr wk and dout

	yr=din/365;
	wk= (din%365)/7;
	dout= (din%365)%7;

	//print the required values

	cout << "Years = "<<yr<<" Weeks= "<< wk<< " & Days = "<<dout<<endl;

	return 0; 
}
