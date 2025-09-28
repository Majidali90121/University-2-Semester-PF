#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student {
public:
	static int count;
	int ID;
	Student() {
		count++;
		ID++;
	}
	static void show() {
		cout << "Total number of count is: " << count << endl;
	}

};
int Student::count = 0;

