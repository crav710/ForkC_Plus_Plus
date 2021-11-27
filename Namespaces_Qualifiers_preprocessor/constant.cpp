#include <iostream>
using namespace std;
/*

constant Qualifier :: 

1) Constant Identifier cannot be modified throughout the program. Use it when you need to define constant locally.
2) Pointer to a constant data type:: Pointer can point to a data but cannot modify it.
*/
class constant
{
public:
	int x=10;
	int y=10;
	// if you don't want to modify data members of class then make the function as constant. 
void display() const{
	// x++;// will show error.
	cout<<x<<" "<<y<<endl;

}
	
};
// if you don't want the func to modify the value of x 
void func(const int &x,int &y){

}
void DemoConst()
{
	// usage 1 
	const int x =10;// it becomes read only  variable 
	// x++; // will show error.
	cout<<x<<endl;
	int z=10;
	int y =10;

	// usage 2 
	// int const *ptr = &y; this will also work 
	const int *ptr = & y; // pointer to integer consant  &y becomes read only location.
	// ++*ptr; // will show error
	ptr = &z; // allowed as usual operation
	ptr =&x;
	cout<<*ptr<<endl;
	// int *p=&x;// will throw error .cannot assign address of const variable to int pointer.
	
	// usage 3 
	int *const ptr1 =&y;// pointer constant  ptr becomes read only location. You can't modify ptr now
	// ptr1 =&x ; // will throw error. 
	++*ptr1; // this will work
	cout<<*ptr1<<endl; 
	// usage 4 
	const int *const ptr2 = &y; // pointer const to integer const ;
	// ptr2 =&x ; // will throw error. 
	// ++*ptr2; //  will throw error.
	
	constant c;
	c.display();






}
int main(int argc, char const *argv[])
{
	DemoConst();
	return 0;
}