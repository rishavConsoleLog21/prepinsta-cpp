#include<iostream>
using namespace std;

class A
{
    int i;      //automatically it is private

    public:
    // default
    A();
    
};

A :: A()        // constructors
{
    
        cout << " The constructor was called " <<endl;      //2
    
}

int main() 
{
    cout << " Before creating object " <<endl;   //1
    A a_obj;
    cout << " After creating object " <<endl;       //3
}