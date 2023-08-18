
// QUESTION 6
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Time{
	public:
		int hour;
		int minute;
		int second;
		
		Time()
		{
			hour =0;
			minute =0;
			second =0;
		}
		
		Time(int h, int m, int s)
		{
			hour = h;
			minute = m;
			second = s;
		}
		
		Time operator - (Time const &t2){
			
			Time diff;
		    diff.second = second - t2.second;
		    if(t2.minute > minute)
		    {
		        --hour;
		        minute += 60;
		    }
		    diff.minute = minute-t2.minute;
		    diff.hour = hour-t2.hour;
		    return diff;
		}
		Time operator * (float k)
		{
			Time mul;
			mul.hour = (hour*k);
			mul.minute = minute;
			mul.second = second;
			
			return mul;
			
		}
		
		void display()
		{
			cout<<"Time : "<<hour<<":"<<minute<<":"<<second<<endl;
		}
};


int main()
{
	Time t1(6,30,0);
	t1.display();
	Time t2(5,0,0);
	t2.display();
	Time t3;
	t3 = t1-t2;
	t3.display();
	Time t4;
	t4 = t1*5;
	t4.display();
	
}
			
			
			
			
			