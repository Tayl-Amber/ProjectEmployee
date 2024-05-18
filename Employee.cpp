#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Intern.h"
#include "Choice.h"
#include "JuniorDeveloper.h"
#include <string>

using namespace std;

int main()
{
    string name;
    int id;
    double salary;

    Employee *e1;

    ChoiceInvoice ch;

    int choice = 0;
    choice = ch.askPosition();
    if (choice != -1)
    {
        ch.UserInputForPost(name, id, salary);
        e1 = ch.askForAction(name, id, salary, choice);
    }
    cout << "Choice" << endl;

    if (e1 != nullptr)
    {
        do
        {
            choice = ch.EmployeeActions();
            ch.ProcessActions(e1, choice);
        } while (choice == 4);
    }
    return 0;
}
