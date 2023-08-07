#include<iostream>
#include<string.h>
using namespace std;
static int i=0;
class Student
{
    private: 
    int rollNo;
    char name[20];

    public:

    //setters
    void setrollNo()
    {
        rollNo=++i;
    }
    
    //getters
    int getrollNo()
    {
        return rollNo;
    }

    //charcters 
    //setters
    void setname(char *n)
    {
        strcpy (name, n);
    }
    //getters
    char *getname()
    {
        return name;
    }
    
 };

 int main()
 {
    Student s1,s2;
    s1.setrollNo();
    s2.setrollNo();

    char temp1[20]="PAvi", temp2[20]="Rishav";

    
    s1.setname(temp1);
    s2.setname(temp2);

    cout<< " The rollno of " << s1.getname()<<" is : "<< s1.getrollNo()<<endl;
    cout<< " The rollno of " << s2.getname() << " is : "<< s2.getrollNo()<<endl;
    
   
    return 0;
 }
