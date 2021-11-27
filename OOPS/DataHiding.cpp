#include <iostream>	
using namespace std;

class Rectangle
{
	// (Readable)Accessors and (Writeable)Mutators -> property Functions.
	// Data Hiding is important Because it protects from mishandling of data variables. If data variables are mishandled 
	// then the functionality of class gets curropted . So always we should hide class variables.  
private:
	//properties 
	int length;
	int breadth;
public:
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

void DemoAccessorsandMutators()
{
	Rectangle *r1 = new Rectangle();
	r1->set_breadth(10);
	r1->set_length(5);
	cout<<"Area :: "<<r1->area()<<endl;

}
int main(int argc, char const *argv[])
{
	DemoAccessorsandMutators();
	return 0;
}