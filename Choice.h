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
    void askPosition();
    void takeUserInput();
    void askForAction();
};
void ChoiceInvoice::askPosition(){
   cout << "Select Your Post: " << endl;
    cout << "1.Manger" << endl;
    cout << "2.Junior Developer" << endl;
    cout << "3.Intern" << endl;
}
void ChoiceInvoice::takeUserInput(string name, int id, double salary)
{
    
}
