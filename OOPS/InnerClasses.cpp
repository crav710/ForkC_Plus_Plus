#include <iostream>
using namespace std;
/*
Nested or Inner classes::
-> writing a class within a class. 
-> for reducing the complexity of bigger class we can write smaller classes.
-> Inner class can access member of outer class only if they are static.
-> Outer class can create an object of inner class inside the class.  using this object all memeber of class can be accessed.
-> Example linked list;

*/

class outer
{
public:
	void fun()
	{
		i.display();
	}
	class inner
	{
	public:
		void display()
		{
			cout<<"display of inner"<<endl;
		}
	};
	inner i;
};

void DemoInnerclass()
{
	outer::inner i;
	i.display();
	outer c;
	c.fun();
}
int main(int argc, char const *argv[])
{
	DemoInnerclass();	
	return 0;
}