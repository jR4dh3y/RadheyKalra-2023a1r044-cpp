/*

1. write a program to demostrate working of passing object as refference to a fn, create class with name bankApp
implement parametrized const. to initialize class attrivutes like account no, balance
implement display() function to display information on the screen 
implement updateAmmount() function that accept obj as reference and update account balance
take input as array of objects and display the information of all the objects

2. write a program to demostrate working of passing object as refference to a fn, create class with name bankApp
implement parametrized const. to initialize class attrivutes like account no, balance
implement display() function to display information on the screen 
implement updateAmmount() function that accept obj as value and update account balance wothout modifying the original account balance
*/

#include <iostream>
using namespace std;

class bankApp {
public:
    int accountNo;
    double balance;

    bankApp(int accNo,int bal){
        accountNo = accNo;
        balance = bal;
    }
    void display(){
        cout << "Account No: " << accountNo << ", Balance: " << balance << endl;
    }
};

void update(bankApp &obj2, int n){
    obj2.balance = n;
    obj2.display();
}



int main() {
    bankApp acc[] = {
        bankApp(101, 5000.0),
        bankApp(102, 10000.0),
        bankApp(103, 15000.0)
    };

    for (int i = 0; i < 3; i++) {
        acc[i].display();
    }

    update(acc[1], 20000);

    return 0;
}


