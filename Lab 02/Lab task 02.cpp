/*#include <iostream>
#include "Employee_Headerfile.h"
using namespace std;
int main() {
	Employee e1;
	e1.displayDetails();
}

//============================program 02===============================
#include <iostream>
#include "BankAccount_headerfile.h"
using namespace std;
int main() {
	BankAccount b1("PK0309800780100", "Muhammad Awais", 10000);
	b1.Display();
}
*/

//=============================program 03===============================
/*#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
	Rectangle r1;
	Rectangle r2(1.0, 1.0);
	Rectangle r3(1.0);
	cout << "Are of rectangle will be equal to: " << r1.area() << endl;
	cout << "Area of second over loading constructor will be given: " << r2.area() << endl;
	cout << "Area of single parameterized constructor is: " << r3.area() << endl;
	return 0;
}*/


//==============================program 04=======================================
#include <iostream>
#include "Destructor.h"
using namespace std;
int main() {
	{
		Locker locker1();
	}
	Locker* locker2 = new Locker;
	delete locker2;
}