#include <iostream>
#include <string>
#include "Pure_virtual_Function.h"
using namespace std;
int main() {
	Shape* s1;
	Circle c1;
	Rectangle r1;
	s1 = &c1;
	s1->draw();
	s1 = &r1;
	s1->draw();
}
//==================================================task 02===================================
/*#include <iostream>
#include "Friend Function.h"
int main(){
	Circle c(10);
	Rectangle r(20,10);
	cout<<"Total Area: "<<totalArea(c,r)<<endl;
	return 0;
}*/
