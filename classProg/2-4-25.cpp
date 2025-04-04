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




Example;- Single level inheritance and multilevel inheritance
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
    public: int regno, marks;
        void welcome_message(){
            cout << "Welcome to MyApp" << endl;
        }
        int login(){
            int pin;
            cout << "Enter pin: ";
            cin >> pin;
            return (pin == 123) ? 1 : 0;
        }
        myApp(int regno = 0, int marks = 0) : regno(regno), marks(marks) {}
        
        int auth(int pin){
            return (pin == 123) ? 1 : 0;
        }
        void display(){
            cout << "Registration Number: " << regno << endl;
            cout << "Marks: " << marks << endl;
        }
};

class grade_cal : public myApp{
    myApp app;
    public:
        char display_grade(myApp app){
            int marks = app.marks;
            if(marks >= 80 && marks <= 100){
                return 'A';
            } else if(marks >= 70 && marks < 80){
                return 'B';
            } else if(marks >= 60 && marks < 70){
                return 'C';
            } else {
                return 'F';
            }
        }
        
};

class course_selection : public grade_cal{
    public:
        void select_course(char grade){
            switch(grade){
                case 'A':
                    cout << "Cyber Security" << endl;
                    break;
                case 'B':
                    cout << "Full Stack Development" << endl;
                    break;
                case 'C':
                    cout << "AI/ML" << endl;
                    break;
                default:
                    cout << "Not qualified for any course" << endl;
            }
        }
};


int main(){
    if (!myApp().login()){
        cout << "Invalid pin" << endl;
        return 0;
    }else{
        myApp app(123, 85);
        cout << "Login successful" << endl;
        app.welcome_message();
        app.display();
        grade_cal gc;
        char grade = gc.display_grade(app);
        cout << "Grade: " << grade << endl;
        
        course_selection cs;
        cs.select_course(grade);
        
        return 0;
    }

}


/****
Example;- Single level inheritance
Write a program to
a. Create a base class with name MyAPP
b. Create a function with name Welcome_Message(), to display welcome message on Screen
c. Create a function with Lgin(), accept pin from user and validate pin against value 123, other function will execute only after successful login of user
d. Create a function Accept(), store student information like, registation number, marks
e. Create a function Display() to display information entered by the student
f. Create a derived class with name Grade_Cal
g. Create a function Calc(), reads marks from MyApp class and function Cal() to calculate percentage and grades as per following:0 
Percentage between 80 to 100 A grade, 70 to 80 B grade, 60 to 70 C grade other wise not qualitifed.
h.create a new derived clas, Course_selection(),
i. create a function Select(), this function will accept grade from previous class and assign course according to the grade accquired by the student as per following criterias:-
GRADE A: Course Option:- Cyber Security,. net programming
Grade B: Course Option:- Ethical Hacking, Full Stack Development
Grade C: Course Option:- Mern Programming, AI/ML
***************************************/