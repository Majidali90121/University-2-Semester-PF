#include <iostream>
using namespace std;
class Voter {
public:
	//attributes
	string name;
	int age;

	//method for getData
	void getData() {
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter the age: ";
		cin >> age;
	}
	//method for eligible
	bool isEligible() {
		return age >= 18;
	}
};