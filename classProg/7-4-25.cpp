/*
sequence of exetution of constructors and destructors in multiple inheritance depends on the sequence of placing base classesin syntax
In Multiple inheritance, there is no relationship between parent classes.
We cannot access member function of a parent class in another parent class but a child can extend multiple parent classes at a time
and access attributes of multiple parent classes.
*/

#include <iostream>
using namespace std;

/*
class parent1{
    public: 
        parent1(){
            cout << "parent1 constructor" << endl;
        }
        ~parent1(){
            cout << "parent1 destructor" << endl;
        }
    public: int a=10;
    private: int b=20;
    protected: int c=30;
};

class parent2{
    public: 
        parent2(){
            cout << "parent2 constructor" << endl;
        }
        ~parent2(){
            cout << "parent2 destructor" << endl;
        }
    public: int a=100;
    private: int b=200;
    protected: int c=300;
};

class child: public parent1, public parent2{
    public: 
        child(){
            cout << "child constructor" << endl;
        }
        ~child(){
            cout << "child destructor" << endl;
        }
    public: int a=1000;
    private: int b=2000;
    protected: int c=3000;
};

int main(){
    child c;
    cout << "main function" << endl;
    cout << "parent1 a: " << c.parent1::a << endl;
    cout << "parent2 a: " << c.parent2::a << endl;
    cout << "child a: " << c.a << endl;
    cout << "parent1 b: " << c.parent1::b << endl;
    cout << "parent2 b: " << c.parent2::b << endl;
    cout << "child b: " << c.b << endl;
    cout << "parent1 c: " << c.parent1::c << endl;
    cout << "parent2 c: " << c.parent2::c << endl;
    cout << "child c: " << c.c << endl;
    return 0;
}
*/
/*

class parent1{
    public: void fun1(){
        cout << "parent1 function" << endl;
    }
};

class child : public parent1{
    public: void fun2(){
        cout << "child 1 function " << endl;
    }
};

class child2 : public parent1{
    public: void fun3(){
        cout << "child 2 function " << endl;
    }
};

int main(){
    child c;
    child2 c2;
    c.fun1();
    c2.fun1();
    c.fun2();
    c2.fun3();
    return 0;

}
*/
/*

hierarchial inheritance example code
wap to - 
    1. create a base class with name admin 
    2. define default attributes like username= "admin" and password = 123
    3. create function Login() for both admin and guest, function will allow user login for limited time and display only limited information like Welcome Message and currenyt login location.alignase.
    4. Create a derived class 1 with name DBA,this class will extend admin class attributes with Login() function, after successful login
    5. Create a function Accept() to store user information
    6. Create a derived class 2 with name guess,this class will access guest_login(), function from admin class an then store Feedback Message.
    7. create seprate login fn for guest and admin

*/
#include <chrono>

class admin{
    int adm_p = 123, gst_p=0; 
    string adm_usr="admin",gst_usr="guest";


    public:
        int login(int pas, string usr){
            if(pas == adm_p && usr == adm_usr){
                return 1;
            }
            else if(pas == gst_p && usr == gst_usr){
                return 2;
            }
            return 0;
        }
};

class dba : public admin{
    int pas;
    string usr;
    public: dba(int pas, string usr){
        this->pas = pas;
        this->usr = usr;
    }
    public:
        void acpt(){
            if(login(pas, usr) == 1){
                cout <<"accepting user information" << endl;
            }
        }

};

class guest : public admin{
     public: 
        void guest_login(int pas, string usr){
            if(login(pas, usr) == 2){
                cout << "You are logged in as guest" << endl;
                cout << "You have 5 sec to access the system" << endl;
                auto start = chrono::high_resolution_clock::now();
                while (true) {
                    auto now = chrono::high_resolution_clock::now();
                    auto duration = chrono::duration_cast<chrono::seconds>(now - start);
                    // cout << "Time elapsed: " << duration.count() << " seconds" << endl;
                    if (duration.count() >= 5) {
                        cout << "Time is up!" << endl;
                        break;
                    }
                }
            }
        }
    
};

int main(int argc, char *argv[]){
    admin a;
    cout<< a.login(123, "admin") << endl;
    cout<< a.login(0, "guest") << endl;

    dba d(123, "admin");
    d.acpt();

    guest g;
    g.guest_login(0, "guest");
    // Check if command line arguments are provided
    // if (argc > 2) {
    //     // Convert string password to integer
    //     int password = atoi(argv[2]);
    //     string username = argv[1];
        
    //     cout << "Attempting login with command line arguments..." << endl;
    //     int loginResult = a.login(password, username);
        
    //     if (loginResult == 1) {
    //         cout << "Admin login successful via command line" << endl;
    //         dba cmdAdmin(password, username);
    //         cmdAdmin.acpt();
    //     } else if (loginResult == 2) {
    //         cout << "Guest login successful via command line" << endl;
    //         g.guest_login(password, username);
    //     } else {
    //         cout << "Login failed: Invalid credentials" << endl;
    //     }
    // } else {
    //     cout << "Usage: " << argv[0] << " <username> <password>" << endl;
    // }
    return 0;
}