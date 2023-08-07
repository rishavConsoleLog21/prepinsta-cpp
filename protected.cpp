#include<iostream>
using namespace std;

class Shape
{
    protected:
    int length,breadth;

    public:
    void setLength(int len)
    {
        length=len;

    }
    void setBreadth(int bre)
    {
        breadth=bre;
    }
};

class Rectangle : public Shape
{
    public :
    int area()
    {
        return length*breadth;
    }
    
};

int main()
{
    Rectangle rect1;
    rect1.setLength(10);
    rect1.setBreadth(20);

    cout << "the area of rectangle is " << rect1.area() << endl;
    return 0;

}