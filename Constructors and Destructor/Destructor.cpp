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
    
    A object1; // constructor called for obj1  // It will go to constructor A()                                     //1 

    int x=1;
    if(x)       // condition
    {
        A object2;      // constructor called for obj2  // Again it will go to constructor A()                      //2 
    }   //Destructor called for obj2  // it will go to destructor ~A()                                              //3   

    cout << "Checking" << endl;                                                                                     //4
    return 0;
}
// Destructor called   // again  it will go to destructor ~A()                                                      //5  