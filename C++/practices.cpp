#include<iostream>
#include<string.h>
using namespace std;

static int i=0;
class Student
{
    private:
    int rollno;
    char name[30];
    
    public:
     // setters
     void setRollno(int r)
     {
        rollno=++i;
     }
     //getters
     int getRollno()
     {
        return rollno;
     }
     //setters
     void setName(char *n)
     {
        strcpy(name,n);
     }
     //getters
     char *getName()
     {
        return name;
     }
};

int main()
{
    Student s1,s2;
   
    s1.getRollno();
    s2.getRollno();

    char temp1[20]="PAvi", temp2[20]="Rishav";                              //name
    s1.setName(temp1);
    s2.setName(temp2);

    cout<< " The rollno of " << s1.getName()<<" is : "<< s1.getRollno()<<endl;
    cout<< " The rollno of " << s2.getName() << " is : "<< s2.getRollno()<<endl;
    
   
    return 0;
 
}