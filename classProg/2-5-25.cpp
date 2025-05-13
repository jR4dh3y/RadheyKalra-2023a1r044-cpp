#include <iostream>
#include <fstream>
using namespace std;

// int main(){
//     ofstream obj("text.txt");
//     cout << "enter text to send it to file";
//     string abc;
//     cin >> abc;
//     obj << abc;
//     obj.close();
    
// }

// Store student information like Student name and Registration Number in a Text file
// using Cpp File Handling

int main(){
    string name;
    int RegNo;
    ofstream fout("StudentFile.txt"); // Here i am creating object of ofstream
    //class with name fout(user define name )
    cout << "Enter Your Name";
    cin>>name;
    cout << "\n Enter your Registration Number";
    cin>>RegNo;
    fout << "Name = " << name << "\t" << "Registration Number = " << RegNo;
    //with the help of fout we are passing infromation to text file throug << operator
    fout.close();
    return 0;
}

