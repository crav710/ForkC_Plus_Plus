#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void imp_Points()
{
	/*
	1)size of a pointer is independent of its data type. int *p1; or float *p2; or char *p3; 
	all takes 8 bytes in latest compilers. 
	
	2)pointer increment will move the pointer depending on the data type of pointer. 
	  int is 4 bytes so pointer will move by 4 bytes. if pointer is char type then it will move by 1 byte
	
	3)



	

	*/

}
void why_pointers()
{
	// 11_8_2021
	/*
	Our Program can only access the code section or the Stack section. We need pointers to access the Heap section
	from the program . Also we can access other pheriperals like file,keyboard,moniter using pointers in c++.
	*/

}
void Heap_memory()
{
	/*
	we use heap to allocate objects at run time we can increase  or decrese the size of array objects at run time also. 	
	*/
	int *p = new int[10];
	p[1]=101;
	p[0]=100;
	cout<<*(p)<<" "<<*(p+1)<<endl; 
	delete []p;
	p=nullptr;

}
void problems_with_Pointers()
{
	/*
	1) Uninitalized ptr :
		int *ptr ; 
		*ptr = 25;
		// make sure you point the ptr to some location before assign value to the ptr.
		there are 3 ways you can do it.
		1) int x =10; ptr=&x;
		2) ptr =(int *)0x5638; : typecast 
		3) ptr = new int [5]; 

	2) Memory Leak
		heap memory deallocation 
		delete [] ptr ;
		ptr = nullptr;
	3) Dangling Ptr
		void fun(int *q)
		{
			'
			'
			'
			delete []q;
		}
		void main()
		{
			int *ptr = new int [5];
			'
			'
			'
			'
			fun(ptr)
			// will show error because it's already been deleted. 
			cout<<*ptr;
		}
	*/


}
void pointer_arithmetic()
{
	/*Operations of Pointers p++,p--,p=p+k,p=p-k,d=p-q(distance) */

}
void init_pointer(int x)
{
	// 11_8_2021
	// declaration of pointer 
//	alternate way to write :: int *ptr = &x;
	int *ptr;
	// initilaization of pointer 
	ptr = &x;

	cout<<x<<endl;
	cout<<&x<<endl;
	// dereferencing of pointer 
	cout<< *ptr<<endl;
	//
	cout<<ptr<<endl;
	cout<<&ptr<<endl;
}
int main(int argc, char const *argv[])
{
	init_pointer(10);
	Heap_memory();
	
	return 0;
}