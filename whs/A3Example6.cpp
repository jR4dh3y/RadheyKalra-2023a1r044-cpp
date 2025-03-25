/*Write a program to create a class with function name Login() and Display_Info, 
Login() function will accept Pin(default value 123) from user as parameter
and DIsplay_Info() function will accept Name, RegNo , Marks , Percentage and Grade
from user as Parameter and display all information entered by user on Screen with
Welcome Message. */
#include<iostream>
using namespace std;
class Program{
    private : string Name="Abc";string RegNo="R121";
    int Marks=111;float Percentage=66.8;char Grade='B';
    public : void Login(int Pin){
        if(Pin==123){
            cout<<"Login Successfull";
Display_Info(Name,RegNo,Marks,Percentage,Grade);
        }
        else{
            cout<<"Login Fail";
        }
    }
public:
void Display_Info(string Name,string RegNo,int Marks,float Percentage,char Grade){
cout<<"\n Information Entered by the user is \n"<<"Name ="<<Name<<"Registration Number";
cout<<RegNo<<"Marks ="<<Marks<<"Per = "<<Percentage<<"Grage ="<<Grade;
}
};
int main()
{
    int Pin1;
    cout<<"Enter Pin";
    cin>>Pin1;
    Program obj;
    obj.Login(Pin1);
    return 0;
}