#include<iostream>
using namespace std;
  
class Test
{
    int *ptr;
public:
    Test (int i = 0){
        cout<<"con called :: "<<i<<endl; 
        ptr = new int(i); 
    }
    void setValue (int i) { *ptr = i; }
    void print()          { cout << *ptr << endl; }
    Test (const Test &t)
    {
        cout<<"Copy Constructor called"<<endl;
        *ptr = *(t.ptr);
    }
    Test & operator = (const Test &t);
    // Test (const Test &t){*ptr=t};
    Test  operator + ( const Test &t);
    ~Test()
    {
        delete ptr;
    }

};

Test  Test::operator + (const Test &t)
{
    cout<<"operator + called "<<endl;
    Test res;
    *(res.ptr) = *(ptr) + *(t.ptr);
    return res;
}
Test & Test::operator = (const Test &t)
{
    cout<<"operator = called "<<endl;
    if (this != &t)
    {
        cout<<"inside"<<endl;
        *ptr = *(t.ptr);
    }
    return *this;
}
  
int main()
{
    Test t1(5),t2;
    t2 = t1;
    Test t3 = t1;
    getchar();
    return 0;
}