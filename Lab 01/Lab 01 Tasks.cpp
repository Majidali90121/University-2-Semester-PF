//Task 01
//============================================================
/*#include <iostream>
#include "Lab 01 task1.h"
using namespace std;
int main() {
	Student s1;
	s1.getData();
	s1.displayDisplay();
 cout << "\n========================================" << endl;
 return 0;
}*/

//=============================
//task 02
/*#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
	Rectangle r1;
	r1.setDimensions();
	r1.area();
	r1.perimeter();
 cout << "\n========================================" << endl;
	return 0;
}*/

//=============================
//task 03

#include <iostream>
#include "Voter.h"
using namespace std;
int main() {
	Voter v1;
	v1.getData();
	
	if (v1.isEligible()) {
		cout << v1.name << " are eligible for vote" << endl;
	}
	else {
		cout << v1.name << " are not eligible for vote" << endl;
	}
 cout << "\n========================================" << endl;
	return 0;
}

//==================================
//task 04
/*
#include <iostream>
#include "Temperature.h"
using namespace std;
int main() {
	Temperature t1;
	t1.setData();
	t1.displayResult();
	cout << "\n========================================" << endl;
	return 0;
}
*/
//===================================
//task 05
/*
#include <iostream>
#include "Calculator.h"
using namespace std;
  int main() {
   char op;
 cout<<"Enter an operator: ";
   cin>>op;
	Calculator c1;
	c1.getData();
  switch(op){
   case '+':
	    c1.Add();
   break;
  case '-':
	    c1.Subtract();
	break;
  case 'X':
 	   c1.Multiply();
    break;
  case '/':
 	   c1.Divide();
 }
	return 0;
}
*/
//====================================
//task 06
/*
#include <iostream>
#include "Product.h"
using namespace std;
int main() {
/*	Product P;
	P.setName("");
	P.setPrice(-24);
	P.setQuantity(-2);
	cout << "Product:  " << P.getName() << endl;
	cout << "Price    $" << P.getPrice() << endl;
	cout << "Quantity:   " << P.getQuantity() << endl;
	
	Product P;
	P.setName("Laptop");
	P.setPrice(24);
	P.setQuantity(2);
	cout << "Product:  " << P.getName() << endl;
	cout << "Price    $" << P.getPrice() << endl;
	cout << "Quantity:   " << P.getQuantity() << endl;
	
}*/