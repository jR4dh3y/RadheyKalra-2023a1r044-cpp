#include<iostream>
using namespace std;
class A{

    public:
    A(){
        cout<<"no pera.";
    }
    A(int a){
        cout<<"int pera.";
    }
    A(float a){
        cout<<"float pera.";
    }
    A(int a,int b){
        cout<<"two int  pera.";
    }
    A(float a,float b){
        cout<<"two float  pera.";
    }
};
int main(){

    A obj1(12.8f,78.9f);
    A obj2(12,34);
    // A obj3(45.8);
    return 0;
}