/*#include <iostream>
#include "BankAccount_Headerfile.h"
using namespace std;
int main() {
	BankAccount acc1(1000);
    BankAccount acc2=acc1;
	acc2.modify(500);
	cout << "Account 1";
	acc1.display();
	cout << "Account 2: ";
	acc2.display();
	return 0;
}*/
//============================task 02======================
#include <iostream>
using namespace std;
#include "DeepCopy_Headerfile.h"
int main() {
	BankAccount acc1(1000);
    BankAccount acc2=acc1;
	acc2.modify(500);
	cout << "Account 1";
	acc1.display();
	cout << "Account 2: ";
	acc2.display();
	return 0;
}
//=============================task 03======================
/*#include <iostream>
#include "Single_inheritance_headerFile.h"
using namespace std;
int main() {
	Student s1;
	s1.setStudent("Majid ali", 18, 05);
	s1.setPerson("Majid", 18);
	s1.showPerson();
	s1.showStudent();
	return 0;
}*/
//==============================task 04=====================
/*#include <iostream>
#include "Constructor_Inhertance_headerFile.h"
using namespace std;
int main() {
	Rectangle r1;
	return 0;
	
}*/