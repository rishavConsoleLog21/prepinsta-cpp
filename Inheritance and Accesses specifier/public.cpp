#include<iostream>
using namespace std;
class Rectangle 
{
    public:
    int length,breadth;
    
    int area()
    {
        return length*breadth;
    }

};
int main()
{
    Rectangle recObj; // recobj (object of rectangle)
    recObj.length=10;
    recObj.breadth=20;


    cout << "The area of recatngle is" << recObj.area()<<endl;
    return 0;
}
