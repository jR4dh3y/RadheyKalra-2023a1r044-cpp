// call by value passing object as parameter

#include <iosteam>
using namespace std;

class program{
    public:
    int a;
    program(int b){
        a=b;
    }
    void display(){
        cout<<a;
    }
};

void modify(program obj2){ // obj2 is used as parameter to modify function
    obj2.a=20;             // any change inside this function will not affect the original object
    obj2.display()         // any change made by obj2 will not affect obj1
}

int main(){
    program obj1(10);      // obj1 is the original object
    modify(obj1);
    obj1.display();
    return 0;
}
/* in 'call by value' any change inside the fn accepting object as parameter will not modify the orignal
  object, this will create a copy of the class */