#include <iostream>
using namespace std;

class program{
    public:
    int a;
    program(int b){
        a=b;
    }

    void display(){
        cout<<a<<endl;
    }
};

void modify(program &obj2){     // obj2 is used as parameter to modify function
    obj2.a=20;             // any change inside this function will not affect the original object
    obj2.display();        // any change made by obj2 will not affect obj1
}

int main(){
    program obj1(10);
    obj1.display();
    modify(obj1);
    obj1.display();
    return 0;
}