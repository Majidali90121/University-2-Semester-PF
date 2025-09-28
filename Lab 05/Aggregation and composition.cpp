////==================================task 01=====================
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Player{
//	string name;
//	public:
//		Player(string n){
//			name=n;
//		}
//		
//		void play(){
//			cout<<name<<"is Playing"<<endl;
//		}
//		
//		~Player(){
//			cout<<name<<"is leaving the ground"<<endl;
//		}
//};
//
//class Team{
//	Player *player;
//	public:
//		Team(Player*p){
//			player=p;
//		}
//		void startMatch(){
//			cout<<"Match Started"<<endl;
//			player->play();
//		}
//};
//int main(){
//	Player*p1=new Player("Alice");
//	{
//		Team t1(p1);
//		t1.startMatch();
//	}
//	p1->play();
//	delete p1;
//	return 0;
//}


//======================================================task 02==================================================
#include <iostream>
#include <string>
using namespace std;
class Engine{
	string engineNumber;
	public:
		Engine(){
			engineNumber="Unknown";
			cout<<"Default Engine is created,"<<endl;
		}
		void setEngineNumber(string number){
			engineNumber=number;
		}
		void start(){
			cout<<"Start "<<engineNumber<<" Start"<<endl;
		}
		~Engine(){
			cout<<"Engine "<<engineNumber<< " destroyed"<<endl;
		}
};

class car{
	Engine engine;
	
	public:
		car(string engineNum){
			engine.setEngineNumber(engineNum);
			cout<<"Car with Engine "<<engineNum<<endl;
		}
		void startCar(){
			engine.start();
			cout<<"Car is started"<<endl;
		}
		~car(){
			cout<<"car destroyed"<<endl;
		}
};
int main(){
	{
		car mycar("En-781");
		mycar.startCar();
	}
}
