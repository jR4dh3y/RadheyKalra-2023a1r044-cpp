/*
program to demostrate the working of retuning object from a function
1. create a class with name bank 
2. create member var balance 
3. create parameterized constructor
4. create deposit() fn to add ammount to balance var 

*/

/*
class program{
    public : int a;
    program(int x){
        a = x;
    }
    void show(){
        cout << "The value of a is : " << a << endl;
    }
};

program modifi(){
    program a(12);
    return a;
}

int main(){
    program b(10);;
    b.show();
    program c = modifi();
    c.show();
    return 0;
}

#include <iostream>
using namespace std;

class bank{
    public:
    int balance;
    bank(int b){
        balance = b;
    }
    void show(){
        cout << "The balance is : " << balance << endl;
    }
};

bank deposit(int n, bank b){
    b.balance += n;
    
    return b;
}

int main(){
    bank a(1000);
    while(1){
        cout << "Welcome to the bank" << endl;
        cout << "1. Show balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice : ";
        int choice;
        cin >> choice;
        cout << "\n";
        switch (choice){
            case 1:
            a.show();
            break;
            case 2:
            cout << "Enter the amount to deposit : ";
            int n;
            cin >> n;
            a = deposit(n,a);
            break;
            case 3:
            cout << "Exiting..." << endl;
            return 0;
        }
    }
    return 0;
}


*/

/*
program to create class with name 'productInfo' , member var 'price' with 


*/
