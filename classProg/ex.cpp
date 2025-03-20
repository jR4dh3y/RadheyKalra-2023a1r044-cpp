/* wap to create a class with fn name login and dispaly_info,
login will accept pin(default 123) from user as parameter and dispay_info fn will 
accept name ,regno marks , percentage and grade form the user and siplay all information on the screen with welllcome message*/

#include <iostream>
using namespace std;

class student{
    public : void accept(string email, int password){
        password = 123;
        cout<<" ";
        cout<<"\n email: " << email<<"\n password :" << password;
    }

    public : void display_info(string name, int regno, int marks, float percentage, char grade){
        cout << "Welcome" ;
        cout << "Name: " << name ;
        cout << "Reg No: " << regno;
        cout << "Marks: " << marks;
        cout << "Percentage: " << percentage;
        cout << "Grade: " << grade;
    }
};   

int main(){
    student obj;
    string email, name;
    float percentage;
    char grade;
    int password, marks , regno;
    cout<<"Enter email: ";
    cin>>email;
    cout<<"Enter password: ";
    cin>>password;
    obj.accept(email,password);
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter regno: ";
    cin >> regno;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "Enter percentage: ";
    cin >> percentage;
    cout << "Enter grade: ";
    cin >> grade;
    obj.display_info(name, regno, marks, percentage, grade);
    return 0;
    


}

