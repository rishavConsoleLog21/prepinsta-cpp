#include<iostream>
using namespace std;

class Parent
{
    public:
    Parent()
    {
        cout<<"Parent Constructor Called"<<endl;        //1
    };
    ~Parent()
    {
        cout<<"Parent Destructor Called"<<endl;         //4
    };
};

class Child : public Parent
//Child class inherits from parent Class.
{   
    public:
    Child()
    {
        cout<<"Child constructor called"<<endl;         //2
    };
    ~Child()
    {
        cout<<"Child destructor called"<<endl;          //3
    }
};

int main()
{
    Child obje;//object of child class is created
    return 0;
}


/*Parent Constructor Called
Child constructor called
Child destructor called
Parent Destructor Called*/








#include<iostream>
using namespace std;

class Parent
{
    public:
    Parent()
    {
        cout<<"Parent Constructor Called"<<endl;        //1
    };
    ~Parent()
    {
        cout<<"Parent Destructor Called"<<endl;         //6
    };
};

class Child : public Parent
//Child class inherits from parent Class.
{   
    public:
    Child()
    {
        cout<<"Child constructor called"<<endl;         //2
    };
    ~Child()
    {
        cout<<"Child destructor called"<<endl;          //5
    }
};

class GrandChild : public Child
//Child class inherits from parent Class.
{   
    public:
    GrandChild ()
    {
        cout<<"GrandChild  constructor called"<<endl;         //3
    };
    ~GrandChild ()
    {
        cout<<"GrandChild destructor called"<<endl;          //4
    }
};

int main()
{
    GrandChild  obje;//object of GrandChild  class is created
    return 0;
}
