#include <iostream>
using namespace std;

class student{
    public:
        string studentName;
        int studentID;
        float marks;

        student(string name, int id, float marks) : studentName(name), studentID(id), marks(marks) {}

        void display(){
            cout << "\n Name : " << studentName << "\t Marks : "<< marks << endl;
        }
        
        void update(){
            cout << "enter updated marks: ";
            cin >> marks;
            cout << "details after updating" << endl;
            display();
        }

        void deleteStudent(int id){
            cout << "student with id to delete: " << id << endl;
            studentName = "";
            studentID = -1;
            marks = 0.0;
            cout << "Student record deleted." << endl;
        }
    };

    int main(){
        student obj[2] = {
            {"John", 1, 450},
            {"Alice", 5, 50}
        };

        for (int i = 0; i < 2; i++){
            obj[i].display();
        }

        int idl;
        cout << "enter studnt id to update";
        cin >> idl;
        for(int i = 0; i < 2; i++){
            if (obj[i].studentID == idl){
                obj[i].update();
            }
        }


        int id;
        cout << "enter student id to delete: ";
        cin >> id;
        for(int i = 0; i < 2; i++){
            if (obj[i].studentID == id){
                obj[i].deleteStudent(id);
            }
        }
        cout << endl;
        for (int i = 0; i < 2; i++){
            obj[i].display();
        }
        return 0;
        
    }

// class course{
    // public:
        // string courseName;
        // int courseID;
        // int courseCredits;
// 
        // course(string name, int id, int credits) : courseName(name), courseID(id), courseCredits(credits) {}
        // void display(){
            // cout << "Course Name: " << courseName << endl;
            // cout << "Course ID: " << courseID << endl;
            // cout << "Course Credits: " << courseCredits << endl;
        // }
// };
// 
// int main(){
    // course obj[2] = {{"c", 1, 8}, {"c++", 2, 6}};
// 
    // for (int i = 0; i < 2; i++) {
        // obj[i].display();
    // }
// }
// 