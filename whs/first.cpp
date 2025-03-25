#include<iostream>
//#include:- Preprocessor directive
// iostream :- input output stream / supports functions related to input and output
// iostream have defination of all pre define input and output functions used in this 
// program. 
using namespace std;
/*Using is a keyword
namespace (keyword(reserved words)):- collection of predefine classes.
std:- name of the predefine namespace
*/
/*class is a keyword(Pre define word already defined in library) used to define a class.
Program is a user define name.
For User define name , we use some naming conventions .
*/
class Program 4 
{ //block all statements are enclosed inside the bracket.
 // Access Specifier  
public : void Display() // function defination  6
{ 7
    cout<<"Hello";  8// cout is used to display message on screen but the message must be 
    //enclosed in double quotes " " 
    //; terminator or end of statement
}9 
}; 10
int main() 1
{ 2
Program obj;3 
/*syntax of object :- class name object name */
obj.Display(); 5 //function calling syntax 
// object name .Access Method /  function name();
return 0; 11
} 12