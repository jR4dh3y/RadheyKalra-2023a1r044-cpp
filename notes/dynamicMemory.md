## Dynamic Memory Initialization in cpp 
dynamic means at runtime, the value wihich is not known at compile time and assign at runtime.

initialization : means assigning value to a object 

dynamic memory initialization is a process of assigning value at runtime which is not known at compile time.

eg- in social networking app, the number of user are not known at compile time
eg-  we want to calculate the sum of n numbers, but the value of n is not known at compile time.

in other example where a value assignment is dependent on the calculation performed by the function at runtume.

we can perform dynamic memory initialization using
1. constructor
2. using user input 
3. using calculation at runtime

## this pointer 
used to differentiate between the local variable and parameterized variable.
this is a hidden pointer avaliable with non static member.

```cpp
class A{
    private : int a;
    public : A(int a){
        this->a = a; // this is used to differentiate between the local variable and parameterized variable
    }
}
```
[code](/classProg/24-4-2025.cpp)

