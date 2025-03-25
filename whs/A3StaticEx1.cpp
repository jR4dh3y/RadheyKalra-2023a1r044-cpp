// Normal Varibale vs Static Varaible inside a function
#include<iostream>
using namespace std;
class Prorgam
{
    public : void Fun()
    {
        static int a =0; // STatic Varirable
        a++;
        cout<<"value of a is "<<a;
    }
};
int main()
{
    Prorgam obj1;
    obj1.Fun();
    Prorgam obj2;
    obj2.Fun();
    Prorgam obj3;
    obj3.Fun();
    return 0;
}
/* Write a program to create a class with Name CountUser ,
create a function with name Count() , this function will display total number
of users for this class. */