#include <iostream>
using namespace std;
/*
Friend Operator Overloading  :: someone else will do the operator not the caller not the reciever. 
		-> Friend function is written outside the class without using scope resolution. 
		-> The friend function does not belong to a class but it is a friend of class and act as independent function.
		-> Global function acting as operator overloaded

The operators ‘<<' and '>>' are called like 'cout << ob1' and 'cin >> ob1'. 
So if we want to make them a member method, then they must be made members of ostream and istream classes, 
which is not a good option most of the time. Therefore, these operators are overloaded as global functions with 
two parameters, cout and object of user defined class and friend functions are helpful
to perform this type of operations in operator overloading.



*/
class Complex
{
public:
	int real;
	int img;
	Complex(int r=0,int i=0){
		real=r;
		img	=i;
	}	
	Complex operator+(Complex c1)
	{
		Complex temp;
		temp.real = real + c1.real;
		temp.img  = img  + c1.img;
		return temp;
	}
	// Complex add(Complex c1,Complex c2);
	friend Complex operator-(Complex c1,Complex c2);
	// takes two parameters. ( it will return reference to oStream)
	// it takes two different type of objects so it can't belong to complex class.
	friend ostream & operator<<(ostream &out,Complex &c1);
};
// without returning reference it can also work but back to back call won't work. cout<<c1<<endl; endl will show error.
ostream & operator<<(ostream &out,Complex &c1)
{
	out<<c1.real;
	out<<"+i"<<c1.img;
	return out;
}


Complex operator-(Complex c1,Complex c2){
	Complex temp;
	temp.real = c2.real - c1.real;
	temp.img  = c2.img  - c1.img;
	return temp;	
}
void DemoOperatorOverloading()
{
	Complex c1(10,15);
	Complex c2(11,5);
	Complex c3= c1+c2;

	cout<<c3.real<<"+i"<<c3.img<<endl;
}
void DemoFriendOperatorOverloading(){
	Complex c1(10,15);
	Complex c2(11,5);
	Complex c3= c1-c2;
	cout<<c3<<endl;
	// You can also write this way like a function.
	operator<<(cout,c3);

}
/*
TODO AssignmentOverloading vs Copy Constructor 
https://www.geeksforgeeks.org/copy-constructor-vs-assignment-operator-in-c/

*/
int main(int argc, char const *argv[])
{
	DemoOperatorOverloading();
	DemoFriendOperatorOverloading();
	return 0;
}