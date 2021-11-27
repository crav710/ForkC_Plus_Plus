#include <iostream>
using namespace std;

class Smartptr
{
	int *ptr;
public:
	// https:// www.geeksforgeeks.org/g-fact-93/
	explicit Smartptr(int *p=NULL){ptr=p;}

	~Smartptr(){delete (ptr);}

	// derefrencing operator 
	int & operator*()
	{
		return *ptr;
	}
};

int main(int argc, char const *argv[])
{
	SmartPtr ptr(new int());
    *ptr = 20;
    cout << *ptr;
  
	return 0;
}