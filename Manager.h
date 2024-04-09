#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;

class Manager : public Employee
{
private:
    float extraCap;

public:
    Manager(string name, int id, double salary, double extraCap = 5000.00) : 
    Employee(name, id, salary), extraCap{extraCap}
    {
        cout << "Constructor for Manager Class Called!!" << endl;
    }
    bool managerSalary(double bonus);
};

bool Manager ::managerSalary(double bonus)
{
    return Employee ::calculateSalary(bonus + extraCap);
}