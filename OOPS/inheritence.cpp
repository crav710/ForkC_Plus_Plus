#include <iostream>
using namespace std;
/*
	isA relationShip  -> derived is a Base class . Cubiod is a Rectangle .
	HasA relationShip -> Other class has a class. 

	// Access Specifiers
	1. Public    : 
		You can access public upon object.
	2. Private   : 
		You cannot access private upon object.
		Derived class cannot access private variables.
	3. Protected : 
		You cannot access protected upon object.
		Derived class can access protected variables.
		(design Sharing to company)
	Types of Inheritance::
	1. Single Inheritance  		: Rectangle <- Cuboid
	2. Heiarchical Inheritance 	: Square-> Shape <- Rectangle 
	3. Multi Level Inheritance  : Point <- Circle <- Cylinder 
	4. Multiple Inheritance     : Phone <-SmartPhone-> Camera 
	5. Hybrid Inheritance :: (mixing 2 and 4)(multi path inheritance)
					B->A<-C (2)
					B<-D->C (4)
		A function in A will be there in D via B and C.
		Issue :: 
		1. Which path to take ? 
		Solution::
		Virtual base class 
		->https://www.geeksforgeeks.org/virtual-base-class-in-c/#:~:text=Virtual%20base%20classes%20are%20used,hierarchy%20when%20using%20multiple%20inheritances.
	
	Ways of Inhertiance:
	1 public 	:  
	2 private 	: public and protected becomes private in derived class. 
	3 protected : public becomes protected in derived class. Further public won't be available
	examples :: 
	car manufactures sells publically 
	car manufacture sells protectly 

	generalization :: Bottom Up :: Extending from a virtual thing . Square->Shape <- Rectangle
	Specialization :: Top Down  :: Extending from a real world item. Innova <- fortuner .
	



*/

class Rectangle
{
private:
	int length;
	int breadth;
protected:
	int thickness;
public:
	int name;
	Rectangle(){
		cout<<"Base Constructor"<<endl;
	}
	Rectangle(int l,int b)
	{
		cout<<"base constructor param"<<endl;
		set_length(l);
		set_breadth(b);
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
class Cuboid:public Rectangle
{
private:
	int height;
public:
	Cuboid(){
		cout<<" Inherted constructor "<<endl;
	}
	// base class parameterised constructor called. 
	// first the base class constructor is executed then derived class. To used param base class constructpr we need to 
	// invoke it from derived class.
	Cuboid(int a,int b,int h):Rectangle(a, b)
	{
		cout<<" Inherted constructor parameter "<<endl;
		height=h;
		// set_breadth(b); // can't directly change breadth because it is private.
		// set_length(l);
	}
	int get_height(){
		return height;
	}
	void set_height(){
		height=height>0?height:0;
	}
	int getVolume(){
		return (height*get_height()*get_breadth());
	}

};
void DemoInheritance(){
	Cuboid c(10,15,3);
	cout<<"length:: "<<c.get_length()<<endl;
	cout<<"volume:: "<<c.getVolume()<<endl;
	cout<<"area  :: "<<c.area()<<endl;


}
void DemoAccessSpecifiers(){

}
int main(int argc, char const *argv[])
{
	DemoInheritance();	
	return 0;
}