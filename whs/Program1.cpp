#include<iostream>
using namespace std;
class Program1
{
    private : int pin;
public : int Validate() // Function with  return type and  no paramter
{
    cout<<"Enter your pin";
    cin>>pin;
    if(pin == 1234)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
public : void Fun()
{
    cout<<"Hi";
}
}; // Terminator or end statement
int main()
{
    Program1 obj;
    int res;
    obj.Fun();
    res=obj.Validate();
    if(res==1){
        cout<<"Authentication Successful";
    }
    else{
       cout<<"Authentication Fail"; 
    }
return 0;
}