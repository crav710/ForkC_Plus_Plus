#include <iostream>
using namespace std;
/*
Friend Functions ::
-> friend function is a global function friend to a class . Which can access private , protected variable called upon object.
-> friend function need to define inside class using friend keyword. 
-> used in operator overloading, accesing private var in another class. 
-> Friend class is declared in another class for whom you wish to used private varibles .  (used in container classes)
->
*/

class your; // need to define it above if your class is declared below my class.
class my {
private:
	int x=10 ;
friend your;
friend void print();
};
class your{
public:
	my m;
	void print(){
		cout<<m.x<<endl;
	}
};
void print()
{
	my m;
	cout<<m.x<<endl;
}
void DemoFriendFunction(){

	your y;
	y.print();
	print();

}
int main(int argc, char const *argv[])
{
	DemoFriendFunction();
	return 0;
}