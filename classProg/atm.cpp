#include <iostream>
using namespace std;

class atmApp {
    public : void welcome(){
        cout << "Welcome to the ATM" << endl;
    }
    private : int pin ;

    public : bool validate(){
        cout << "Enter your pin: ";
        cin >> pin ;
        if (pin == 123){
            return 1;
        }
        else {
            return 0;
        }
    }
    private : float amount;
    public : float deposit(){
        cout << "Enter the amount you want to deposit: ";
        cin >> amount ;
        return amount ;
    }
    public : float withdraw(float wamt){
        if(wamt > amount){
            cout << "Insufficient balance" << endl;
            return 0;
        }
        else {
            amount = amount - wamt;
            return amount;
        }
    }
    public : void display(){
        cout << "Your balance is: " << amount << endl;
    }

};


int main(){
    atmApp default_;
    default_.welcome();
    bool result = default_.validate();
    
    if (result == 1){
        cout << "Login Sucessful" << endl ;
    }
    else {
        cout << "Wrong pin " << endl ;
        return 0;
    }
    float dep = default_.deposit();
    cout << "Amount deposited: " << dep << endl;
    default_.display();
    float wamt;
    cout << "Enter the amount you want to withdraw: ";
    cin >> wamt;
    float bal = default_.withdraw(wamt);
    if (bal != 0){
        cout << "Amount withdrawn: " << wamt << endl;
        default_.display();
    }


    return 0;
}
