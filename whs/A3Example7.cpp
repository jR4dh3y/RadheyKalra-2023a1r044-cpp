/*Write a Program to create two classes , 
1. Class Login_Details, 
with functions as:-
a. Validate() accept Login password(default 1234) from user  
b. Display() display message on Screen "Welcome to MyAPP" 
2. Class User_Profile
with functions as:
a. Accept() accept username,email id and name form user
b. Display() will display information entered by the user on screen. 
*/
#include<iostream>
using namespace std;
class Login_Details
{
    private : int password;
public : int Validate()
{
cout<<"Enter your password";
cin>>password;
if(password==1234)
{
    return 1;
}
}
public: void Display(){
cout<<"\n Welcome to MyAPP";
}
};
class User_Profile
{
    private : string email, username,name;
public : void Accept()
{   
cout<<"\n ENter Username , email is and ur name";
cin>>username>>email>>name;
}
public : void Display()
{
cout<<"\n Information entered by the user is \n";
cout<<"Name ="<<name<<"\n Username is"<<username<<"Email Id is"<<email;
}
};
int main()
{
    int n;
    Login_Details obj1;
    User_Profile obj2;
    n=obj1.Validate();
    if(n==1)
    {
        obj1.Display();
    obj2.Accept();
    obj2.Display();
    }
    return 0;
}