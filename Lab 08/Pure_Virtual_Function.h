#pragma once
#include <iostream>
#include <string>
using namespace std;
class Shape {
public:
	virtual void draw() = 0;
};
class Circle :public Shape {
private:
	double radius;
public:
	
	void draw() {
		cout << "Enter radius of circle: ";
		cin >> radius;
		cout << "The total area of circle is " << 3.141 * radius * radius << endl;
	}
};
class Rectangle :public Shape {
private:
	double length;
	double width;
public:
	void draw() {
		cout << "Enter length and width of Rectangle: ";
		cin >> length>>width;
		cout << "The total area of Rectangle is: " << length * width << endl;
	}
};
