#include <iostream>
#include <string>
using namespace std;
int y=0;
void function()
{
	/*
	function memory layout :
	all function machine code resides in code section.
	The variables take space in stack till the point the function is returned.Except the heap memory it needs
	to be deallocated by function itself.
	returntype funtionname ( datatype x,datatype y ) -> it is called header of function or signature of function.
	*/

}
//1. write a sum() function here to add 2 integer
int sum(int x,int y){
    return x+y;
}
//2. write a sum() function here to add 2 floats
float sum(float x,float y){
    return x+y;
}
// 3. write a sum() function here to add 3 integer
int sum(int x,int y,int z){
    return x+y+z;
}
// int sum(int x,int y,int z=0)
// {
// 	return x+y+z;
// }
void functionOverloading()
{
	/*
	Same name with diff args list;
	same name with diff data type;
	*/
	/*
	functions which can not be overloader ;
	1) differnt return type same arg list 
	2)
	*/
	// by deafault 12.9 is double and 12.9 f for float

    cout<<sum(10,5)<<endl;
    cout<<sum(12.9f,8.3f)<<endl;
    cout<<sum(10,20,30)<<endl;
}
void swapbyValue(int x,int y)
{
	int temp = x;
	x=y;
	y=temp;
}
void swapbyAddress(int * a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swapbyReference(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int * returnAddress()
{
	int *ptr = new int[2];
	ptr[0]=1;
	ptr[1]=2;
	return ptr;
}
int & returnByReference(int &a)
{
	return a;
}
void functionpassingArguments()
{
	int x=10,y=20;
	// passby value (does not work because the swap function action of record gets destroyed in swap function end.)
	swapbyValue(x,y);
	cout<<x<<" "<<y<<endl;
	// pass by address
	swapbyAddress(&x,&y);
 	cout<<x<<" "<<y<<endl;
 	// Swap by Reference (when you use the call by refernece then the function automatically becomes inline function)	
 	swapbyReference(x,y); // Avoid writing complex code in call by reference otheriwse compiler would change it tocall by address
 	cout<<x<<" "<<y<<endl;
 	// Return by address method;
 	int *p=returnAddress();
 	cout<<*(p)<<" "<<*(p+1)<<endl;
 	// return by reference 
 	returnByReference(x)=19;
 	cout<<x<<endl;

}
template  <class T>
T Max(T x,T y)
{
    if(x > y)
    {
        return x;
        
    }
    else
    {
        return y;
    }
}


// function Template 
void functionTeamplate()
{
	/*
	if only data type is different we use functions.
	// both argument should be same for same T.

	*/
	    cout<<Max(10,5)<<endl;
	    cout<<Max(12.5f,17.3f)<<endl;


}
void staticVarible()
{
	static int x;
	x++;
	cout<<x<<endl;

}
void functionPointer()
{
	void (*fp)();
	fp = staticVarible;
	(*fp)();
}
int main(int argc, char const *argv[])
{
	// functionOverloading();
	// functionTeamplate()	;
//	functionpassingArguments();
	// staticVarible();
	// staticVarible();
	functionPointer();
	return 0;
}