

/*

Operators such as >> , which read input from the keyboard, must be able to convert a
series of digits into a number. Write a program that does the same thing. It should allow
the user to type up to six digits, and then display the resulting number as a type long
integer. The digits should be read individually, as characters, using getche() .
Constructing the number involves multiplying the existing value by 10 and then adding
the new digit.

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char ch;
	long total = 0;
	cout << "\nEnter a number: ";
	while( (ch=getche()!='\r'))
	total = total*10 + ch-'0'; 
	cout << "\nNumber is: " << total << endl;
	return 0;
}



