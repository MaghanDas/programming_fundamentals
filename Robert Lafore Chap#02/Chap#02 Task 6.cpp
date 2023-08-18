/* 
On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584 and the Japanese yen was $0.00955
Write a program that allows the user to enter an amount in dollars and then displays the
value converted to these four other monetary units 
*/

#include <iostream>
using namespace std;
int main()
{
	float USD;
	cout<<"Enter Amount in USD: ";
	cin>>USD;
	cout<<"The Amount in Pound is: "<<USD/1.487;
	cout<<"\nThe Amount in Franc is: "<<USD/0.172;
	cout<<"\nThe Amount in Deutschemark is: "<<USD/0.584;
	cout<<"\nThe Amount in Yen is: "<<USD/0.00955;
	
	
	return 0;
}
