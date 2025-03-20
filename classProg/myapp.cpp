#include <iostream>
using namespace std;

class myApp{
    public : void accept(string email, string password){
        cout<<"";
        cout<<"\n email: " << email<<"\n password :" << password;

    }
};

int main(){
    myApp obj;

    string email,password;
    cout<<"Enter email: ";
    cin>>email;
    cout<<"Enter password: ";
    cin>>password;
    obj.accept(email,password);
    return 0;
}