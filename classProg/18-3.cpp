/*
write a program to create a class with name countUser
create a function with name count(), this function will display total number of users for this class. 
*/

#include <iostream>
using namespace std;

class countUser{
    static int count ;
    public:
        countUser(){
            count++;
        
        }

        static int getCount() {
            return count;
        }
};

int countUser::count = 0;

int main(){
    countUser a;
    countUser b;
    countUser c;
    cout << "Total number of users : " << countUser::getCount() << endl;
    return 0;
}
