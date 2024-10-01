//James-Lee S. - Pay Report Assignment 4 C++ FVTC

//include and namespace statements
#include <conio.h>
#include <iostream>
using namespace std;

//Employee Struct
struct Employee {
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};

int main() {
    //Get Number of Employees to make
    int numEmps = 0;
    cout << "Enter the number of employees: ";
    cin >> numEmps;

    //Run a create sequence for every employee desired and save to an array
    Employee *emps = new Employee[numEmps];
    for (int i = 0; i < numEmps; i++) {

        cout << "\n" << "Enter the ID for Employee " << (i + 1) << ": ";
        cin >> emps[i].ID;

        cout << "\n" << "Enter the First Name for Employee " << (i + 1) << ": ";
        cin >> emps[i].FirstName;

        cout << "\n" << "Enter the Last Name for Employee " << (i + 1) << ": ";
        cin >> emps[i].LastName;

        cout << "\n" << "Enter the Hours Worked for Employee " << (i + 1) << ": ";
        cin >> emps[i].HoursWorked;

        cout << "\n" << "Enter the Hourly Rate for Employee " << (i + 1) << ": ";
        cin >> emps[i].HourlyRate;
    }

    //Print a Pay Report that prints: ID. Name: pay (hourly*hours); for every employee
    cout << "\nPay Report\n----------\n";
    float runningPayTotal = 0;
    for (int i = 0; i < numEmps; i++) {
        cout << emps[i].ID << ". " << emps[i].FirstName << " " << emps[i].LastName << ": $" << (emps[i].HourlyRate*emps[i].HoursWorked) << "\n";
        runningPayTotal += (emps[i].HourlyRate * emps[i].HoursWorked);
    }
    cout << "Total Pay: $" << runningPayTotal;

    //Hold Program Open and Return 0 to verify results
    (void)_getch();
    return 0;
}