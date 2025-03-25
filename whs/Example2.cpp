//Program1
/*Write a program in CPP with class , name MYAPP and with a function , name Welcome(),
this function on execution will display a message on screen 
Welcome To MIET JAMMU */

//Program2
/*Write a program in CPP with class , name MYAPP and with a function , name Welcome(),
that accepts Student Name , Registration Number , address from user and
this function on execution will display a  Welcome message on screen 
Welcome To MIET JAMMU
with all the details entered by the user
 */
#include<iostream>
using namespace std;
class MYAPP
{
    private : string Name , Address,RegNo;
public :void Welcome()
{    
    cout<<"\n Enter Your Name , Registration Number and Address";
    cin>>Name>>RegNo>>Address;
    cout<<"Welcome To MIET JAMMU";
    cout<<"\n Your Details are as under :";
    cout<<"\n Name ="<<Name<<"\n Registration Number ="<<RegNo<<"\n Address ="<<Address;
}
};
int main()
{ MYAPP obj1;
    obj1.Welcome();
    return 0;
}