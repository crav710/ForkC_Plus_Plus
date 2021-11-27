#include <iostream>
using namespace std;
/*
template :: 
1) template functions can be used for user define class also but you need to overload respective operators to make them work.
2) Template class :: You need to mention template while defining the functions , also include template in scope resolution.
3) used in collection framework.

*/

// template functions 
template <class T,class R>
void add(T x, R y){

	cout << x+ y <<endl;
}
void DemoTemplateFunction(){

	add(10,11.2);
}

// Class template 
template <class t>
class stack{
private:
	t *stk;
    	int top;
    	int size;
public:
	stack(int z)
    	{
        	size=z;
			top=-1;
			stk=new t[size];
       	}
	void push(t x);
	t pop();
};

template <class t>
void stack<t>::push(t x){
	if(top==size-1)
		cout<<"stack is full";
	else
	{
		top++;
	      	stk[top]=x;
	}

}

template <class t>
t stack<t>::pop(){
	t x=0;
	if(top==-1)
		cout<<"stack is empty"<<endl;
	else
	{
		x=stk[top];
		top--;
	}
	return x;


}

void DemoTemplateclass(){
	stack<int> s(10);
	s.push(10);
	s.push(23);
	s.push(33);

}
int main(int argc, char const *argv[])
{
	// DemoTemplateFunction();
	DemoTemplateclass();
	return 0;
}