#include<iostream>
using namespace std;

class base{
    public : base(){
        cout << "\nconst of base class";
    }
    public : ~base(){
        cout <<"\ndist of base class";
    }
    void fun1(){
        cout<<"\n base class fun";
    }
};

class derived : public base{
    public : derived(){
        cout << "\nconst of derived class";
    }
    public : ~derived(){
        cout << "\ndist of derived class";
    }
    void fun1(){
        cout << "\n derived class fun";
    }
};

int main(){
    derived oj;
    oj.fun1();
    oj.base::fun1();
    return 0;
}
