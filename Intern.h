#pragma once
#include "Employee.h"

class Intern : public Employee
{
private:
    double fee;

public:
    Intern(string name, int id, double salary, double fee = 4000.00) : Employee(name, id, salary), fee{fee}
    {
        cout << "Intern Constructor Called!" << endl;
    }
    bool internSalary(double amount);
};

bool Intern :: internSalary(double amount){
    return Employee::calculateSalary(amount - fee);
}