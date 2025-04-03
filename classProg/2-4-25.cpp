#include <iostream>
using namespace std;

/*
class program{
    public:
        const int a = 1;
        int b = 2;
        void fn1() const{
            // a = 2; // const fn cannot modify value of normal or const variable
            // b = 3; 
            cout << "a = " << a << endl; // but can be accessed
            cout << "b = " << b << endl;
        }
        void fn2() {
            // a = 2; // cannot modify value of const variable after initialization
            b = 3; 
            cout << "a = " << a << endl; // but can be accessed
            cout << "b = " << b << endl;
        }

};

int main(){
    const program p;
    p.fn1(); // const fn can be called on const object
    // p.fn2(); // non-const fn cannot be called on const object (results in error )
    
    program p2;
    p2.fn1(); // const fn can be called on non-const object
    p2.fn2(); // non-const fn can be called on non-const object
    
    return 0;

}

*/

class parent{
    public:
        parent(){
            cout << "parent constructor" << endl;
        }
        void fn1(){
            cout << "parent class fn1" << endl;
        }
        ~parent(){
            cout << "parent destructor" << endl;
        }
};

class child : public parent{
    public:
        child(){
            cout << "child constructor" << endl;
        }
        void fn2(){
            cout << "child class fn2" << endl;
        }
        ~child(){
            cout << "child destructor" << endl;
        }
    };

int main(){
    child p;
    p.fn1();
    p.fn2();
    return 0;
}