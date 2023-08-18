
// Write a program using Object Oriented Programming concepts to calculate bonus of the employees' admin and salesman. 
// The admin and salesman classes derives the information from class person. Create base and all derived classes having same 
// member functions called getdata, display data and bonus.
// Calculates bonus of the specified employee.

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void displaydata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Admin : public Person {
private:
    float salary;
public:
    void getdata() {
        Person::getdata();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displaydata() {
        Person::displaydata();
        cout << "Salary: " << salary << endl;
    }
    void calculate_bonus() {
        float bonus = salary * 0.1;
        cout << "Bonus: " << bonus << endl;
    }
};

class Salesman : public Person {
private:
    float commission;
public:
    void getdata() {
        Person::getdata();
        cout << "Enter commission: ";
        cin >> commission;
    }
    void displaydata() {
        Person::displaydata();
        cout << "Commission: " << commission << endl;
    }
    void calculate_bonus() {
        float bonus = commission * 0.05;
        cout << "Bonus: " << bonus << endl;
    }
};

int main() {
    Admin admin;
    Salesman salesman;

    cout << "Enter admin details:\n";
    admin.getdata();
    cout << endl;

    cout << "Enter salesman details:\n";
    salesman.getdata();
    cout << endl;

    cout << "Admin details:\n";
    admin.displaydata();
    admin.calculate_bonus();
    cout << endl;

    cout << "Salesman details:\n";
    salesman.displaydata();
    salesman.calculate_bonus();
    cout << endl;

    return 0;
}

