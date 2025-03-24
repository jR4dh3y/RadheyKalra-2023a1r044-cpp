#include <iostream>
using namespace std;
/*
class program{
    public: int a= 1;
    static int b; //static variable
    void fun1(){
        cout << "value of a in fun1() : " << a << endl;
        cout << "value of b in fun2() : " << b << endl;
    }
    static void fun2(){}

    //note memeber fun
};

int program :: b=1;
//syntax of initializing static variable outside the class
//datatype class name :: (scope resolution operator) and variable = valuel
//if we dont initialize static variable, it is automatically initialized to 0

int main(){
    program::fun2();
    //calling static function, without object of call using classname :: function name 
    //its not possible to call fun1() non static function without object of class
    program obj;
    obj.fun1();
    obj.fun2();
    return 0;
}
 

class program{
    public : program(){
        cout << "\nConstructor called" << endl;
    }
    ~program(){
        cout << "\nDestructor called" << endl;
    }
    
    void display(){
        cout<<"\n member fn of class";
    }
};

void fun1(){
    static program obbj;
    obbj.display();
}

int main(){
    fun1();
    cout<<"\nrecalling fun1()";
    fun1();
    return 0;
}
*/

// write a program to create a class with name interestApp,
// create a fn to calculate compound interest using static variable 
// create fn with month name eg jan(), feb(), mar() etc
// with return status of intreset paid or not , if intrest paid then calcculate rate on same amount,
// if interest not paid , clac compunt intrest 




class interestApp{
    public: static int amount;
    static int rate;
    static int time;
    static int interest;
    
    public: interestApp(int a, int r, int t){
        amount = a;
        rate = r;
        time = t;
    }

    void ci(int amount){
        interest = (amount * rate * time) / 100;
        cout << "Compound Interest: " << interest << endl;
    }

    int jan(){
       if(interest > 0){
            return 1; // Interest paid
        } else {
            ci(amount);
            return 0; // Interest not paid
        }
    }
    int feb(){
        if(interest > 0){
            return 1; // Interest paid
        } else {
            ci(amount);
            return 0; // Interest not paid
        }
    }
};

int interestApp::amount = 0;
int interestApp::rate = 0;
int interestApp::time = 0;
int interestApp::interest = 0;

int main(){
    interestApp obj(1000, 5, 2);
    int status = obj.jan();
    if(status == 1){
        cout << "Interest paid" << endl;
    } else {
        cout << "Interest not paid" << endl;
    }
    
    status = obj.feb();
    if(status == 1){
        cout << "Interest paid" << endl;
    } else {
        cout << "Interest not paid" << endl;
    }
    
    return 0;
}

