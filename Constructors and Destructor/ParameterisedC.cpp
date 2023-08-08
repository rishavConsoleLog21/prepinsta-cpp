#include<iostream>
using namespace std;
class Demo
{
    public:
    int i;
    float f;

    Demo(int val, float val2)  
    {
        i=val;
        f=val2;
    }
};

int main()
{
    Demo demo(1000,20.3);        // Parameterised constructor
    Demo demo2(2000,5.2);

    cout << demo.i << "&" << demo.f <<endl;
    cout << demo2.i << "&" << demo2.f <<endl;
}