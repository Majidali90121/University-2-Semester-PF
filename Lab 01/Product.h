#include <iostream>
using namespace std;
class Product {
private:
	//attributes
	string name;
	double price;
	int quantity;
	//method
public:
	void setName(string n) {
		name = n;
	}
	void setPrice(float p) {
		if (p < 0) {
			cout << "Error! price is not less then 0" << endl;
		}
		else {
			price = p;
		}
	}
	void setQuantity(int q) {
		if (q < 0) {
			cout << "Error! Quantity is not less then 0" << endl;
		}
		else {
			quantity = q;
		}
	}
	string getName() {
		if (name.length() == 0) {
			cout << "Error! Product name was not empty" << endl;
		}
		else {
			return name;
		}
	}
	float getPrice() {
		if (price < 0) {
			cout << "Error! Price must be greater then 0" << endl;
		}
		else {
			return price;
		}
	}
	int getQuantity() {
		if (quantity < 0) {
			cout << "Error! Quantity must be greater then 0" << endl;
		}
		else {
			return quantity;
		}
	}
};
