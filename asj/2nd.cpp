#include<iostream>
using namespace std;

class Calculation{
    int num1, num2;
    public:
    Calculation(int a, int b){
        num1 = a;
        num2 = b;
    }
    void add(){
        cout<<"Addition : "<<num1+num2;
    }
    void sub(){
        cout<<"Subtraction : "<<num1-num2;
    }
    void mul(){
        cout<<"Multiplication : "<<num1*num2;
    }
    void div(){
        cout<<"Division : "<<num1/num2;
    }
};

int main(){
    Calculation obj(10,20);
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}