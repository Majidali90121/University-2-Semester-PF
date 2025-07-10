#include <iostream>
using namespace std;
class Student {
public:
	//attributes 
	string name;
	int rollNumber;
	float marks;
	//method for get data
	void getData() {
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your Roll number: ";
		cin >> rollNumber;
		cout << "Enter your Marks: ";
		cin >> marks;
	}
	//method for Display data
	void displayDisplay() {
		cout << "Name: " << name << endl;
		cout << "Roll_Number: " << rollNumber << endl;
		cout << "Marks: " << marks << endl;
	}

};