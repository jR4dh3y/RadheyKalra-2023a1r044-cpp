#include<iostream>
using namespace std;
class Area{
    int length,breadth;
    public:
    Area(int l, int b){
        length = l;
        breadth = b;
    }
    Area(){
        cout<<"no value ";
    }
    void getArea(){
        cout<<"area : "<<length*breadth;
    }

};
int main(){
    int a;
    Area obj(10,20);
    // obj.getData();
    obj.getArea();
    return 0;
}