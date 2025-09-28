#include <iostream>
using namespace std;
class Rectangle;
class Circle{
	int radius;
	public:
		Circle(int radius){
			this->radius=radius;
		}
		friend double totalArea(Circle,Rectangle);
};
class Rectangle{
	int length;
	int width;
	public:
		Rectangle(int length,int width){
			this->length=length;
			this->width=width;
		}
		friend double totalArea(Circle c,Rectangle r);
};
double totalArea(Circle c,Rectangle r){
	return (3.14*c.radius*c.radius)+(r.length*r.width);
}
