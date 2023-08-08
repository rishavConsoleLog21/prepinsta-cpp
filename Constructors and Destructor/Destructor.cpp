#include<iostream>
using namespace std;

class A
{   
    public:
    A()
    {
        cout << "Constructor was called " <<endl; 
    }

    ~A()
    {
        cout<<"Destructor was called "<< endl ; 

    }
};

int main()
{
    
    A object1; // constructor called for obj1 //1

    int x=1;
    if(x)
    {
        A object2;      // constructor called for obj2  //2
    }   //Destructor called for obj2 //3

    cout << "Checking" << endl; //4
    return 0;
}
// Destructor called //5