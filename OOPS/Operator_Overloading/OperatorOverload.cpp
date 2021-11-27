#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*

add two complex number using operator Overloading.
https://www.geeksforgeeks.org/types-of-operator-overloading-in-c/
https://www.usna.edu/Users/cs/choi/si204/lec/l40/lec.html
https://stackoverflow.com/questions/26251510/passing-an-object-by-reference-to-overloaded-operator-c
*/
class ComplexNo
{
public:
	int mReal,mImg;
	ComplexNo(){

	}
	ComplexNo(int real,int img)
	{
		mReal = real; 
		mImg  = img;
	}
	// returnType className :: operator op(Argument List) 
    ComplexNo  operator + (const ComplexNo c1)
    {
    	ComplexNo temp;
    	temp.mReal = this->mReal + c1.mReal;
    	temp.mImg  = this->mImg  + c1.mImg;
    	return temp;
    }  
    void printComplex()
    {
    	cout<<this->mReal<<"+i"<<this->mImg<<endl;
    }
    friend ComplexNo operator - (const ComplexNo c1,const ComplexNo c2 );
    // always declare friend class for ostream 
    // 
    friend ostream  &operator << (ostream &out , const ComplexNo &c1 )
    {
    	out<<c1.mReal;
    	out<<" +i "<<c1.mImg<<endl;
    	return out;
    }

};
// using friend function declaration 
ComplexNo operator - (const ComplexNo c1,const  ComplexNo  c2 )
{
	ComplexNo tmp;
	tmp.mReal = c1.mReal - c2.mReal;
	tmp.mImg  = c1.mImg  - c2.mImg;

	return tmp;
}


int main()
{

	ComplexNo c1(1,2);
	ComplexNo c2(2,4);
	ComplexNo c3,c4;
	c3=c1+c2;
	c4=c2-c1;

	// print values 
	// c3.printComplex();
	// using ostream overloading 
	cout<<c3<<endl;
	cout<<c4<<endl;
	return 0;

}