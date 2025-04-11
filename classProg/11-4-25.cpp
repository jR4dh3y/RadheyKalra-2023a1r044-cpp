#include <iostream>
using namespace std;

class parent{
    protected : int a=1;
    public : parent(){
        cout << "parent constructor" << endl;
    }
    public : ~parent(){
        cout << "parent destructor" << endl;
    }
    public : void fun1(){
        cout << "parent function and value of a is " << a << endl;
    }
};

class child1: public parent{
    protected : int b=2;
    public : child1(){
        cout << "child1 constructor" << endl;
    }
    public : ~child1(){
        cout << "child1 destructor" << endl;
    }
    public : void fun2(){
        cout << "child1 function and value of a and b are " << a << " and " << b << endl;
    }
};

class child2: public parent{
    protected : int c= 3;
    public : child2(){
        cout << "child2 constructor" << endl;
    }
    public : ~child2(){
        cout << "child2 destructor" << endl;
    }
    public : void fun3(){
        cout << "child2 function and value of b and c are " << a << " and " << c << endl;
    }
};

class child3: public child1, public child2{
    protected : int d=4;
    public : child3(){
        cout << "child3 constructor" << endl;
    }
    public : ~child3(){
        cout << "child3 destructor" << endl;
    }
    public : void fun4(){
        cout << "child3 function and value of b, c and d are "<<b<<", "<<c<<" and "<<d<< endl;
    }
};

int main(){
    child3 obj;
    obj.child1::fun1(); //or obj.child2::fun1();
    obj.fun2();
    obj.fun3();
    obj.fun4();
    return 0;
}


