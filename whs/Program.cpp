#include<iostream>
using namespace std;
class Program {
    private : int pin;
    public : void Welcome(){
        cout<<"Welcome to ATM.";     }
    public : int validate(){  // Function with return type and no parameter
cout<<"\n Enter Your Pin";
cin>>pin;
if(pin == 1234) {
    return 1; }
else {
    return 0; }     }
    public : void Display_Balance(int Amount)//Function with no return type and parameter
    {
cout<<"\n Your Account Balance is"<<Amount;
    }
     };
int main(){
    int res;
    int amt = 5000;
    Program obj;
    obj.Welcome();
    res= obj.validate();
    if(res==1){
        cout<<"\n Authentication Successful";   
        obj.Display_Balance(amt);
          }
    else{
       cout<<"\n Authentication Fail";     }
    return 0;     }