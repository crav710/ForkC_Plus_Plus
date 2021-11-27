#include <bits/stdc++.h>
using namespace std;
void introduction_to_references()
{
	/*
	Reference is nothing but an alias of another variable.
	You must Initialize the reference at time of declaration. 

	*/
	// int x  = 10;
	// int &y = x;
	/*
	Lvalue and R value 
	a=x; here x is r value means whatever value is there in x will be assigned to a. rvalue means data , literal or constant.
	x=25 if x is used as l value it means addresss.
	*/ 
	// but the x in &y=x is lvalue .
	// Reference do no occupy any memory . 
	// same reference can not be used for any other variable 
	// example
	int x=10;   

	int *y=&x;   

	int * &z=y;   



//	x is a variable. y is a pointer variable, pointing to x. z is a reference to a pointer variable. int *&z=y; means z is another name of y. now y and z are 2 names of same pointer.




}

int main()
{
	double      x    = 10;
	double      &ref = x ;
	double      *ptr = &x;
	char     *ptr2 = new char;
	// priting address 
	cout<<&ref<<" "<<ptr<<endl;
	// printing val
	cout<<ref<<" "<<*ptr<<endl;
	// size print 
	cout<<sizeof(ptr2)<<" "<<sizeof(x)<<" "<<sizeof(&ref)<<" "<<sizeof(ptr)<<endl;
	int A[]={2,4,6,8,10,12};   

	int *p=&A[3];   

	cout<<p[-2]<<endl;   



}