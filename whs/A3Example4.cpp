/*Write a program to create a class with name MyAPP and with functions name,
Accept() and Display() , Accept() function will accept email and password from user
and Display() function will display the information entered by the user on screen
 */
#include<iostream>
using namespace std;
class MyAPP
{
    private : string Email , Password;
public:void Accept()
{
 cout<<"\n Enter your Email";
 cin>>Email;  
 cout<<"\n Enter your Password";
 cin>>Password;
}
public : void Display(){
  cout<<"\n Information ENtered by the user is";
  cout<<"\n Email ="<<Email<<"\n Password is = "<<Password;
}
};
int main()
{
    MyAPP obj;
    obj.Accept();
    obj.Display();
    return 0;
}