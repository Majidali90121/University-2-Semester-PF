#include <iostream>
using namespace std;
class Calculator {
private:
	int real;
	int imaginary;
public:
	Calculator(){}

	Calculator(int real, int imaginary) {
		this->real = real;
		this->imaginary = imaginary;
	}
	Calculator operator + (Calculator c) {
		Calculator ans;
		ans.real = c.real + this->real;
		ans.imaginary = c.imaginary + this->imaginary;
		return ans;
   }
	void PrintComplex() {
		cout << this->real << " + " << this->imaginary << "i " << endl;
	}
};
