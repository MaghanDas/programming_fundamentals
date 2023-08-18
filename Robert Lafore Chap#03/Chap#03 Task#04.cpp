/*Create the equivalent of a four-function calculator. The program should ask the user to
enter a number, an operator, and another number. (Use floating point.) It should then
carry out the specified arithmetical operation: adding, subtracting, multiplying, or divid-
ing the two numbers. Use a switch statement to select the operation. Finally, display the
result.*/
#include <iostream>#include<iostream>

using namespace std;

int main(){
	double num1, num2, ans;
	char oper, option;
	do{
		cout << "Enter first number, operator, second number: ";
		cin >> num1 >> oper >> num2;
		switch(oper){
			case '+': 
				ans = num1 + num2; 
				break;
			case '-': 
				ans = num1 - num2; 
				break;
			case '*': 
				ans = num1 * num2; 
				break;
			case '/': 
				ans = num1 / num2; 
				break;
			default: 
				ans = 0;
				break;
		}
		cout << "Answer: " << ans;
		cout << "\nDo another calculation (y/n): ";
		cin >> option; 
	}while(option == 'y');
	return 0;
}
