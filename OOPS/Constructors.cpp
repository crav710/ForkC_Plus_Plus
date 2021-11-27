#include <iostream>
using namespace std;
/*

Constructors can be private :: (Abstract Class)

*/
/*
Copy Constructor is a member function which initializes an object using another object of same class.
In C++, a Copy Constructor may be called in the following cases: 
1. When an object of the class is returned by value. 
2. When an object of the class is passed (to a function) by value as an argument. 
3. When an object is constructed based on another object of the same class. 
4. When the compiler generates a temporary object.




*/

class Constructors
{
private:
	int x,y;
	int *ptr;
public:
	//parameterised constructor 
	Constructors(int x1,int y1)
	{
		ptr = new int;
		*ptr = x1;
		x=x1; y=y1;
	};

	//Copy Constructor
	Constructors(const Constructors &p1){
		cout<<"copy Constructor called"<<endl;
		ptr = new int;
		*ptr = *p1.ptr ;
		x=p1.x;
		y=p1.y;
	} 

	void change(int x)
	{
		*ptr = x;
	}
	void print()
	{
		cout<<*ptr<<endl;
	}

	// Destructor 
	 ~Constructors()
	 {
	 	delete ptr;
	 };
	
};
void DemoConstructorClass(){
	Constructors c(10,15);
	Constructors a=c; // Copy Construtcor
	c.print();
	a.print();
	a.change(2);
	a.print();
	c.print();
}
/*
Types of constructors 
1) Default Constructor 
2) Non parameterised constructor
3) Parameterized Constructor 
4) Copy Constructor 
*/
class Rectangle{
private:
	int length;
	int breadth;
public:
	// same name as class name
	// should not have any return type 
	// Non parameterized 
	Rectangle(){
		cout<<" non parameterized constructor "<<endl;
		length=0;
		breadth=0;
	}
	// parameterised 
	Rectangle(int l,int b)
	{
		cout<<" parameterised called "<<endl;
		set_length(l);
		set_breadth(b);
	}
	// Copy Constructor 
	// We call it by reference because a new copy of rectangle should not be created. It will cause infinite loop.
	// problem with copy constructor . If the object which you are copying has some dynamic allocation then 
	// the copy constructor may not allocate a new dynamic allocation it will point to the object you are copying.
	// Deep copy Constructor 
	Rectangle(Rectangle & r1)
	{
		cout<<" copy constructor "<<endl;
		length  = r1.length;
		breadth = r1.breadth;
	}
	void set_length(int l){

		length=l>0?l:0;
	}
	void set_breadth(int b){
		breadth=b>0?b:0;
	}
	int get_length(){
		return length;
	}
	int get_breadth(){
		return breadth;
	}
	int area(){
		return length*breadth;
	}
	int perimeter(){
		return 2*(length+breadth);
	}


};
void DemoConstructor()
{
	Rectangle r1;
	Rectangle *p1 = new Rectangle(10,15);
	// Copy Constructor called.
	Rectangle p3=r1;
	// Copy constructor not called since we are assigning only address not copying 
	Rectangle *p4= &r1;

	// copy constructor called
	Rectangle p11=*p4; 

}
int main(int argc, char const *argv[])
{
	DemoConstructor();

	return 0;
}