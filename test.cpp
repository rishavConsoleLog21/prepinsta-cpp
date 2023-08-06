#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length,breadth;

    public:

    //setters
    void setLength(int len)
    {
        length=len;
    }
    //setters
    void setBreadth(int bre)
    {
        breadth=bre;
    }
    //getters
    int getLength()
    {
        return length;
    }
    //getters
    int getBreadth()
    {
        return breadth;
    }
    
    int area()
    {
        return length*breadth;
    }

    };
int main()
{
    Rectangle recObj;
    recObj.setLength(10);
    recObj.setBreadth(20);

    cout << "The length is " << recObj.getLength()<< endl;
    cout << "The breadth is " << recObj.getBreadth()<< endl;
    cout << "The area of recatngle is" << recObj.area()<<endl;
    return 0;
}