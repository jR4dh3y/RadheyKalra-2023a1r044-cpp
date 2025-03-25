/*Method 1 Return Object from function as Value */
#include<iostream>
using namespace std;
class Program {
    public : int a; //Member Variable
Program (int b) // Parametrized constructor of class
{
a = b;
}
void display()   //Member function to display value of A
{
    cout<<"\n Value of a is "<<a;
}
};
Program modify()  //Function with return type as  class type
{                 //This function will return object 
Program obj1(6);  //created object of class Program
    return obj1;
}
int main(){
    //Program obj2(5); 
    //obj2.display();
    //obj2 = modify();
    //obj2.display();  or
    Program obj2 = modify(); //calling of function using object of class 
    obj2.display();         //because modify function will return object 
    return 0;           // to store returned value we need similar type of object
}