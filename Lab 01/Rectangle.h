#include <iostream>
using namespace std;
class Rectangle {
public:
	//attributes
	int length;
	int width;
	//method for Set Dimension
	void setDimensions() {
		cout << "Enter the length of rectangle: ";
		cin >> length;
		cout << "Enter the width of rectangle: ";
		cin >> width;
	}
	//method to find area
	void area() {
		cout << "Area: " << length * width << endl;
	}
	//method to find perimeter
	void perimeter() {
		cout << "Perimeter: " << 2 * (length + width) << endl;
	}
};