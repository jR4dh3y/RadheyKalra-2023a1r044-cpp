/*
write a program for employee managment system 
1. create a class witn name employee
2. create a parameterized constructor to initialize class attributes like - 
   - name
   - code
   - salary
3. create a function to display employee details
4. create a function to calculate components of salary - 
    - ta  (3% of basic salary)
    - da  (4% of basic salary)
    - hra (5% of basic salary)
    - pf  (4% of basic salary)
   gross salary is sum of basic salary and all components

5. create a function update() to increment basic salary as 
    - gross salary between 10000 to 20000 - 10%
    - gross salary between 20001 to 30000 - 15%
    - gross salary above 30000 - 20%
6. create a function update_profile() if the user wans to correct its name or code
7. create a function with name get_deta() that only reads employee data

*/


#include <iostream>
using namespace std;

class employee {
    // private:
    public:
        string name;
        int code;
        float basic_salary;

        employee(string emp_name, int emp_code, float emp_salary) {
            name = emp_name;
            code = emp_code;
            basic_salary = emp_salary;
        }
        void display(){
            cout << "employee Name: " << name << endl;
            cout << "employee Code: " << code << endl;
            cout << "Basic Salary: " << basic_salary << endl;
            cout << "gross salary: " << gross_sal() << endl;
        }
        float gross_sal(){
            float ta = 0.03 * basic_salary;
            float da = 0.04 * basic_salary;
            float hra = 0.05 * basic_salary;
            float pf = 0.04 * basic_salary;
            return basic_salary + ta + da + hra - pf;
        }
        void update(){
            float gross = gross_sal();
            if (gross >= 10000 && gross <= 20000) {
                basic_salary += basic_salary * 0.10;
            } else if (gross > 20000 && gross <= 30000) {
                basic_salary += basic_salary * 0.15;
            } else if (gross > 30000) {
                basic_salary += basic_salary * 0.20;
            }
        }
        void update_profile(int old_id, employee &obj){
            if (code == old_id) {
                cout << "Enter new name: ";
                cin >> name;
                cout << "Enter new code: ";
                cin >> code;
                cout << "Profile updated successfully!" << endl;
            } else {
                cout << "Employee not found!" << endl;
            }
        }
        
};

int main(){
    employee obj[4] ={
        {"John", 101, 15000},
        {"Alice", 102, 25000},
        {"Bob", 103, 35000},
        {"Charlie", 104, 18000}
    };

    while(true){
        cout << "1. Display Employee Details" << endl;
        cout << "2. Update Employee Salary" << endl;
        cout << "3. Update Employee Profile" << endl;
        cout << "4. Exit" << endl;
        int choice;
        cin >> choice;

        switch(choice){
            case 1:
                for(int i=0; i<4; i++){
                    obj[i].display();
                    cout << endl;
                }
                break;
            case 2:
                int a;
                cout << "Enter employee code to update salary: ";
                cin >> a;
                for(int i=0; i<4; i++){
                    if(obj[i].code == a){
                        obj[i].update();
                        cout << "Salary updated for employee code: " << a << endl;
                        cout << endl;
                        obj[i].display();
                    }
                }
                break;
            case 3:
                int old_id;
                cout << "Enter employee code to update profile: "<< endl;
                cin >> old_id;
                for(int i=0; i<4; i++){
                    if(obj[i].code == old_id){
                        obj[i].update_profile(old_id, obj[i]);
                        obj[i].display();
                    }
                }
                cout << "Profile updated successfully!" << endl;
                cout << "Updated Employee Details:" << endl;
                for(int i=0; i<4; i++){
                    obj[i].display();
                    cout << endl;
                }
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
