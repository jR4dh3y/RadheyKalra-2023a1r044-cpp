//Method 1 Call by Reference(Passing Object As Parameter)
#include<iostream>
using namespace std;
class Program{
    public : int a;
    Program(int b){
        a=b;
    }
    void Display(){
        cout<<"Value of a is "<<a;
    }
};
void modify(Program &obj2)//obj2 reference is used as parameter to 
//modify function(any change inside this function will  modify 
//orignal object)
{
obj2.a=20; 
//Any change made by object2 will  affect object 1 value
}
int main(){
    Program obj1(10); //Orignal value passed by object 1
    obj1.Display();
    modify(obj1);
    obj1.Display();
}
/*IN Call by Reference , any change inside the function accepting object as parameter
will  modify the orignal object, this will not create separate copy of the
class*/