/*Program to demonstrate working of Parametrized Constructor 
or Constructor with parameter*/
#include<iostream>
using namespace std;
class Program{
public : Program(string username, int pin)// Parametrized Constructor
{
    cout<<"\n Username ="<<username;
    cout<<"\n Pin ="<<pin;
}
};
int main(){
    Program obj1("A1",123); // Object with parameter
    Program obj2("A2",11);
    return 0;
}