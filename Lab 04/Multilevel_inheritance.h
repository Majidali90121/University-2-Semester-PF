#include <iostream>
using namespace std;
class Person {
public:
	string name;
	int age;
	Person(string n, int a) {
		name = n;
		age = a;
	}
	void display_Person() {
		cout << "Name: " << name<<endl;
		cout << "age: " << age << endl;
	}
};
class Employee :public Person {
public:
	string Employee_id;

	Employee(string id,string n,int a) 
		: Person(n,a)
	{
		Employee_id = id;
	}
	void display_Employee() {
		//display_Person();
		cout << "Employee ID" << Employee_id << endl;
	}
};
class Manager :public Employee {
private:
	string department;
public:
	Manager(string d, string id,string n,int a) :Employee(id,n,a) {
		department=d;
	}
	void display_manager() {
		display_Person();
		display_Employee();
		cout << "Department: " << department << endl;
	}

};