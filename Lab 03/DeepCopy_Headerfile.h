#include <iostream>
using namespace std;
class BankAccount {
private:
	float* balance;
public:
	BankAccount(float bal) {
		balance = new float;
		*balance = bal;
	}
	//modify balance
	void modify(float newBalance) {
		*balance = newBalance;
	}
	//display balance
	void display() {
		cout << "Balance: " << *balance << endl;
	}
	//destructor called
	~BankAccount() {
		delete balance;
		cout << "Destructor is Called !";
	}
};