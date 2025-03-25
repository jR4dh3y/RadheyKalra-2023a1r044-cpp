/*Program in cpp to create a class with name Area , default constructor of class
which set radius value 5 , and function() with name calculate(),this function
will calculate Area of Circle(3.14 * Radius * Radius) ,finally create destructor
to free memory of used variables*/
#include<iostream>
using namespace std;
class Area{
private : float radius,res;
public : Area(){
    radius = 5;
}
public : void Calculate(){
res = 3.14 * radius * radius;
cout<<"\n Area of Circle is "<<res;
}
};
int main(){
    Area obj;
    obj.Calculate();
    return 0;
}