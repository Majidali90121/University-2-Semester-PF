#include <iostream>
using namespace std;
class Employee {
	int Id;
	string name;
	float salary;
public:
	//Default constructor
	Employee() {
		Id = 0;
		name = "Not Assigned";
		salary = 0.0;
	}
	//method to display details
	void displayDetails() {
		cout << "Id = " << Id << endl;
		cout << "Name = " << name << endl;
		cout << "Salary = " << salary << endl;
	}
};
