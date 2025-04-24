#include <iostream>
using namespace std;

class parent{
    public : void fun1(){
        cout << "\n parent class fun";
    }
};

class chile1 : virtual public parent{
    public : void fun2(){
        cout << "\n child1 class fun";
    }
};

class child2 : virtual public parent{
    public : void fun3(){
        cout << "\n child2 class fun";
    }
};

class child3 : public child2, public chile1{
    public : void fun4(){
        cout << "\n child3 class fun";
    }
};

int main(){
    child3 obj;
    obj.fun1();
    obj.fun2();
    obj.fun3();
    obj.fun4();
    return 0;
}


