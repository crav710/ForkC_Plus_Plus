#include <iostream>
using namespace std;
/*

	base class pointer derived class Object.
	class Base{
		func1
		func2 
	}
	class derived : base{
		func3
		func4 
	}
	// derives has all base features. 
	Base * p = new Derived;

	Now this p can call functions of Base class but p can not call derived class functions. 
	Because the pointer is of base class .
	p->func1  yes 
	p->func2  yes 
	p->func3  No 
	p->func4  No

	// conceptually wrong 
	Derived c = new Base()  -> wrong


	/// Function Overiding:: Redifining the same function in derived class. 
	if derived object is created then derived func is called otherwise base is called.
	//( only works if the defination is exactly same )
	


	Virtual Functions ::
	->base call pointer points to  derived class object. 
	->if the base class has virtual keyword before the function then the derived class function will be called which 
		is logically correct. 
	

	PolyMorphism:::
	->Same function call differnt function executed depending on the object.
	->Virtual function in base class can be without body also since they won't get executed. 
		To make implementation of function in derive class cumpulsory   we define virtual function this way.

	Pure virtual fuction ->	virtual func()=0;
	-> sets a rule , Defining interfaces.

	Abstract Classes::
	-> If a class is having a pure virtual function . Then it is called absrtact class.
	-> You cannot create an object of Abstract class.
	-> Abstract class pointer can be created.

	classes in C++;
	1) Base class with all concrete function -> reusability 
	2) Base class having some concrete and some pure virtual func -> resuability and polymorphism  (abstract class)
	3) Base class having all pure virtual function -> polymorphism (acts as interface) (also an abstract)
	






*/
class base
{
public:
//	1.if the fun 1 is not present in derived class then base class func is called. 
//  2.
	//Pure Virtual function
	virtual void fun1()=0;
	void fun2()
	{
		cout<<"fun2 of derived"<<endl;
	}

};
class derived:public base
{

public:
	void fun1()
	{
		cout<<"fun1 of derived"<<endl;
	}
	void fun2()
	{
		cout<<"fun2 of derived"<<endl;
	}
};
void DemoBaseClassPointerToDerivedClass()
{
	// base b; // cannot be defined if class is abstract;s
	derived d;
	base *p=&d;
	d.fun1();
	d.fun2();
	p->fun1();
	// p->fun2();
}

int main(int argc, char const *argv[])
{
	DemoBaseClassPointerToDerivedClass();
	
	return 0;
}