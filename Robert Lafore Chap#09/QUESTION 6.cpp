// QUESTION 6

#include <iostream>
#include <conio.h>
using namespace std;
#include <process.h> //for exit()
const int LIMIT = 100; //array size

class safearay
{
private:
 int arr[LIMIT];
public:
 int& operator [](int n) //note: return by reference
 {
  if (n< 0 || n >= LIMIT)
  {
   cout << "\nIndex out of bounds"; exit(1);
  }
  return arr[n];
 }
};

class safehilo :public safearay
{
private:
 int llimit, ulimit;
public:
 safehilo(int a, int b) :llimit(a), ulimit(b)
 {
  if ((b - a) > LIMIT)
  {
   cout << "Array limits exceed maximum permissible range."; exit(1);
  }
 }
 int& operator [](int n)
 {
  if (n < llimit || n >= ulimit)
  {
   cout << "\nIndex out of bounds"; _getch(); exit(1);
  }
  safearay::operator[](n - llimit);
 }
};

int   main(void)
{
 safehilo sa1(100,175);
 for (int j = 100; j<175; j++) //insert elements
  sa1[j] = j * 10; //*left* side of equal sign
 for (int j = 100; j<175; j++) //display elements
 {
  int temp = sa1[j]; //*right* side of equal sign
  cout << "Element " << j << " is " << temp << endl;
 }
 _getch();
}