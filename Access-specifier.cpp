#include<iostream>
using namespace std;

class Parent   //parent (or) Super (or) Base class
{
    private:
    int var1;

    public:
    int var2;

    protected:
    int var3;

    // all three things are accessible (public + private + protected)

}

class Child : public Parent  // child (or) Sub (or) Derived class 
{
    //inheritance (public + protected)
}

int main()
{
    // public
    return 0;
}