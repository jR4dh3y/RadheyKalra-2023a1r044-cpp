/*Program to demonstrate working and execution sequence of Constructor , destructor
 and  other functions*/
 #include<iostream>
 using namespace std;
 class Program          // class
 {
    private : int a;

public : void Fun1(){
    cout<<"\n Function1";
}
public : void Fun2(){
    cout<<"\n Function2";
}
public :Program(){    //  Default Constructor 
    a = 5;
    cout<<"\n a= "<<a;
    }
    public : ~Program()
    {
        cout<<"\n Destructor called";
    }
 };
 int main(){
    Program obj;   // class object
    obj.Fun2();
    obj.Fun1();
 }