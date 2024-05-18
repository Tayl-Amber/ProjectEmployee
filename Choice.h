#pragma once
#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Intern.h"
#include "JuniorDeveloper.h"
#include <string>

using namespace std;

class ChoiceInvoice
{
public:
    int EmployeeActions();
    void UserInputForPost(string &name, int &id, double &salary);
    int askPosition();
    Employee* askForAction(string name, int id, double salary, int choice);
    void ProcessActions(Employee* employee, int choice);
};

int ChoiceInvoice::EmployeeActions() {
    int choice;
    cout << "Select operation" << endl;
    cout << "1. Calculate Salary" << endl;
    cout << "2. Assign Projects" << endl;
    cout << "3. Print Details" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    return (choice > 0 && choice < 5) ? choice : -1;
}

void ChoiceInvoice::UserInputForPost(string &name, int &id, double &salary) {
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter your Employee Id: ";
    cin >> id;

    cout << "Enter your fixed Salary: ";
    cin >> salary;
}

int ChoiceInvoice::askPosition() {
    int choice;
    cout << "Select Your Post: " << endl;
    cout << "1. Manager" << endl;
    cout << "2. Junior Developer" << endl;
    cout << "3. Intern" << endl;
    cin >> choice;

    return (choice > 0 && choice < 4) ? choice : -1;
}

Employee* ChoiceInvoice::askForAction(string name, int id, double salary, int choice) {
    switch (choice) {
        case 1:
            return new Manager(name, id, salary);
        case 2:
            return new JuniorDeveloper(name, id, salary);
        case 3:
            return new Intern(name, id, salary);
        default:
            cout << "Invalid choice. Please select a valid position." << endl;
            return nullptr;
    }
}

void ChoiceInvoice::ProcessActions(Employee* employee, int choice) {
    switch (choice) {
        case 1: {
            double bonus;
            cout << "Enter the bonus amount: ";
            cin >> bonus;
            if (employee->calculateSalary(bonus)) {
                cout << "Your Salary after calculation is: " << employee->getSalary() << endl;
            } else {
                cout << "Invalid amount of bonus entered." << endl;
            }
            break;
        }
       /*  case 2: {
            string projectName;
            cout << "Enter the project name: ";
            cin.ignore();
            getline(cin, projectName);
            employee->project(projectName);
            break;
        } */
        case 3:
            employee->printDetails();
            break;
        case 4:
            cout << "Have a nice day!" << endl;
            break;
        default:
            cout << "Invalid choice. Please select a valid action." << endl;
            break;
    }
}



