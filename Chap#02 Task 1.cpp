/* Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
enter a number of gallons, and then displays the equivalent in cubic feet.  */
 

#include <iostream>
using namespace std;
int main()
{
	float gallons;
	cout<<"Welcome to Gallon to Cubit Foot Convertor Program \n";
	cout<<"Enter the Number of Gallons: ";
	cin>>gallons;
	gallons=gallons/7.481;
	cout<<"\nThe Equivalent in cubit foot will be: "<<gallons<<" cubit foot";
	
	
	return 0;
}
