#include<iostream>
using namespace std;

class prog{
    public:
    int array[5]={1,2,3,4,5};
    void display(){
        for(int i=0;i<5;i++){
            cout<<array[i]<<"\t";
        }
    }
};

int main(){
    prog obj;
    obj.display();
    return 0;
}