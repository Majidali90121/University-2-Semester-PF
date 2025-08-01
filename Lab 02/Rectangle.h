#include <iostream>
using namespace std;
class Rectangle {
	float length;
	float width;
public:
	//default constructor
	Rectangle() {
		length = 1.0;
		width = 1.0;
	}
	//parameterized constructor
	Rectangle(float len,float widt) {
		length = len;
		width = widt;
	}
	//Single perameterized constructor
	Rectangle(float same) {
		length = same;
		width = same;
	}
	//method for display area of rectangle
	float area() {
		return length * width;
	}
	};