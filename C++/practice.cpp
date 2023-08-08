#include<iostream>
#include<string.h>
using namespace std;

class student
{
    private:
    int rollno ;
    char name[20];

    public:

    //setters
    void setrollno(int r) 
    {
        rollno=r;
    }
    //getters
    int getrollno() 
    {
        return rollno;
    }
};

int main()
{
    student s1;
    s1.setrollno(10);
    cout << "the roll no of student " << s1.getrollno() <<endl;
    return 0;
}