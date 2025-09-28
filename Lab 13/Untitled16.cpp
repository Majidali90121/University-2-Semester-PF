#include <iostream>
#include <stdexcept>
using namespace std;
template <typename t1>
class Calculator {
	t1 a,b;
public:
	void input(){
		cout<<"Enter any 2 number: ";
		cin>>a>>b;
	}
	void add() {
		cout << "Addition is " << a + b << endl;
	}
	void sub() {
		cout << "Subtraction is: " << a - b << endl;
	}
	void devid() {
		if (b == 0) {
			throw runtime_error("0 is not excepted");
		}
		else {
			cout <<"Devision is: "<< a / b << endl;
		}
		
	}
	void multiply() {
		cout <<"Multiplication is: "<< a * b << endl;
	}
};
int main() {
	
	Calculator <double> c;
	c.input();
	c.add();
	c.sub();
	c.multiply();
	try {
		c.devid();
}
	catch (runtime_error& e) {
		cout << "Error is: " << e.what() << endl;
	}
	catch (...) {
		cout << "Unexpected error" << endl;
	}
}
