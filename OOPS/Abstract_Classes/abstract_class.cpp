#include<iostream>
using namespace std;
class A{
public:
void a();
int x;
A()
{
	cout<<"a"<<endl;

}
A(int X)
{
	x=X;
	cout<<"A "<<endl;
}
virtual void print()
{
	cout<<"aa"<<endl;
}

};
class B: public A
{
public:
int y ,z;
B(){
 cout<<"B ";
}
B(int X):A(X)
{
	this->y=X;
	cout<<"aB "<<x<<endl;
} 

void print()
{
	cout<<x<<endl;
}

};

int main()
{
	A *a = new B(1);
	B c;
	A *d = &c;
	a->print();
	cout<<a->x;//<<" "<<d->x<<endl; 
	return 0;
}