#include <iostream>
using namespace std;
/*
Static Members :: 
-> static data memebers of a class belongs to a class but does not belongs to an object . 
-> The member is shared across objects.
-> static member functions can only access static memebers of class .
-> Static function can be invoked without even creating an object. 
-> Static member can provide information about the class.
-> 
*/

class Test{
private:
	int x,y;
public:
	static int count;
	Test(){
		x=10;
		y=10;
		count++;
	}
	static int getCount(){
//		x=1;// invalid use.
		return count;
	}
};
// this is global variable, But we want to use it only within class that's why scope resolution is given.
int Test::count=0; // Must be declared outside the class;

void DemoStaticDatamember(){

	Test t1;
	cout<<t1.count<<endl;
	Test t2;
	cout<<t2.count<<endl;
	cout<<Test::count<<endl; // You can accesss like this also.
	cout<<t1.count<<endl;
	cout<<t1.getCount()<<endl;
}
int main(int argc, char const *argv[])
{
	DemoStaticDatamember();
	return 0;
}