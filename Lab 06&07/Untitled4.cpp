//=====================================task 01==========================================
#include <iostream>
#include "Compile_time_polymorphism.h"
using namespace std;
int main() {
	Calculator c1;
	cout << c1.add(1, 2)<<endl;
	cout << c1.add(3.34, 4.12) << endl;
	cout << c1.add(1, 2, 3) << endl;
	return 0;
}
//=======================================task 02============================================
/*#include <iostream>
#include "Function_overriding.h"
using namespace std;
int main() {
	Animal* a1;
	Dog d1;
	a1 = &d1;
	a1->makeSound();
	return 0;
}*/
//=======================================task 03==============================================
/*#include <iostream>
#include "Function_override.h"
using namespace std;
int main() {
	Base* b1;
	Circle c1;
	Rectangle r1;

	b1 = &c1;
	cout << "The over-riding of circle is" << endl;
	cout << "====================================================================" << endl;
	b1->Area();
	cout << "The over-riding of rectangle is" << endl;
	cout << "====================================================================" << endl;
	b1 = &r1;
	b1->Area();
	return 0;
	return 0;
}*/
//=================================task 04====================================================
/*#include <iostream>
#include "Operator overloading.h"
using namespace std;
int main() {
	Calculator c1(1,2);
	Calculator c2(3,2);
	Calculator c3;
	c3 = c1 + c2;
	c3.PrintComplex();
	return 0;
}*/
