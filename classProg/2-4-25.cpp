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




SINGLE level inhertace 

Example;- Single level inheritance
Write a program to
a. Create a base class with name MyAPP
b. Create a function with name Welcome_Message(), to display welcome message on Screen
c. Create a function with Lgin(), accept pin from user and validate pin against value 123, other function will execute only after successful login of user
d. Create a function Accept(), store student information like, registation number, marks
e. Create a function Display() to display information entered by the student
f. Create a derived class with name Grade_Cal
g. Create a function Calc(), reads marks from MyApp class and function Cal() to calculate percentage and grades as per following:0 
Percentage between 80 to 100 A grade, 70 to 80 B grade, 60 to 70 C grade other wise not qualitifed.

*/

class myApp{
    private:
        void welcome_message(){
            cout << "Welcome to MyApp" << endl;
        }
        int login(){
            int pin;
            cout << "Enter pin: ";
            cin >> pin;
            return (pin == 123) ? 1 : 0;
        }
    public:
        myApp( ){
            if(login()){
                cout << "Login successful" << endl;
                welcome_message();
            } else {
                cout << "Login failed"<< endl;
                return;
            }
        }
        void accept(){
            int reg_no, marks;
            cout << "Enter registration number: ";
            cin >> reg_no;
            cout << "Enter marks: ";
            cin >> marks;
        }

        void display(){}
};

class grade_cal : public myApp{};

int main(){
    myApp app;
    app.accept();
    app.display();
    return 0;
}
