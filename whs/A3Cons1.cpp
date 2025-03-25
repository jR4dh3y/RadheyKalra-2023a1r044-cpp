/*Program to demonstrate working of Default Constructor*/
#include<iostream>
using namespace std;
class Program    // class name
{
public: Program()   // Default Constructor
{
cout<<"Default Constructor ";
}
public: ~Program()   // Default Constructor
{
cout<<"\n Destructor ";
}
};
int main()
{
    Program obj;  // Class object
    return 0;
}