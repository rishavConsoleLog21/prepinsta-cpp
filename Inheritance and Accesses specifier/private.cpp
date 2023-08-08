#include<iostream>
using namespace std;
class Rectangle 
{
    private:
    int length,breadth;
    
    public:
    void setLength(int l);
    void setBreadth(int b);
    int area();
    
};

void Rectangle : setLength(int l)
    {
        length=l;
    }

void Rectangle : setBreadth(int b)
    {
        breadth=b;
    }
int Rectangle:area()
    {
        return length*breadth;
    }


int main()
{
    Rectangle recObj; // recobj (object of rectangle)
    recObj.setLength(10);
    recObj.setBreadth(20);


    cout << "The area of recatngle is" << recObj.area()<<endl;
    return 0;
}