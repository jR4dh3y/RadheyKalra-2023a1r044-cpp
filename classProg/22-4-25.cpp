#include <iostream>
using namespace std;

class student{
    private : string username; int password; float maks;
    public : student(string user, int pass, float marks){
        username = user;
        password = pass;
        maks = marks;
    }
    void display(){
        cout<<"Username : "<<username<<endl;
        cout<<"Password : "<<password<<endl;
        cout<<"Marks : "<<maks<<endl;
    }

    friend class admin;
};


class admin: public student{
    private : int p=1111;
    public : void rest(student &obj){
        obj.password = p;    
    }
    
};

class admin2 : public admin{
    int p=2222;
    public : void rest2(student &obj){
        obj.password = p;    
    }
};


int main(){
    student objArray[] = {
        student("aba", 1234, 85.5),
        student("bob", 1234, 90.0),
        student("coc", 1234, 78.2)
    };

    for (int i = 0; i < 3; i++) {
        objArray[i].display();
        cout << endl;
    }
}