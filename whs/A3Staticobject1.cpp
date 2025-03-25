/*Normal Object Vs Static object */
#include<iostream>
using namespace std;
class Program{
    public : Program()  // Constructor of class
    {
cout<<"\n Constructor invoked";
    }
    ~Program()  // Destructor of class
    {
        cout<<"\n Destructor invoked";
            }
void Display(){   //Member Function of class
    cout<<"\n Member function of class";
}
};
void Fun1()    // Function with class object
{
    Program obj1;   //creating class object
    obj1.Display();  //calling member function of class
}
int main(){
    Fun1();   // Calling Function with class object
    cout<<"\n Recalling Fun1()";
    Fun1();
    return 0;
}