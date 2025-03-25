/*Write a program
create a class Student_Management_System
stores student infromation(Name,Regitration Number , Mobile Number) of 10 students
display records using Array of Objects
*/
// Example Code
#include<iostream>
using namespace std;
class Area
{
private : int radius;
public : Area(int r){
    radius = r;
}
public : void Display()
{
    cout<<"radius is "<<radius;
}
};
int main(){
    Area obj[3]={{1},{2},{3}};
    int i;
    for(i = 0 ;i<3;i++){
        obj[3].Display();
    }

}