/*Program to create a class and a function , function will accept user name,
Registration Number from student and display the details entered by the user 
on screen*/
#include<iostream>
using namespace std;
class Program 
{
    private : string Name;
    private : int RegNo;
public:void Accept()
{
 cout<<"\n Enter your name";
 cin>>Name;  
 cout<<"\n Enter your Registration Number";
 cin>>RegNo;
  cout<<"\n Information ENtered by the user is";
  cout<<"\n Name ="<<Name<<"\n Registration Number is = "<<RegNo;
}
};
int main()
{
    Program obj;
    obj.Accept();
    return 0;
}
