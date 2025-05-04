#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream obj("text.txt");
    cout << "enter text to send it to file";
    string abc;
    cin >> abc;
    obj << abc;
    obj.close();
    
}

