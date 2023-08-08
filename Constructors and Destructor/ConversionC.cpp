#include<iostream>
using namespace std;

class Parent
{
    private:
    int x,y;
    
    public:
    void Display()
    {
        cout << "The values are : " << x <<" & " << y <<endl;
    }

    //At the time of parameterised constructor definition, I am initialising one of the value
    // either 0 or max 1 argument non initialised
    /*first one shd be non initialised  
    * second one should be initialised
   
    Parent(int a=0, int b)         >> wrong
    Parent(int a, int b)          >> wrong
    Parent(int a)
    Parent(int a=0)
    Parent(int a=0, int b=0)
    Parent(int a, int b=0)
    */
    Parent(int a, int b=0) // initially b is zero
    {
        x=a;
        y=b;   //y=b=0
    }
};

int main()
{
    //Basic parameterised constructor with one parameter passed
    Parent myobj(10);                // x =10 , y=0
    myobj.Display();


    //implicit calling using assignment operator
    // conversion constructor
    myobj=1000;                              // x =1000 , y=0
    myobj.Display();

    return 0;
}

//output :  The values are 10 & 0
//           The values are 1000 & 0

















class Parent
{
    private:
    int x,y;
    
    public:
    void Display()
    {
        cout << "The values are : " << x <<" & " << y <<endl;
    }

    //At the time of parameterised constructor definition, I am initialising one of the value
    Parent(int a, int b=0) // initially b is zero
    {
        x=a;
        y=400;
    }
};

int main()
{
    //Basic parameterised constructor with one parameter passed
    Parent myobj(10);        // x =10 , y=400
    myobj.Display();


    //implicit calling using assignment operator
    // conversion constructor
    myobj=1000;                  // x =1000 , y=400
    myobj.Display();

    return 0;
}

//output :  The values are 10 & 400
//           The values are 1000 & 400















class Parent
{
    private:
    int x,y;
    
    public:
    void Display()
    {
        cout << "The values are : " << x <<" & " << y <<endl;
    }

    //At the time of parameterised constructor definition, I am initialising one of the value
    Parent(int a, int b=0) // initially b is zero
    {
        x=a;
        y=a;   
    }
};

int main()
{
    //Basic parameterised constructor with one parameter passed                                                  
    Parent myobj(10);            // x =10 , y=10 (x=a=y)
    myobj.Display();


    //implicit calling using assignment operator                                                                 
    // conversion constructor
    myobj=1000;                     // x =1000 , y=1000
    myobj.Display();

    return 0;
}

//output :  The values are 10 & 10
//           The values are 1000 & 1000


















class Parent
{
    private:
    int x,y;
    
    public:
    void Display()
    {
        cout << "The values are : " << x <<" & " << y <<endl;
    }

    //At the time of parameterised constructor definition, I am initialising one of the value
    Parent(int a, int b=0) // initially b is zero
    {
        x=a;
        y=b;   
    }
};

int main()
{
    //Basic parameterised constructor with one parameter passed                                                  
    Parent myobj(10);                   // x=10 , y=0
    myobj.Display();


    //implicit calling using assignment operator                                                                 
    // conversion constructor
    myobj={1000,2000};                  // x =1000 , y=2000
    myobj.Display();

    return 0;
}

/*output :  The values are 10 & 0
            The values are 1000 & 2000   */





















class Parent
{
    private:
    int x,y;
    
    public:
    void Display()
    {
        cout << "The values are : " << x <<" & " << y <<endl;
    }

    //At the time of parameterised constructor definition, I am initialising one of the value
    Parent(int a, int b=0) // initially b is zero
    {
        x=a;
        y=b;   
    }
};

int main()
{
    //Basic parameterised constructor with one parameter passed                                                  
    Parent myobj(10,20);                   // x=10 , y=20
    myobj.Display();


    //implicit calling using assignment operator                                                                 
    // conversion constructor
    myobj={1000,2000};                  // x =1000 , y=2000
    myobj.Display();

    return 0;
}

/*output :  The values are 10 & 20
            The values are 1000 & 2000   */

