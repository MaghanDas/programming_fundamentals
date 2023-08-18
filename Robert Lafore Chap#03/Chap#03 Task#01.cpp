


/*

Assume that you want to generate a table of multiples of any given number. Write a pro-
gram that allows the user to enter the number and then generates the table, formatting it
into 10 columns and 20 lines.

*/

#include <iostream>
using namespace std;
int main()
{
	int n, count=0;
	cout<<"Enter any Number: ";
	cin>>n;
	
	for(int i=1; i<=200; i++){
		cout<<i*n<<"\t";
		count++;
		if(count==10){
			cout<<endl;
			count=0;
		}
	}
	return 0;
}
