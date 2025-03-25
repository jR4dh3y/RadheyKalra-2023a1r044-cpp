/*Prorgam to demonstrate working of Array Initilization using Accept Method*/
#include<iostream>
using namespace std;
class Program{
    private: int a[10];int i; //Declaration  of Array
    public : void Accept(){
        // Initilization of Array Elements using Accept Method(Using Any type of Loop)
        int i;
        for(i=0;i<=9;i++){
            cout<<"\n Enter Array ELements";
            cin>>a[i];
        }
    }
    public : void Display(){
        cout<<"\n Array ELements ENetered by the user is";
        for(i=0;i<=9;i++){
            cout<<"\t"<<a[i];
            cin>>a[i];
        }
    }
};
int main(){
    Program obj;
    obj.Accept();
    obj.Display();
    return 0;
}