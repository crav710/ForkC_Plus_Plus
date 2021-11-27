#include <bits/stdc++.h>
using namespace std;
//https://www.javatpoint.com/cpp-friend-function

// 
class B; 
class A
{
	int x;
public:
	A()
	{

	}
	A(int X)
	{
		x=X;
	}
	void print(){
		cout<<x<<endl;
	}
	friend void printBoth(A a,B b);

};
class B
{

	int x;
public:
	B()
	{

	}
	B(int X)
	{
		x=X;
	}
	void print(){
		cout<<x<<endl;
	}
	friend void printBoth(A a,B b);

};

//Friend Function 

void printBoth(A a ,B b)
{
	int sum =a.x+b.x; 
	cout<<sum<<endl;

}

int main()
{
	A a(5);
	B b(10);
	a.print();
	b.print();
	printBoth(a,b);

	return 0;
}