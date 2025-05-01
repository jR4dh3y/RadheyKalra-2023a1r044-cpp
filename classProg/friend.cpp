/*
Q2.
A person has its account in JK Bank, HDFC Bank, ICICI Bank and SBI Bank,
create classes of all banks with required attributes like Account Holder Name, Account Number, Balance.
Create an Auditor() function that accesses Balance from all Bank accounts and calculates Tax.

Tax Slabs:
a. Amount between 100000 to 500000 – 10% Tax
b. More than 500000 – 20% Tax

*/
#include <iostream>
#include <string>
using namespace std;

class jkBank {
    public:
        string name;
        int accountNumber;
        double balance;

        jkBank(string n, int accNum, double bal) {
            name = n;
            accountNumber = accNum;
            balance = bal;
        }
    friend void audit(jkBank &jk);
};

class hdfcBank {
    public:
        string name;
        int accountNumber;
        double balance;

        hdfcBank(string n, int accNum, double bal) {
            name = n;
            accountNumber = accNum;
            balance = bal;
        }
        friend void audit(hdfcBank &hdfc);
};
class iciciBank {
    public:
        string name;
        int accountNumber;
        double balance;

        iciciBank(string n, int accNum, double bal) {
            name = n;
            accountNumber = accNum;
            balance = bal;
        }
        friend void audit(iciciBank &icici);
};

void audit(jkBank &jk, hdfcBank &hdfc, iciciBank &icici){
    int tax;
    double totalBalance = jk.balance + hdfc.balance + icici.balance;
    cout << "Total Balance: " << totalBalance << endl;

    if (totalBalance >= 100000 && totalBalance <= 500000) {
        tax = totalBalance * 0.10;
    } else if (totalBalance > 500000) {
        tax = totalBalance * 0.20;
    } else {
        tax = 0;
    }
    cout << "Tax: " << tax << endl;
}

int main() {
    jkBank jk("Amit", 1, 200000);
    hdfcBank hdfc("Amit", 2, 300000);
    iciciBank icici("Amit", 3, 400000);

    audit(jk, hdfc, icici);

    return 0;
}