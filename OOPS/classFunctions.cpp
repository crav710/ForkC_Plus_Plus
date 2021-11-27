#include <iostream>
using namespace std;

#include <iostream>	
using namespace std;

class Rectangle
{
private:
	//properties 
	int length;
	int breadth;
public:
	Rectangle();// constructor 
	Rectangle(int l,int b); // parameterised 
	Rectangle(Rectangle &a); // Copy constructor 
	void set_length(int l);
	void set_breadth(int b);// Mutators 
	int get_length();
	int get_breadth();// Accessors 
	int area();
	int perimeter();//fecilitator 
	int isSquare();	// inspector function 
	~Rectangle(); // Destructor function
};
// Scope resolution Function.
/*
1. If the scope resolution is used the code is generated separately .
2. If the scope resolution is not used then the code is generated along with main.
3. function inside the class become inline function
*/
// How to create inline function
/*
1. define inside class 
2. inline keyword before function defination.
*/
/*
this pointer.
1.To avoid name ambiguity.
2. it provides detail of class 

*/
Rectangle::Rectangle(){
	length=1;
	breadth=1;
}
Rectangle::Rectangle(int length,int breadth)
{
	this->length=length;
	this->breadth=breadth;
}
Rectangle::~Rectangle()
{
	cout<<"Destructor"<<endl;
}

/*
		Struct vs Class 
		1. Struct variables and functions are all public. 
*/
// In c struct can not use function.

struct Demo{

	int x;
	int y;
	void Display(){
		cout<<x<<" "<<y<<endl;
	}
};
void DemoStructvsClass(){
	Demo d;
	d.x=10;
	d.y=5;
	d.Display();
}
int main(int argc, char const *argv[])
{
	DemoStructvsClass();
	return 0;
}