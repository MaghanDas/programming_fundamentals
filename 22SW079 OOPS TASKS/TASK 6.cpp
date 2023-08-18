
// 6.A has following details of their employees in the file 'emp.txt'  
//
// a. Emp Id
// b. Emp Name
// c. Emp Address
// d. Emp Dept (Admin/Sales/Production/IT)
// e. Emp Phone
// f. Emp Age
//
// Write a C++ program to read the above file. Create new file such as Adm.txt, Sal.txt, Pro.txt, IT.txt respectively 
// to store the employee details according to their department.



#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream infile("emp.txt"); // open input file
    string line;

    ofstream admfile("Adm.txt"); // open output file for admin employees
    ofstream salfile("Sal.txt"); // open output file for sales employees
    ofstream profile("Pro.txt"); // open output file for production employees
    ofstream itfile("IT.txt"); // open output file for IT employees

    while (getline(infile, line)) { // read input file line by line
        string emp_id, emp_name, emp_address, emp_dept, emp_phone, emp_age;
        istringstream iss(line);
        iss >> emp_id >> emp_name >> emp_address >> emp_dept >> emp_phone >> emp_age;

        // write employee details to respective output files based on their department
        if (emp_dept == "Admin") {
            admfile << emp_id << " " << emp_name << " " << emp_address << " " << emp_dept << " " << emp_phone << " " << emp_age << endl;
        } else if (emp_dept == "Sales") {
            salfile << emp_id << " " << emp_name << " " << emp_address << " " << emp_dept << " " << emp_phone << " " << emp_age << endl;
        } else if (emp_dept == "Production") {
            profile << emp_id << " " << emp_name << " " << emp_address << " " << emp_dept << " " << emp_phone << " " << emp_age << endl;
        } else if (emp_dept == "IT") {
            itfile << emp_id << " " << emp_name << " " << emp_address << " " << emp_dept << " " << emp_phone << " " << emp_age << endl;
        }
    }

    // close all files
    infile.close();
    admfile.close();
    salfile.close();
    profile.close();
    itfile.close();

    return 0;
}

