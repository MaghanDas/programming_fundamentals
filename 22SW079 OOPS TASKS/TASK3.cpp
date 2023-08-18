
// 3.	Write a program using Object Oriented Programming concepts to calculate gross and 
//   net pay of employee from basic salary. Create employee class which consists of employee name, emp_id, and basic salary as
//  its data members. Use parameterized constructor in the derived class to initialize data members 
//  of the base class and calculate gross and
//  net pay of the employee in the derived class.

#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    string emp_id;
    float basic_salary;
    Employee(string n, string id, float bs) {
        name = n;
        emp_id = id;
        basic_salary = bs;
    }
};

class Payroll : public Employee {
public:
    float gross_pay;
    float net_pay;
    Payroll(string n, string id, float bs) : Employee(n, id, bs) {
        gross_pay = calc_gross_pay();
        net_pay = calc_net_pay();
    }
    float calc_gross_pay() {
        return basic_salary * 1.2;
    }
    float calc_net_pay() {
        return gross_pay * 0.8;
    }
    void display_payroll() {
        cout << "Employee name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Basic salary: " << basic_salary << endl;
        cout << "Gross pay: " << gross_pay << endl;
        cout << "Net pay: " << net_pay << endl;
    }
};

int main() {
    Payroll emp("John Doe", "12345", 5000);
    emp.display_payroll();
    return 0;
}


