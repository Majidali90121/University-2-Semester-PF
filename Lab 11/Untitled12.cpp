//#include <iostream>
//#include <fstream>
//using namespace std;
//int main(){
//	fstream out("green.txt",ios::out);
//	cout<<"Position of write pointer before writing: "<<out.tellp()<<endl;
//	out<<"A";
//	cout<<"position of writing pointer after a single character: "<<out.tellp()<<endl;
//}
//====task 02================
//#include <iostream>
//#include <fstream>
//using namespace std;
//int main(){
//	fstream in("green.txt",ios::in);
//	cout<<"Position of read pointer before reading: "<<in.tellg()<<endl;
//	char ch;
//	in.get(ch);
//	cout<<"Position of pointer after reading a single character: "<<in.tellg()<<endl;
//	in.close();
//	
//}
//========================================task 03=========================================
//#include <iostream>
//#include <fstream>
//using namespace std;
//int main(){
//	fstream file("student.txt",ios::in|ios::out|ios::trunc);
//	file<<"01,Awais,3.5";
//	file<<"02,Awais,3.6";
//	file<<"03,Awais,2.5";
//	file<<"04,Awais,4.0";
//	cout<<"position of pointer after writing : "<<file.tellp()<<endl;
//	file.seekp(-13,ios::cur);
//	file<<"05,Nadir,2.78";
//	file.close();
//	
//}
//===================================================task 04----------------------------------
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	fstream file("student.txt",ios::in|ios::out);
	cout<<"Position of pointer before reading: "<<file.tellg()<<endl;
	char ch;
	cout<<"Move to read the pointer position 13"<<endl;
	file.seekg(13);
	while(file.get(ch)){
		cout<<"Character read: "<<ch<<"Psotion od pointer after reading: "<<file.tellg()<<endl;
	}
	file.close();
}
