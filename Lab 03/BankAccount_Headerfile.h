#include <iostream>
using namespace std;
class BankAccount {
private:
	float* balance;
public:
	//constructor
	BankAccount(float bal) {
		balance = new float;
		*balance = bal;
	}
	//method to display
	void display() {
		cout << "Balance: " << *balance << endl;
	}
	//method
	void modify(float newBalance) {
		*balance = newBalance;
	}
	//destructor
	~BankAccount() {
		delete balance;
		cout << "Destructor is called!" << endl;
	}
};