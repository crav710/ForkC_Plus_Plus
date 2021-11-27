#include <iostream>
using namespace std;
/*
Destructor:: 
-> it's a member function of class that is used to relasing theresources accurired by the class.
-> used to delete heap memory, closing files. 
-> You cannot have multiple destructors. 
-> Destructor does not have a return type .
-> if the object is created in stack then destructor will be called automatically. 
-> if the object is created in heap , then you need to call delete for calling the destructor.

Virtual Constructor ::
-> Used to call derived class constructor first. Just like virtual function used to call derived 
	class function in poly.

-> Abstract class will have non virtual destructor.(debatable)

*/

class Demo {
	int *p;
public:

	Demo(){
		p = new int[10];
		cout<<"constructor"<<endl;
	}
	~Demo(){
		delete []p;
		cout<<"destructor"<<endl;
	}
};
class Base{
public:
	Base(){
		cout<<"Constructor base"<<endl;
	}
	virtual ~Base(){ // used to do destruction polymorphically.
		cout<<"Destructor base"<<endl;

	}

};
class Derived:public Base{
public:
	Derived(){
		cout<<"Constructor derived"<<endl;
	}
	~Derived(){
		cout<<"Destructor derived"<<endl;
	}
};
void DemoDestructor(){
	Demo c; 
	Demo *d=new Demo();
	delete d;
}
void DemoVirtualDestructor(){
	// Derived d;// base con derived con derived des base des . Inhertiance 
	Base * ptr = new Derived(); 
 
	delete ptr; // will not call derived destructor if virtual is not used. 
}

int main(int argc, char const *argv[])
{
	// DemoDestructor();	
	DemoVirtualDestructor();
	return 0;
}