#include <iostream>
using namespace std;
class Person {
public:
	int age;
	string name;
	void setPerson(string n,int a) {
		age = a;
		name = n;
	}
	void showPerson() {
		cout << "Person details are given below!" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};
class Student :public Person {
private:
	int rollNumber;
public:
	void setStudent(string n,int a,int r) {
		name = n;
		age = a;
		rollNumber = r;
	}
	void showStudent() {
		cout << "Student details are given below!" << endl;
		cout << "Name: " << name << endl;
		cout << "age: " << age << endl;
		cout << "Roll Number: " << rollNumber << endl;
	}
};