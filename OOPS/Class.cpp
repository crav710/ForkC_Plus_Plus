#include <iostream>	
using namespace std;

class Rectangle
{
	// class functions are present in code section. Variables in stack/heap .
	// Data Hiding is important Because it protects from mishandling of data variables. If data variables are mishandled 
	// then the functionality of class gets curropted . So always we should hide class variables.  
public:
	//properties 
	int length;
	int breadth;

	int area(){
		return length*breadth;
	}
	int perimeter(){
		return 2*(length+breadth);
	}
};

void DemoClassStack()
{
	Rectangle r1,r2;
	// How much data does r1 occupies in stack ? -- (Data members occupy space , Functiondo not )
	// ans - 8 bytes 
	cout<<"Size of R1 :"<<sizeof(r1)<<endl;
	// define length and breadth 
	r1.length  =10;
	r1.breadth =5;

	cout<<"area:: "<<r1.area()<<endl;

	// 
	r2.length  =15;
	r2.breadth =10;
	cout<<"area:: "<<r2.area()<<endl;




}

void DemoClassPointer()
{
	Rectangle r1; // stack variable 
	Rectangle  *p; // stack pointer 
	cout<<"size r1 "<<sizeof(r1)<<" size ptr "<<sizeof(p)<<endl;

	p = &r1; 
	p->length=10;
	p->breadth=5;
	cout<<p->area()<<endl; // we use -> for dereferencing the pointer funct or class variables .

	/// Using heap Memory 

	Rectangle *ptr =new Rectangle;
	cout<<"Pointer size :: "<<sizeof(ptr)<<endl;
	ptr->length=10;
	ptr->breadth=5;
	cout<<ptr->area()<<endl;

	delete ptr;

	ptr=nullptr;



}


int main(int argc, char const *argv[])
{
	DemoClassPointer();

	return 0;
}