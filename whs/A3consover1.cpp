/*Program to Demonstrate the concept of Constructor Overloading.
Create a class with name  Area , create a constructor with name Area(),
with Constructor calculate Area of Circle , Area of Rectangle, Area of triangle,
using constructor overloading.
*/
#include<iostream>
using namespace std;
class Area{
    private : float res=0;float l1; float b;
public :  Area(float radius){  //Constructor1
res = 3.14 * radius * radius;
cout<<"\n Area of Circle is "<<res;
}
public :  Area(float l, float h){ //Constructor2
    res = 0.5 * l * h;
    cout<<"\n Area of Triangle is "<<res;
    }
    public :  Area()  //Constructor3
    {   l1=6,b=9;     
        res = l1 * b;
        cout<<"\n Area of Rectangle is "<<res;
        }
};
int main(){
    Area obj1;
    Area obj2(8);
    Area obj3(8,9);
    return 0;
}