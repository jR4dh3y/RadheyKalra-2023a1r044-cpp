//Program is to understand function with no return type and no parameter.
/*Write a program in CPP using OPP features(class , object , member function , member
variables, access specifiers,namespace) */
#include<iostream>
using namespace std;
class Example1
{
public :void Fun()
{
    cout<<"Welcome";
}
};
int main()
{ Example1 obj1;
    obj1.Fun();
    return 0;
}