
// 5.	Write C++ code to make a class that contains a member function that takes two integers as arguments 
// and returns their Sum. The program checks to ensure that: The First number is an Odd number and the second number
// is an Even number. The program also checks to ensure that both numbers are positive and greater than zero. 
// The program also checks to ensure that: the first number is greater than the second number.

#include <iostream>
using namespace std;

class MathOperations {
    public:
        int addOddEven(int odd, int even) {
            if (odd <= 0 || even <= 0) {
                cout << "Both numbers must be positive and greater than zero." << endl;
                return -1;
            } else if (odd % 2 == 0 || even % 2 != 0) {
                cout << "The first number must be odd and the second number must be even." << endl;
                return -1;
            } else if (odd <= even) {
                cout << "The first number must be greater than the second number." << endl;
                return -1;
            } else {
                return odd + even;
            }
        }
};

int main() {
    MathOperations math;

    int odd = 3;
    int even = 4;

    int sum = math.addOddEven(odd, even);
    if (sum != -1) {
        cout << "The sum of " << odd << " and " << even << " is " << sum << endl;
    }

    return 0;
}

