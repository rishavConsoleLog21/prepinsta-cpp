#include<iostream>
using namespace std;

class Parent
{   
    int x;
    public:
    Parent(int i)
    {
        x=i;
        cout<< "The value of x is = "<< x << " Parent Constructor Called"<<endl;        //1
    };
    ~Parent()
    {
        cout<<"Parent Destructor Called"<<endl;         //4
    };
};

class Child : public Parent
//Child class inherits from parent Class.
{  
    int y ;
    public:
    Child(int a):Parent(a)
    {
        y=a;
        cout<< "The value of y is = "<< y << " Child constructor called"<<endl;         //2
    };
    ~Child()
    {
        cout<<"Child destructor called"<<endl;          //3
    }
};

int main()
{
    Child obje(10);//object of child class is created
    return 0;
}
