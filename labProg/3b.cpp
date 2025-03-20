// #include <iostream>
// using namespace std;    

// class program{
//     public:
//     int a = 20;
    
//     void display(){      
//         cout << "Value of a: " << a << endl;
//     }
// };

// void method1(program obj1){ 
//     obj1.a = 20;
//     cout << "Value of a in method1: " << obj1.a << endl;
// }

// void method2(program &obj){ 
//     obj.a = 30;
//     cout << "Value of a in method2: " << obj.a << endl;
// }

// void method3(program *obj){ 
//     obj->a = 40;
//     cout << "Value of a in method3: " << obj->a << endl;
// }

// void method4(const program obj2){ 
//     cout << "Value of a in method4: " << obj2.a << endl;
// }

// int main(){
//     program obj;
//     obj.display();
//     method1(obj); // pass by value
//     obj.display(); // object is not changed
//     method2(obj); // pass by reference
//     obj.display(); // object is changed
//     method3(&obj); // pass by pointer
//     obj.display(); // object is changed
//     method4(obj); // pass by const object
//     obj.display(); // object is not changed
//     return 0;
// }


#include <iostream>
using namespace std;

class student{
    public:
    string studentName;
    int studentId;
    float marks,per;

    student(string name, int id, float m){
        studentName = name;
        studentId = id;
        marks = m;
    }
    void display(){
        cout << "\nName = " << studentName << "\t Marks = " << marks;
    }
    int search(int id){
        if(studentId == id){
            cout << "\nStudent found: " << studentName << "\t ID: " << studentId << "\t Marks: " << marks;
            return 1;        
        }
        return 0; 
    }
};