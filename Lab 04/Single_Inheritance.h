#include <iostream>
using namespace std;
class Person {
private:
	string name;
	int age;
public:
	Person(string n, int a) {
		name = n;
		age = a;
	}
	void display_person_info() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};
class Student :public Person {
private:
	string student_id;
public:
	Student(string n, int a, string id) :Person(n, a) {
		student_id = id;
	}
	void display_student() {
		display_person_info();
		cout << "Student Id: " << student_id << endl;
	}
};
