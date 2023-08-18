/*
You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
by 9/5 and adding 32. Write a program that allows the user to enter a floating-point num-
ber representing degrees Celsius, and then displays the corresponding degrees
Fahrenheit. 
*/

#include <iostream>
using namespace std;
int main()
{
	float C, F;
	cout<<"Welcome to Temperature Conversion Program \n";
	cout<<"Enter Temperature in Celcius: ";
	cin>>C;
	F = (C * 9/5) + 32;
	cout<<"The Temperature in Fahrenheit is: "<<F<<" F";
	
	return 0;
}
