/*
Write the inverse of Exercise 10, so that the user enters an amount in Great Britainís new
decimal-pounds notation (pounds and pence), and the program converts it to the old
pounds-shillings-pence notation. An example of interaction with the program might be
Enter decimal pounds: 3.51
Equivalent in old notation = £3.10.2.
Make use of the fact that if you assign a floating-point value (say 12.34) to an integer
variable, the decimal fraction (0.34) is lost; the integer value is simply 12. Use a cast to
avoid a compiler warning. You can use statements like
float decpounds;
int pounds;
float decfrac;
// input from user (new-style pounds)
// old-style (integer) pounds
// decimal fraction (smaller than 1.0)
pounds = static_cast<int>(decpounds); // remove decimal fraction
decfrac = decpounds - pounds; // regain decimal fraction
You can then multiply decfrac by 20 to find shillings. A similar operation obtains pence.
*/

#include <iostream>
using namespace std;
int main()
{ 
	float decPounds;
	cout << "Enter Decimal pounds: ";
	cin >> decPounds;
	int pounds = static_cast<int>(decPounds);
	float fracPounds = decPounds - pounds;
	float decShillings =  fracPounds * 20;
	int shillings = static_cast<int>(decShillings);
	float fracShillings = decShillings - shillings;
	int pence = static_cast<int>(fracShillings * 12);
	cout << "Equivalent in old notation: " << pounds << "." << shillings << "." << pence;
	cout << endl;
	return 0;
}
