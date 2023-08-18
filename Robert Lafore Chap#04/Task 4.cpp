/*
Create a structure called employee that contains two members: an employee number
(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.
*/
#include<iostream>
using namespace std;
struct employee{
    int id;
    float comp;
};

int main(){
    employee e1, e2, e3;
    cout << "Enter employee details: " << endl;

    cout << endl << "Employee 1\nEmployee number: ";
    cin >> e1.id;
    cout << "Employee's compensation: ";
    cin >> e1.comp;

    cout << endl << "Employee 2\nEmployee number: ";
    cin >> e2.id;
    cout << "Employee's compensation: ";
    cin >> e2.comp;

    cout << endl << "Employee 3\nEmployee number: ";
    cin >> e3.id;
    cout << "Employee's compensation: ";
    cin >> e3.comp;

    cout << endl << "******************************Employee Details*****************************************\n\n";
    cout << endl<< "Employee 1\nEmployee number: " << e1.id << "\nEmployee's compensation: " << e1.comp << endl;
    cout << endl<< "Employee 2\nEmployee number: " << e2.id << "\nEmployee's compensation: " << e2.comp << endl;
    cout << endl<< "Employee 3\nEmployee number: " << e3.id << "\nEmployee's compensation: " << e3.comp << endl;

    return 0;
}
