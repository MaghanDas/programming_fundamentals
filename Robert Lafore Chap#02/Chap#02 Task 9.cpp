/*If you have two fractions, a/b and c/d, their sum can be obtained from the formula
(a*d) + (b*c) / b*d
Write a program that encourages the user to enter two fractions, and then displays their
sum in fractional form. (You don’t need to reduce it to lowest terms.) The interaction
with the user might look like this:
Enter first fraction: 1/2
Enter second fraction: 2/5
Sum = 9/10
You can take advantage of the fact that the extraction operator ( >> ) can be chained to
read in more than one quantity at once:
cin >> a >> dummychar >> b;*/

#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, numerator, denominator;
	char character;
	cout<<"Enter First Fraction: ";
	cin>>a>>character>>b;
	cout<<"\nEnter Second Fraction: ";
	cin>>c>>character>>d;
	numerator=(a*d)+(b*c);
	denominator=(b*d);
	cout<<endl;
	cout<<numerator<<"/"<<denominator;
	return 0;
}

