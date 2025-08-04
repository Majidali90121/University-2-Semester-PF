#include <iostream>
using namespace std;
class Employee {
private:
	string name;
	float salary;
public:
	Employee(string n, float s) {
		name = n;
		salary = s;
	}
	void display_Employee() {
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
	}
};
class Developer :public Employee {
private:
	string programming_Language;
public:
	Developer(string language,string n,float s):Employee(n,s) {
		programming_Language = language;
	}
	void display_Developer() {
		display_Employee();
		cout << "Programing Language: " << programming_Language << endl;
	}
};
class Designer :public Employee {
private:
	string design_tool;
public:
	Designer(string design, string n, float s) :Employee(n, s) {
		design_tool = design;
	}
	void display_Designner() {
		cout << "Design_Tool: " << design_tool << endl;
	}
};