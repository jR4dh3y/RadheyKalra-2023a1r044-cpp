// to add the details of a student using a parametrized constructor of student class

#include <iostream>
using namespace std;

class student{
    public : 
    string studentName; int studentId;
    float marks,per;
    student(string name, int id , float marks){
        studentName = name;
        studentId = id;
        marks = marks;
    }
    void display(){
        cout << "\n Name : " << studentName << "\t Marks : "<< marks << endl;
    }
};

int main(){
    student obj[5] = {
        {"ram",101,450},
        {"shyam",102,350},
        {"mohan",103,250},
        {"sita",104,150},
        {"geeta",105,50}
    };
    int i;
    for(i=0 q )
}