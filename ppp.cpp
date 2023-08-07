#include<iostream>
using namespace std;

class A
{
    public :
    int x;

    protected :
    int y;
    
   private :
    int z;
};

class B : public A
{
    //x is inherited and public in child
    //y is inherited and protected in child
    //z is not inherited and not accessible
};

class c : protected A
{
    //x is inherited but it's a "protected member" so we can't access it directly.
    //y is inherited and stays protected
    //z is not inherited and not accessible
};

class D : private A
{
    //x is inherited but becomes "private"
    //y is inherited but becomes private
    //z is not inherited and not accessible
};

class E : private D
{
    //ntg is inherited
};

class F : private c
{
    private x;
    private y;
};

int main() 
{
    //x is accessible
    //y is not accessible
    //z is not accessible

    A a;
    B b;
    C c;
    D d;

    a.x=1;   // work as x is public
    a.y=1;   // Doesn't work as y is protected
    a.z=1;   // Doesn't work as z is private

    b.x=1;      //work as x is public in class B
    b.y=1;      //Doesn't work as y is protected in class B
    b.z=1;      //Doesn't work as z is not inherited

    c.x=1;      //Doesn't work as x is protected in class c
    c.y=1;      //Doesn't work as y is protected in class C
    c.z=1;      //Doesn't work as z is not inherited

    d.x=1;      //Doesn't work as x is private in class C
    d.y=1;      //Doesn't work as y is private in class C
    d.z=1;       //Doesn't work as z is not inherited    

}