#pragma once
#include"Employee.h"

class JuniorDeveloper : public Employee{
    private:
int projectNumber;
double fee;
public:
JuniorDeveloper(string name, int id, double salary, int projectNumber, double fee) : projectNumber{projectNumber}, fee{fee}{
    cout << "Junior Developer Constructor is called!" << endl;
}
bool juniorDeveloperSalary(double bonus);
};

bool JuniorDeveloper :: juniorDeveloperSalary(double bonus){
    if(projectNumber > 3 && projectNumber < 6){
        fee = 5000.00;
        return true;
    }else if(projectNumber > 6 && projectNumber < 10){
        fee = 9000.00;
        return true;
    }else{
        return false;
    }
    return Employee :: calculateSalary(bonus+fee);
}