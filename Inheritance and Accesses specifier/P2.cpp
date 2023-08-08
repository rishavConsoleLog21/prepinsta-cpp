//Write a C++ program to demonstrate the inheritance in object oriented programming (oops) by taking the value of 
//private variable 10, protected variable 20 and public variable 30 , code should print the values of all variables 
//but should not print the value of private member and shows private member cannot be accessed. 
//Output : Private value = private member cannot be accessed Protected value = 20 Public value = 30  

#include<iostream>
using namespace std;

class Parent
{
    private:
    int pvt_var=10;

    protected:
    int prot_var=20;

    public:
    int pub_var=30;
};

class Child : public Parent  // get the value of protected value
{
    public:
    int prot_get()
    {
        return prot_var;
    }
};

int main()
{
    Child obj1;
    cout<<" Private = " << "private member cannot be accesed" << endl;     //  "private member cannot be accesed"
    cout<<" Protected = " << obj1.prot_get() << endl;
    cout<<" Public = " << obj1.pub_var << endl;
    return 0;
}