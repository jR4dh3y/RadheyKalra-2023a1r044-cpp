#include<iostream>
using namespace std;

// class a{
//     private : int x;

//     public : a(int x){
//         this ->x = x;
//     }
//     public : void Display(){
//         cout << "x = " << this -> x << endl;
//     }
// };

// int main(){
//     a obj(10);
//     obj.Display();
//     return 0;
// }


class a{
    public : string name ; int regno;
    public : void display(){
        cout << "Name : " << name << endl;
        cout << "Reg No : " << regno << endl;
    }
};

int main(){
    a obj;
    obj.name = "Amit";
    obj.regno = 1;
    a *p = &obj;
    p -> display();
}