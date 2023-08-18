

/*By default, output is right-justified in its field. You can left-justify text output using the
manipulator setiosflags(ios::left) . (For now, don’t worry about what this new notation
means.) Use this manipulator, along with setw() , to help generate the following output:*/


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout<< setiosflags(ios::left) <<setw(15)<<"Last Name"<<setw(15)<<"First Name"<<setw(20)<<"Street Address"<<setw(15)<<"Town"<<setw(15)<<"State\n"<<endl;
	cout<<"....................................................................\n"<<endl;
	cout<< setiosflags(ios::left) <<setw(15)<<"Jones"<<setw(15)<<"Bernard"<<setw(20)<<"109 Pine Line"<<setw(15)<<"Little Town"<<setw(15)<<"MI"<<endl;
	cout<< setiosflags(ios::left) <<setw(15)<<"O'Brian'"<<setw(15)<<"Coleen"<<setw(20)<<"42 E. 99th Ave."<<setw(15)<<"Bigcity"<<setw(15)<<"NY"<<endl;
	cout<< setiosflags(ios::left) <<setw(15)<<"Wong"<<setw(15)<<"Harry"<<setw(20)<<"121 -A Alabama St."<<setw(15)<<"Lakeville"<<setw(15)<<"IL"<<endl;
	return 0;
}
