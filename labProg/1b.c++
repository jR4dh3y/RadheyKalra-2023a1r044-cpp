#include <iostream>
using namespace std;

class student{
    public : string studentName; int studentID;
    float marks, per;

    public : student(string name, int id, float marks) : studentName(name), studentID(id), marks(marks) {}

    void display(){
        cout << "\n Name : " << studentName << "\t Marks : "<< marks << endl;
    }

    char grade(){
        per = marks/500*100;
        if (per >= 80 && per <= 100){
            return 'A';
        }
        else if (per >= 60 && per < 80){
            return 'B';
        }
        else if (per >= 40 && per < 60){
            return 'C';
        }
        else{
            return 'D';
        }
    }
    void clubAssignment(char grade){
        if (grade == 'A'){
            cout << "eligible for club A" << endl;
        }
        else if (grade == 'B'){
            cout << "eligible for club B" << endl;
        }
        else if (grade == 'C'){
            cout << "eligible for club C" << endl;
        }
        else{
            cout << "not eligible for any club" << endl;
        }
    }
};

int searchStudent(int id , student obj[]){
    for (int i = 0; i < 5; i++){
        if (obj[i].studentID == id){
            return i;
        }
    }
    return -1;
}


    int main(){
        student obj[5] = {
            {"John", 1, 450},
            {"Jane", 2, 350},
            {"Doe", 3, 250},
            {"Smith", 4, 150},
            {"Emily", 5, 50}
    };
    
    int i, id2; char rez;
    // for (i = 0; i < 5; i++){
    //     obj[i].display();
    //     cout << "Grade : " << obj[i].grade() << endl;
    //     obj[i].clubAssignment(obj[i].grade());
    // }

    cout << "enter student id " <<endl;
    cin >> id2;
    int index = searchStudent(id2 , obj);
    if (index != -1){
        cout << "Student found at index " << index << endl;
        cout << "Name : " << obj[index].studentName << "\t Marks : " << obj[index].marks << endl;
        cout << "Grade : " << obj[index].grade() << endl;
        obj[index].clubAssignment(obj[index].grade());
    }
    else{
        cout << "Student not found" << endl;
    }
    return 0;



}