/*Write a program to create a class with name MyAPP and with functions name,
Accept() and Display() , Accept() function will accept email and password as parameter
and Display() function will display the information entered by the user on screen
 */
#include<iostream>
using namespace std;
class MyAPP
{
public:void inline Accept(string Email , string Password) //Formal Parameters
{
 cout<<"\n Information ENtered by the user is ";
  Password = "123";

}
};
int main()
{
    MyAPP obj;
    string Email1,Password1;
    cout<<"\n Enter your Email";
 cin>>Email1;  
 cout<<"\n Enter your Password";
 cin>>Password1;
    obj.Accept(Email1,Password1);//Actual Parameters
    return 0;
}