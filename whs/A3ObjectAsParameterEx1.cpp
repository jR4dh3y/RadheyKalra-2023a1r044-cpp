//Program to demonstrate working of Passing Object As Paramter to 
//function using different methods
#include<iostream>
using namespace std;
class Program{
public : int a=10;
void display(){
    cout<<"\n Value of a is "<<a;}
};
void method1(Program obj1){ //Pass By Value
    obj1.a=20;
    cout<<"\n Value of a in method1 "<<obj1.a;
}
void method2(Program &obj){ //Pass By Reference
    obj.a=30;
    cout<<"\n Value of a in method2 "<<obj.a;
}
void method3(Program *obj){ //Pass By Pointer
    obj->a=40;
    cout<<"\n Value of a in method3 "<<obj->a;
}
void method4(const Program obj2){ //Pass By Const Reference(Read only Copy)
    //obj2.a=20;//This will generate error
    cout<<"\n Value of a in method1 "<<obj2.a;
}
int main(){
    Program obj;
    obj.display();
    method1(obj);
    obj.display();
    method2(obj);
    obj.display();
    method3(&obj);
    obj.display();
    method4(obj);
    obj.display();
    return 0;
}
