#include <iostream>
using namespace std;
/*
Macros ::
1) Instruction to compiler. 
2) 
*/
#define PI 3.1245 //symbilic constants 
#define SQR(x) (x*x)
#define MSG(x) #x 
// #ifndef PI
	#define PI 3.1245
// #endif 

int main(int argc, char const *argv[])
{
	cout<<PI<<endl;
	cout<<SQR(5)<<endl;
	cout<<MSG(hello)<<endl;
	return 0;
}