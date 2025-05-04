/*
wap a program to store the name and price of a book using dynamic memory allocation
*/

#include <iostream>
#include <string>
using namespace std;


/*
class bokk{
    private : int id; string name;
    
    public : bokk(int id, string name){
        this-> id = id;
        this-> name = name;
    }
    
    void display(){
        cout<<"book name: "<< name << endl;
        cout<<"book id: "<< id << endl;
    }
};

int main(){
    bokk *obj = new bokk(1, "yookoso");
    obj -> display();
    delete obj;
    obj -> display();
    return 0;
    
}


class student{
    public : int regno; string name;
    public : void display(){
        cout << "Student name: " << name << endl;
        cout << "Student regno: " << regno << endl;
    }
    public : void accept(int regno, string name){
        this -> regno = regno;
        this -> name = name;
    }
};

int main(){
    int n, i;
    cout << "Enter the number of students: ";
    cin >> n;
    
    int r1; string n1;
    
    student *obj[n];
    for(i = 0; i < n; i++){
        obj[i] = new student();
        cout << "Enter the name and regno of student " ;
        cin >> r1 >> n1;
        obj[i] -> accept(r1, n1);
    }   

    cout << "The details of the students are: " << endl;
    for(i = 0; i < n; i++){
        obj[i] -> display();
    }
    for (i = 0; i < n; i++){
        delete obj[i];
    }
    return 0;
}

*/

class book{
    public : int id; string name;
    public : book(int id, string name){
        this -> id = id;
        this -> name = name;
    }

};

int main(){

    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    book *obj[n];
    for(int i = 0; i < n; i++){
        int id;
        string name;
        cout << "Enter the price and name of book " << i + 1 << ": ";
        cin >> id >> name;
        obj[i] = new book(id, name);
    }

    cout << "The total price of the books is: " << endl;
    int total = 0;
    for(int i = 0; i < n; i++){
        total += obj[i] -> id;
    }
    cout << total << endl;

    string fname;
    cout << "enter details of book to find: " << endl;
    cin >> fname;

    for(int i=0; i<n; i++){
        if(obj[i]->name == fname){
            cout << "Book found: " << endl;
            cout << "Book name: " << obj[i]->name << "price: " << obj[i]->id << endl;
            cout << "enter name to change : ";
            cin >> obj[i]->name;
        }
    }
    cout << "The details of the books are: " << endl;
    for(int i = 0; i < n; i++){
        cout << "Book name: " << obj[i]->name << endl;
        cout << "Book price: " << obj[i]->id << endl;
    }

    for(int i = 0; i < n; i++){
        delete obj[i];
    }
    return 0;
}