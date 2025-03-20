/* write a program to create a valss name billing app with attributes like product name , price
   implement a function discount() that calculates 10% discount on the price and display the result
   discount() will not modify the original price of the product
*/

#include <iostream> 
using namespace std;

class billing{
    public:
    string name;
    int price;

    billing(string n, int p){
        name=n;
        price=p;
    }

    void display(){
        cout<<"item name: "<<name<<"\t"<<"price: "<<price<<endl;
    }
};

void discount(billing obj2){
    cout<<"discounted price: "<<obj2.price-obj2.price*0.1<<endl;
}


int main(){
    billing obj("laptop", 50000);
    obj.display();
    discount(obj);
    return 0;
}

/*
class billing{
    public:
    vector<string> product;
    vector<int> price;
    billing(string p, int pr){
        product.push_back(p);
        price.push_back(pr);
    }

    void display(){
        cout<<product[0]<<" : "<<price[0]<<endl;
    }
};
    void discount(billing obj2){
        cout<<"Discounted price : "<<obj2.price[0]*0.9<<endl; 
    }

int main(){
    billing obj("Laptop", 50000);
    obj.display();
    discount(obj);
    return 0;
}
*/