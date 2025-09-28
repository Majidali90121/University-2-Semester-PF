#include <iostream>
using namespace std;
class Base {
public:
	virtual void Area() {
		cout << "The area of Shapes are" << endl;
	}
};
class Circle:public Base {
public:
	void Area() override {
		int radius;
		cout<<"Enter radius of circle: "<<endl;
		cin>>radius;
		cout << "The area of circle is: " <<3.141*radius*radius<< endl;
	}
};
class Rectangle:public Base{
public:
	void Area() override {
		int l,w;
		cout<<"Enter lenght and width of rectangle: "<<endl;
		cin>>l>>w;
		cout << "The area of rectangle is given: "<<l*w << endl;
	}
};
