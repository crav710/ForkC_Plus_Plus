#include <iostream>
using namespace std;
/*
namespaces ::
Namespaces are used for removing name conflicts.
*/
namespace first{
	void func(){
		cout<<"first"<<endl;
	}
}
namespace second {
	void func(){
		cout<<"second"<<endl;
	}

}
int main(int argc, char const *argv[])
{
	first::func();
	second::func();
	return 0;
}
