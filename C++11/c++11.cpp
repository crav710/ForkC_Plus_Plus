#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
C++ 11 Features ::

Auto ::
	-> if we don't know the data type we can define the variable as auto.
	-> Can be used instead of iterator.
	-> 
decltype(x)
	-> used to declare another variable of x data type.

Final keyword:
	-> Restrict Inheritance 
	-> Final function cannot be overrided

Lambda expression ::
	-> Unnamed functions 
	-> syntax :: [capture_list](parameter_list)-> returntype {body};
	-> to call just mention () after }
	-> Capture list -> we can use this list to access the members of a function inside which lamda expression is defined. 
		-> to edit the members we need to pass the members as reference in capture list.
		-> & if you want to access everything use & in capture list.
	-> 
Inclass initializers and Delegation of constructor ::
	-> now you can initialize varibale inside class.
	-> 

Ellipsis ::
	-> variable no of arguments in a function.
	-> 

*/
float fun(){
	return 3.14;
}
class parent{ //final{
	virtual void show() {//final{

	}
};
class child : parent{ // throws error 
	void show(){

	}
};
class test
{
	int x=10;
      	int y=13;
public:
	test(int a,int b)
	{
		x=a;
	       	y=b;
	}
    	test():test(1,1) // Delegation of constructor 
	{}
};

template <class T>
void func(T p){
	p(10,20); // calling a function inside the function, passing function as parameter.
}
// ellipsis 
int sum(int n,...)
{
	va_list list; // takes the complete list 
	va_start(list,n); // takes n list 
	int x;
	int s=0;
	for(int i=0;i<n;i++)
	{
		x=va_arg(list,int);
		s+=x;
	}
	return s;
}


void DemoC11Features(){

// use of auto
	double d=12.3;
	int i =9;
	auto x=2*d+i; // double 
	cout<<x<<endl;
//	return type from function
	auto x1 =  fun();
	cout<<x1<<endl; 


// use of lamda expression 

	auto f =	[](int x,int y){cout<<"sum is "<<x+y<<endl;};
	f(10,30);
	func(f);
// 
	cout<<sum(4,1,2,3,4)<<endl;




}
int main(int argc, char const *argv[])
{
	DemoC11Features();
	return 0;
}