/* Static Members of class
1. Static Variables
2. Static Function 
3. STatic Class :- In cpp we dont have a provision of declaring a class as static 
but indirectly we can change behaviour of class to static by declaring 
member varaibles and member functions of class as static.
4. STatic Object
*/
/*Program to demonstrate working of static function in Cpp Program*/
#include<iostream>
using namespace std;
class Program
{
  public : int a =1;   //Normal class variable
  static int b;        //static varaible inside class defination
  void Fun1()        // Member Function of class
  {
cout<<"Value of a in Fun1 "<<a;
cout<<"\n Value of b in Fun2 "<<b;
  }
  //Note Member Function or non static funtion or function can access static as well 
  //non static members
  static void Fun2()        // Static Function in class
  {
//cout<<"Value of a in Fun1 "<<a; // This will raise error as static members 
//cannot access non static member of class because they are dependent
//on instance or object of class for their existence and static function belongs 
// to class directly and are not depenedent on object of class for their existence
cout<<"\n Value of b in Fun2 "<<b;
  }
};
int Program ::b=1;
//Syntax of initializing static variable ouside class 
//datatype class name ::(scope resolution operator) and variable name = value;
//If we dont initilialize static variable , it is automatically initialized with 0
int main()
{
    Program::Fun2();
    //calling static function , without object of class using classname:: function name
//It is not posiible to call Fun1() non static function without class object 
Program obj;
obj.Fun1();
obj.Fun2();
return 0;
}