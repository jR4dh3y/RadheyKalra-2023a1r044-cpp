/*Program to demonstrate implentation of Array using Direct Initilization Method */
#include<iostream>
using namespace std;
class Program
{
private : int adv[5]={1,2,3,4,5}; //Declaration and Direct Initlization
int weak[5] = {6,7,55,88,9};int i;
public : void Display()
{
cout<<"List of Advance Learners \t ";
for(i=0;i<5;i++){
    cout<<adv[i]<<"\t";
}
cout<<"\n List of Weak Learners \t ";
for(i=0;i<5;i++){
    cout<<weak[i]<<"\t";
}
}
};
int main(){
    Program obj;
    obj.Display();
    return 0;
}