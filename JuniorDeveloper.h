#pragma once
#include "Employee.h"

class JuniorDeveloper : public Employee
{
private:
    int projectNumber;
    double fee;

public:
    JuniorDeveloper(string name, int id, double salary, int projectNumber = 0, double fee = 0.0) : Employee(name, id, salary), projectNumber{projectNumber}, fee{fee}
    {
        cout << "Junior Developer Constructor is called!" << endl;
    }
    bool calculateSalary(double bonus) override;
};

bool JuniorDeveloper ::calculateSalary(double bonus)
{
    if (projectNumber > 3 && projectNumber < 6)
    {
        fee = 5000.00;
        return true;
    }
    else if (projectNumber > 6 && projectNumber < 10)
    {
        fee = 9000.00;
        return true;
    }
    else
    {
        return false;
    }
    return Employee ::calculateSalary(bonus + fee);
}