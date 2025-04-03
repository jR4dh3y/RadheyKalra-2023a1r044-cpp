#include <iostream>
using namespace std;

class prog{
    public:
        int a;
        void display(){
            cout << "a = " << a << endl;
        }
        void set(int x){
            a = x;
        }
};
int main(){
    prog p;
    p.set(10);
    p.display();
    return 0;
}