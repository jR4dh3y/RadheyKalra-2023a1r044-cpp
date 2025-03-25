/*Program to demonstrate working of constructor overloading*/
/*Program to demonstrate working of Default Constructor*/
#include<iostream>
using namespace std;
class Program    // class name
{
public: Program()   // Default Constructor
{
cout<<"Default Constructor ";
}
public : Program(string username, int pin)// Parametrized Constructor
{
    cout<<"\n Username ="<<username;
    cout<<"\n Pin ="<<pin;
}
public: ~Program()   // Default Constructor
{
cout<<"\n Destructor ";
}
};
int main()
{
    Program obj1;  // Class object
    Program obj2("A1",123);
    return 0;
}