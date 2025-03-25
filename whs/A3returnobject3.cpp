/*Method 2 Return Object from function as Reference */
#include<iostream>
using namespace std;
class Program {
    public : int a=1; //Member Variable

void display()   //Member function to display value of A
{
    cout<<"\n Value of a is "<<a;
}
};
Program& modify(Program& obj1)  //Function with return type as  class type
{                 //This function will return object as reference to orignal object
  obj1.a = 6;     // 
    //created object of class Program
    return obj1;
}
int main(){
    Program obj2; 
    obj2.display();
   Program& obj3 = modify(obj2); // 
    obj3.display();  
    //calling of function using object of class 
          //because modify function will return object 
    return 0;           // to store returned value we need similar type of object
}                       // this object will not exists when function exits