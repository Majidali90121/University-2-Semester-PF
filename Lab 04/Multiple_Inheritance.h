#include <iostream>
using namespace std;
class printer {
public:
	void print_document() {
		cout << "Document is printed: " << endl;
	}
};
class scanner {
public:
	void scan_document() {
		cout << "Document is scanned: " << endl;
	}
};
class Photocopier :virtual public printer,virtual public scanner {
public:
	void photocopy() {
		print_document();
		scan_document();
		cout << "Document is printed:" << endl;
	}
};