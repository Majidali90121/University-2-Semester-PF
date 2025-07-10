#include <iostream>
using namespace std;
class Temperature {
public:
	//attributes
	float Celsius;
	float Fahrenheit;
	//method to get data
	void setData() {
		cout << "Enter a number that you want to convert Celsius to Fahrenheit: ";
		cin >> Celsius;
	}
	void displayResult() {
		Fahrenheit = (Celsius * 9 / 5) + 32;
		cout << "Fahrenheit: " << Fahrenheit << " F";
	}
};
