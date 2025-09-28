////===================================================task01=========================
///*#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main() {
//	string line;
//	int rollNumber;
//	string name;
//	cout << "Enter your Roll Number: ";
//	cin >> rollNumber;
//	cout << "Enter your Name:  ";
//	cin >> name;
//	ofstream file("notes.txt", ios::app);
//	if (file.is_open()) {
//		file << "Name:   " << name << endl;
//		file << "Roll Number:  " << rollNumber << endl;
//	}else{
//			cout << "Difficult to open file!" <<endl;
//	}
//	file.close();
//	cout << "===================================================================\n";
//	ifstream readfile("notes.txt");
//	if (!readfile) {
//		cout << "File is not found: " << endl;
//	}
//	else {
//		cout << "Content of files are given" << endl;
//		getline(readfile, line);
//		while (getline(readfile, line)) {
//			cout << line << endl;
//		}
//		file.close();
//		return 0;
//	}
//
//}*/
////======================================================task 02=============================================
///*#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//int main() {
//	int Number_of_lines=0;
//	string line;
//	ifstream readfile("notes.txt");
//	if (!readfile) {
//		cout << "File is not found!" << endl;
//	}
//	else {
//		cout << "The number of lines is given below:" << endl;
//		while (getline(readfile, line)) {
//			Number_of_lines++;
//		}
//		cout << "The  number of Lines in a file is:  " << Number_of_lines << endl;
//	}
//	return 0;
//}*/
////===================================================task 03===============================================
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//struct Student {
//	int rollNumber;
//	string name;
//};
//int main() {
//	string line;
//	Student student[3];
//	for (int i = 0; i < 3; i++) {
//		cout << "Enter Name and RollNumber of student:  ";
//		cin >> student[i].name>>student[i].rollNumber;
//	}
//	ofstream file("Student.txt");
//	for (int i = 0; i < 3; i++) {
//		file << "Name:   " << student[i].name << "   " << "Roll Number:  " << student[i].rollNumber << endl;
//	}
//	ifstream readFile("Student.txt");
//	if (!readFile) {
//		cout << "File content is not find" << endl;
//	}
//	else {
//		cout << "Student data is given below: " << endl;
//		getline(readFile, line);
//		cout << line << endl;
//		while (getline(readFile, line)) {
//			cout << line << endl;
//		}
//	}
//	return 0;
//}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	ifstream file("Student.txt");
	ofstream write("copy.txt");
   string line;
   while(getline(file,line)){
   	write<<line<<endl;
   }
   cout<<"copy suucessfully"<<endl;
}
