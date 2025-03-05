## types of programming types 
- procedural programming : c 
- object oriented programming : c++
- object based programming : c++, javascript

# c++
- c++ -> c + object oriented programming
- all the code in c++ is inside a class
- class is a blueprint of an object. calss has properties and methods. the objests which accepts these properties and methods are called instances of the class or they belong to that class.
- class contais data and functions

------

### some deffinations 
1. object : real world entity or tangable entity (anything that you can see,touch or feel). object is used to establish a communivcation between different members of class. object are used in programming to relate our code with the real world.
    - char of object
    1. state - object must have a state
    2. behaviour - reaction of object on change of state
    3. unique id - 

2. class : collection of object with similar char or blue print of program

## main features of OPP

1. encapsulation and abstraction
- "process of warping up of data or varr and func or methods in a class".
    to protect our data and func from unauthorized access. this process is also known as data hiding 
- abstraction - process of showing only the relevent information.
    encapsulation and abstraction are implemented using access specifiers.

2. inheritance
- reusability: inherits features of existing class features in to new class.
    rule : new class must have atleast 1 new feature.

3.polymorfisim
- it is a greek work, poly means meny and morph means forms.
    ability to exist in many forms.
- implimented using 
    1. static polymorfisim (eatly binding or function overloading)
    2. dynamic polymorfisim (late binding or function overriding)

---

## some basic shi
- basic requirements for programing language 
    1. IDE - intigrated dev env includes the following  
        - compiler or interpretter
        - Preset of libraries are installed 

- ```#include``` means preprocessor directive 
- ```iosteram``` input output stream, supports functions related to input and output.
- ```using``` is a keyword
- ```namespace``` also a keyword, collection of predefined classes
- ```std``` name of the predefine namespace 

- syantax of class 
```c++ 
class classname{
    member var;
    access specifier:
    member func declaration;
};
```
- encapsilation and abstration is implemented in program using access specifiers 
    1. public scope (global)
    2. private scope (limited)
    3. protected scope (acts as both public and private, depending on the inheritance calss)


## functions 
- function is a collection of starements combining to perform a particular task.
    - A function has there parts
        1. declaration
        2. defination
        3. calling 
    - types of functions
        1. predefined 
        2. user definded  
- syntax
```c++
return_type function_name(parameters){
    // body of function
}
```
- types of functions
    1. with return type and with arguments
    2. with return type and without arguments
    3. without return type and with arguments
    4. without return type and without arguments

- process of linking the function with the class is called as function binding
- inline functions are used to reduce the overhead of frequent calling of functions

### calling of functions
- function can be called in 2 ways
    1. call by value - any change in actual parameter will not affect the formal parameter
    2. call by reference - any change in actual parameter will affect the formal parameter

### properties of array 
- static data type
- contigous memory allocation
- linear data structure
- first element is stored at 0th index
- last element is stored at n-1 index
- n is the size of the array

#### declaration of array
```c++
data_type array_name[size];
```
#### initialization of array
- direct initialization
- accept initialization


