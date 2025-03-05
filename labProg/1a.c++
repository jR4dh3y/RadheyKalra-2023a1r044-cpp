/* 1. analyze and design classes for a student management systerm
      to create a student class, its constructor, deconstructor and member function
      to create a cource class, its constructor, deconstructor and member function 
   2. to allocate appropriate access specifiers to data memvbers of student and course class along with justification in comments
      to add the details of student using a parameterized constroctor of student class
   3. to update the details of a student using a member function of student class
      to delete the details of a student using a member function of student class
   */

   #include <iostream>
   using namespace std;
   
   class Student {
   private:
       string name;
       int roll;
   
   public:
       Student(string n, int r) : name(n), roll(r) {}
   
       void display() const {
           cout << "Name: " << name << endl;
           cout << "Roll: " << roll << endl;
       }
   
       void update(string n, int r) {
           name = n;
           roll = r;
       }
   
       void deleteDetails() {
           name = "";
           roll = 0;
       }
   };
   
   class Course {
   private:
       string course_name;
       int course_code;
   
   public:
       Course(string name, int code) : course_name(name), course_code(code) {}
   
       void display() const {
           cout << "Course Name: " << course_name << endl;
           cout << "Course Code: " << course_code << endl;
       }
   
       void update(string name, int code) {
           course_name = name;
           course_code = code;
       }
   
       void deleteDetails() {
           course_name = "";
           course_code = 0;
       }
   };
   
   int main() {
       int ch;
       string name;
       int roll;
       string course_name;
       int course_code;
       Student s("", 0);
       Course c("", 0);
   
       while (true) {
           cout << "1. Add student\n2. Update student\n3. Delete student\n4. Add course\n5. Update course\n6. Delete course\n7. Exit\nEnter your choice: ";
           cin >> ch;
           switch (ch) {
               case 1:
                   cout << "Enter name: ";
                   cin >> name;
                   cout << "Enter roll: ";
                   cin >> roll;
                   s = Student(name, roll);
                   s.display();
                   break;
               case 2:
                   cout << "Enter name: ";
                   cin >> name;
                   cout << "Enter roll: ";
                   cin >> roll;
                   s.update(name, roll);
                   s.display();
                   break;
               case 3:
                   s.deleteDetails();
                   s.display();
                   break;
               case 4:
                   cout << "Enter course name: ";
                   cin >> course_name;
                   cout << "Enter course code: ";
                   cin >> course_code;
                   c = Course(course_name, course_code);
                   c.display();
                   break;
               case 5:
                   cout << "Enter course name: ";
                   cin >> course_name;
                   cout << "Enter course code: ";
                   cin >> course_code;
                   c.update(course_name, course_code);
                   c.display();
                   break;
               case 6:
                   c.deleteDetails();
                   c.display();
                   break;
               case 7:
                   exit(0);
               default:
                   cout << "Invalid choice" << endl;
           }
       }
       return 0;
   }
   