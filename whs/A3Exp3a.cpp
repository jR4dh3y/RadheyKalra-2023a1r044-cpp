// To update the details of a student using a member function of student class.
/*create student class with parametrized constructor ,
add details of  student with attributes like Name,RollNo, Marks,Credits
create display function to display records on screen.
create three functions Semester1()
Semester2()
Semester3()
all three semester functions stores copy of Marks attribute with them and retrieve
value of  Name ,RollNo ,credits form Student class.
create update function() to update attributes of Student class.
create delete function() to delete student record.
*/
#include<iostream>
using namespace std;
class Student{
    public: string Name;int RollNo;float Marks;float Credits;
    public : Student(string Name1,int RollNo1,float Marks1,float Credits1){
        Name = Name1;
        RollNo = RollNo1;
        Marks = Marks1;
        Credits = Credits1;
    }
    void Display(){
        cout<<"\n Name is "<<Name<<"\t Roll Number is "<<RollNo;
        cout<<"\n Marks are "<<Marks<<"\t Credits are "<<Credits;
    }
};
void Semester1(Student sem1){ //Object As Pass By Value
    sem1.Marks = 400;
    cout<<"\n Semester 1 Result is ";
    cout<<"\n Name is "<<sem1.Name<<"\t Roll Number is "<<sem1.RollNo;
        cout<<"\n Marks are "<<sem1.Marks<<"\t Credits are "<<sem1.Credits;
}
void Semester2(Student sem2){//Object As Pass By Value
    sem2.Marks = 450;
    cout<<"\n Semester 2 Result is ";
    cout<<"\n Name is "<<sem2.Name<<"\t Roll Number is "<<sem2.RollNo;
        cout<<"\n Marks are "<<sem2.Marks<<"\t Credits are "<<sem2.Credits;
}
void Semester3(Student sem3){//Object As Pass By Value
    sem3.Marks = 350;
    cout<<"\n Semester 3 Result is ";
    cout<<"\n Name is "<<sem3.Name<<"\t Roll Number is "<<sem3.RollNo;
        cout<<"\n Marks are "<<sem3.Marks<<"\t Credits are "<<sem3.Credits;
}
void Update(Student &obj){ //Object As Pass By Reference
    obj.Marks = 200;
    obj.Name ="ABC";
    obj.Display();
}
void Delete(Student *pobj){ //Object As Pass By Pointer
    pobj->Marks =0.0;
    pobj->Name=" ";
    pobj->Credits=0.0;
    pobj->RollNo=0;
    
}
int main(){
    Student obj("XYZ",101,0,5);
    obj.Display();
    Semester1(obj);
    Semester2(obj);
    Semester3(obj);
    Update(obj);
    Delete(&obj);
    obj.Display();
    return 0;

}