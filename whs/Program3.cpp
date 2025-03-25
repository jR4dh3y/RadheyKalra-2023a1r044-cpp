//Function with return type and parameter
#include<iostream>
using namespace std;
class Program1 {
    private : int pin;
public : int Validate() // Function with  return type and  no paramter
{
    cout<<"Enter your pin";
    cin>>pin;
    if(pin == 1234)     {
        return 1;     }
    else      {
        return 0;     } }               //(Amount is formal parameter)
        // Paramter defined at function defination
public :void Display_Balance(int Amount) //Function with no return type and parameter
{
    cout<<"\n Your Balance is "<<Amount; } 
    private : int wamt;
public : int Withdraw(int Mamt)
{
cout<<"\n Enter Amount u want to withdraw";
cin>>wamt;
if(Mamt<wamt){
    cout<<"\n Insufficient Balance";
}
else{
    cout<<"\n Your Updated Balance is"<<Mamt-wamt;
    return Mamt-wamt;
}
}
 }; // Terminator or end statement
int main() {
    Program1 obj;
    int res,res1;

    int amt =10000;
    res=obj.Validate();
    if(res==1){
        cout<<"Authentication Successful";
       res1= obj.Withdraw(amt);
        obj.Display_Balance(res1);     } //amt is actual parameter(defined at function 
    else{                                //calling)
       cout<<"Authentication Fail";      }
return 0; }