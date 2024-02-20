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
	}
	string getName();
	int getId();
	double getSalary();
	void setName(string name);
	void setId(int id);
	void setSalary(double salary);
	bool calculateSalary(double bonus, int leaves);
	void project(string projectName);
	void printDetails();
	~Employee()
	{
	}
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