/*Program to demonstrate working of returning object from Function
a. create a class with name Bank,
b. create member variable balance
c. create parametrized constructor
d. create Deposit() function to add amount to balance varaible
*/
using namespace std;
#include<iostream>
class Bank{
public : float balance;
Bank(float amt){
    balance = amt;
}
void display(){
    cout<<"\n Balance in your account is "<<balance;
}
};
Bank Deposit(Bank obj1){ //Function with object as parameter to access class member
    float amt1;          // with return type as class to return object
   cout<<"ENter amount to deposit";
   cin>>amt1; 
obj1.balance = obj1.balance + amt1;
return obj1;
}
int main(){
Bank obj2(500);
obj2.display();
obj2 = Deposit(obj2);
obj2.display();
return 0;
} // Program to create class with name ProductInfo , member varible Price, with
// Parametrized constructor and a display () function to display Product price.
// create a method Update_Price() to calculate and increase Price of Existing
// Product by 5 Percent . 
// Show prvious Price as well as new Price .