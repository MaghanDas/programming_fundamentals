#include <iostream>
using namespace std;
int main(){
	int number; /*To take response from User whether he wants to
				convert from fahrenheit to celcius or 
				celcius to fahrenheit */
	float temperature;
	cout<<"Welcome to Temperature Conversion Program \n";
	cout<<"Press 1 to convert Fahrenheit to Celcius \n";
	cout<<"Press 2 to Convert Celcius to Fahrenheit \n";
	cin>>number;
	if (number==1)
	{
		cout<<"Enter temperature in Fahrenheit: ";
		cin>>temperature;
		temperature=5.0/9.0*(temperature - 32.0);
		cout<<"Temperature in Celcius is: "<<temperature;
	}
	else if (number==2)
	{
		cout<<"Enter temperature in Celcius: ";
		cin>>temperature;
		temperature=9.0/5.0*temperature + 32.0;
		cout<<"Temperature in Fahrenheit is: "<<temperature;
	}
	
	else{
		cout<<"Enter either 1 or 2 for Program to begin";
	}
	return 0;
}
