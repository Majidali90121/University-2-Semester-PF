//#include <iostream>
//#include <stdexcept>
//using namespace std;
//class Calculator {
//public:
//	void add(double a, double b) {
//		cout << "Addition is " << a + b << endl;
//	}
//	void sub(double a, double b) {
//		cout << "Subtraction is: " << a - b << endl;
//	}
//	void devid(double a, double b) {
//		if (b == 0) {
//			throw runtime_error("0 is not excepted");
//		}
//		else {
//			cout << a / b << endl;
//		}
//		
//	}
//	void multiply(double a, double b) {
//		cout <<"Multiplication is: "<< a * b << endl;
//	}
//};
//int main() {
//	int a, b;
//	cout << "ENter 2 number: ";
//	cin >> a >> b;
//	Calculator c;
//	c.add(a, b);
//	c.sub(a, b);
//	c.multiply(a, b);
//	try {
//		c.devid(a, b);
//}
//	catch (runtime_error& e) {
//		cout << "Error is: " << e.what() << endl;
//	}
//	catch (...) {
//		cout << "Unexpected error" << endl;
//	}
//}
#include <stdexcept>
#include <iostream>
using namespace std;
class Devide
{
  int a,b;
	public:
		
		void input(){
        
			cout<<"Enter any 2 number: ";
			cin>>a>>b;
		}
		void devid() {
		if (b == 0) {
			throw runtime_error("0 is not excepted");
		}
		else {
			cout << a / b << endl;
		}
		
	}
};
int main(){
	Devide d;
	d.input();
		try {
	d.devid();
}
	catch (runtime_error& e) {
		cout << "Error is: " << e.what() << endl;
	}
	
}
