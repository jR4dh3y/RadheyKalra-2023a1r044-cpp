/*Program to create a class with name Product_Info and with a function with 
name Welcome_Message() , this function on execution , will display a message 
on screen , "Welcome to MyStore" */
#include<iostream>
using namespace std;
class Product_Info
{
public:void Welcome_Message()
{
   cout<<"Welcome to MyStore";
}
};
int main()
{
    Product_Info obj;
obj.Welcome_Message();
    return 0;
}