#include <iostream>
using namespace std;
class BankAccount {
	string accountNumber;
	string accountHolder;
	double Balance;
public:
	BankAccount(string acc_no, string acc_hold, double remain) {
		accountNumber = acc_no;
		accountHolder = acc_hold;
		Balance = remain;
	}
	void Display() {
		cout << "Bank account number: " << accountNumber << endl;
		cout << "Bank account holder: " << accountHolder << endl;
		cout << "Balance: " << Balance << endl;
	}
};