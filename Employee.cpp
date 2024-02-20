#include <iostream>
#include "Employee.h"
#include <string>

using namespace std;

int main()
{
    string name;
    int id;
    double salary;

    cout << "Enter Enployee name:";
    getline(cin, name);

    cout << "Enter Employee id:";
    cin >> id;

    cout << "Enter Employee Salary:";
    cin >> salary;

    Employee emp(name, id, salary);
    int choice = 0;

    do
    {
        cout << "Select operation" << endl;
        cout << "1.Calculate Salary" << endl;
        cout << "2.Assign Project" << endl;
        cout << "3.Print Details" << endl;
        cout << "4.Exit" << endl;

        cout << "Enter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int days;
            double amount;
            cout << "Enter the bonus amount:";
            cin >> amount;
            cout << "Enter the number of leaves you took:";
            cin >> days;
            if (emp.calculateSalary(amount, days))
            {
                cout << "Your Salary after deducting food expenses:" << emp.getSalary() << endl;
            }
            else
            {
                cout << "Invalid amount of bonus is enetered." << endl;
            }
            break;
        }

        case 2:
        {
            cin.ignore();
            string projectName;
            cout << "Enter the project name:";
            getline(cin, projectName);
            emp.project(projectName);
            break;
        }
        case 3:
            emp.printDetails();
            break;
        case 4:
            cout << "Have a nice day!" << endl;
            break;
        }
    } while (choice != 4);
}