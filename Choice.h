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
     void EmployeeActions();
    void UserInputForPost(string name, int id, double salary);
    void askPosition();
    Employee* askForAction(string name, int id, double salary, int choice);
};

void ChoiceInvoice::EmployeeActions(){
    cout << "1. Calculate Salary" << endl;
    cout << "2. Assign Projects" << endl;
    cout << "4. Exit" << endl;
}
void ChoiceInvoice::UserInputForPost(string name, int id, double salary){
     cout << "Enter your name: ";
     cin.ignore();
     getline(cin, name);

     cout << "Enter your Employee Id: ";
     cin >> id;

     cout << "Enter your fixed Salary: ";
     cin >> salary;
}
void ChoiceInvoice::askPosition(){
   cout << "Select Your Post: " << endl;
    cout << "1.Manger" << endl;
    cout << "2.Junior Developer" << endl;
    cout << "3.Intern" << endl;
}
Employee* ChoiceInvoice::askForAction(string name, int id, double salary, int choice){
    
}