#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Smart pointers ::
-> We need to delete the memory taken from heap. Smart pointer do it automatically. 
	-> unique_ptr  -> takes care for deallocation of object.
				   -> Upon an object at one time one pointer will be pointing. 
				   	  However you can transfer the pointer by deleting thr first one.
	-> shared_ptr  -> More than one pointer can point to same object. It maintains a reference counter 
				   -> use_count()
	-> weak_ptr    -> same as shared but does not have reference count. 
				   -> if object are holding the other object and requesting of other object a deadlock can be formed.
				   		in that case weak pointer can be used. 



*/
class rectangle
{
	int length;
      	int breadth;
public:
	rectangle(int l,int b)
	{
		length=l;
	      	breadth=b;
	}
     	int area()
	{
		return length*breadth;
	}
};
void DemoUniquePtr()
{
	unique_ptr<rectangle> ptr(new rectangle(10,5));
	cout<<ptr->area()<<endl;
	unique_ptr<rectangle> ptr2;
	ptr2=move(ptr); // Move ptr 
	cout<<ptr2->area();
	// cout<<ptr->area();   // error or seg fault
}
void DemoSharedPtr(){
	shared_ptr<rectangle> ptr(new rectangle(10,5));
	cout<<ptr->area()<<endl;
	shared_ptr<rectangle> ptr2;
	ptr2=ptr;
	cout<<"ptr2 "<<ptr2->area()<<endl;
	cout<<"ptr "<<ptr->area()<<endl;
	cout<<ptr.use_count()<<endl;

}
int main(int argc, char const *argv[])
{
	DemoUniquePtr();
	DemoSharedPtr();

	return 0;
}