#include <iostream>
using namespace std;
  
  /*

We must know following things before we start overloading these operators.
1) cout is an object of ostream class and cin is an object istream class
2) These operators must be overloaded as a global function. 
   And if we want to allow them to access private data members of class, we must make them friend.

  */
class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)
    {  real = r;   imag = i; }
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in,  Complex &c);
};

ostream & operator << (ostream &out,const Complex &c)
{
	out<< c.real;
	out<< "+i" << c.imag <<endl;
	return out;
}

istream & operator >> (istream &in,Complex &c)
{
	cout<<"Enter real part ";
	in>>c.real;

	cout<<"Enter Imaginary part";
	in>>c.imag;

	return in;
}


int main()
{
   Complex c1;
   cin >> c1;
   cout << "The complex object is ";
   cout << c1;
   return 0;
}  