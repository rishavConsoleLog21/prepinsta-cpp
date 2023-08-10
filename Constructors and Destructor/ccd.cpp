#include<iostream>
using namespace std;

class Parent
{
    private:
    int x,y;

    
    public:

    Parent()        // default Constructor
    {
        cout << " Default constructor called " <<endl;
    }


    Parent(int x1,int y1)           // Parameterised constructor
    {
        x=x1;
        y=y1;

        cout << "Parameterised constructor - called " <<endl;
    }
    
    Parent(const Parent &p1)        //copy constructor      //even though x is private we cant access but we are taking address of p1 
    {
      
         x=p1.x;
         y=p1.y;

        cout << "Copy constructor - called " <<endl;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
};

int main() 
{
    Parent p1(10,20);
    Parent p2(p1);
    Parent p3=p1;
    Parent p4;
    p4=p1;          // Assignment happens

    
    cout<<"P1.x : " <<p1.getX() << " P1.y : " << p1.getY()<<endl;
    cout<<"P2.x : " <<p2.getX() << " P2.y : " << p2.getY()<<endl;
    cout<<"P3.x : " <<p3.getX()<< " P3.y : " << p3.getY()<<endl;
    cout<<"P4.x : " <<p4.getX()<< " P4.y : " << p4.getY()<<endl;
}
