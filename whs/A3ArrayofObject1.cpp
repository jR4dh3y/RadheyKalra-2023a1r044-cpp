/*Program to demonstrate working of Array of Object*/
#include<iostream>
using namespace std;
class Books_Records
{
private : int BookNo ; string BookName;
public: Books_Records(int B , string N){// Parametrized Class
    BookNo =  B;
    BookName = N;
}
public : void Display(){
    cout<<"\n Book Number is "<<BookNo<<"\t Book Name is "<<BookName;
}
};
int main(){
    Books_Records obj[5]={{1,"CPP"},{2,"Java"},{3,"C"},{4,"C#"},{5,"PHP"}}; //Array of Object
    cout<<"Book Record at position 3 is";
   
    int i;
    for(i=0;i<5;i++){
        obj[i].Display();
    }
        return 0;
}