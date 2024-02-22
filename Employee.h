#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    int id;
    double salary;

public:
    Employee(string name = "NA", int id = 0, double salary = 0.00) : name{name}, id{id}, salary{salary}
    {
        cout << "Constructor is Called!" << endl;
    }
    Employee(const Employee &source)
    {
        cout << "Copy Constructor is called!" << endl;
        this->name = source.name;
        this->id = id;
        this->salary = source.salary;
    }
  Employee createCopy();
    string getName();
    int getId();
    double getSalary();
    void setName(string name);
    void setId(int id);
    void setSalary(double salary);
    bool calculateSalary(double bonus, int leaves);
    void project(string projectName);
    void printDetails();
    friend double foodExpense(Employee &emp);
    ~Employee();
};

string Employee ::getName()
{
    return name;
}
int Employee ::getId()
{
    return id;
}
double Employee ::getSalary()
{
    return salary;
}
void Employee ::setName(string name)
{
    this->name = name;
} 
void Employee ::setId(int id)
{
   this->id = id;
}
void Employee ::setSalary(double salary)
{
    this->salary = salary;
}
bool Employee ::calculateSalary(double bonus, int leaves)
{
    if (bonus < 0 || bonus > salary)
    {
        return false;
    }
    else if (leaves >= 3 && leaves <= 7)
    {
        salary -= (salary * 0.10);
        salary += bonus;
        return true;
    }
    salary += bonus;
    return true;
}
void Employee ::project(string projectName)
{
    cout << "The project " << projectName << " has been assigned to " << name;
}
void Employee ::printDetails()
{
    cout << "Employee name is:" << name << endl;
    cout << "Employee ID is:" << id << endl;
    cout << "Employee Salary is:" << salary << endl;
}
double foodExpense(Employee &emp)
{
    return emp.salary - (emp.salary * 0.05);
}
Employee :: ~Employee(){

}
Employee Employee :: createCopy(){
    return *this;
}