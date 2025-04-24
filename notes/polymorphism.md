# Polymorphismame

- concept of object oriented programming
- its a greek word which means "many forms
- it allows us to perform a single action in different ways"


<br>
<div style="text-align: center; position: relative;">
<div><b>[ Polymorphism ]</b></div>
    <div>
        <span style="position: relative; left: -50px;">/</span>
        <span style="position: relative; left: 50px;">\</span><br>
        <span style="position: relative; left: -60px;">/</span>
        <span style="position: relative; left: 60px;">\</span>
    </div>
    <div style="display: flex; justify-content: space-between; width: 300px; margin: 0 auto; gap: 20px;">
        <div><b>static/compile time </b><br>(function overloading)<br></div>
        <div><b>dynamic/runtime </b><br>(function overriding)</div>
    </div>
</div>
<br>

[code](../classProg/15-4-25.cpp)

## function overloading
- using same function multiple times to save memory allocation time and memory usage

Rule: change number, order or type of parameters every time when we use the same function

## function overriding
- Achieved at runtime, here we override the base class function in derived class

rule: name, return type must be same in derived class

this is required in software development to update software when our software is live and we want to change the role or behaviour of existing feature. Then we use this 



    will complete later here
---

### Virtual function
is function present in base class and will be overridden by the dericed class function. we create a function as virtual in base class when it is confirmed that the function is doing ro me updated in furure and at present we have its initial implementation.

it is declared with `virtual` keyword in base class.

provide instruction to compliler that the funcion will be overridden by the derived class function.

```c++
virtual void show() {
    cout << "Base class show function" << endl;
}
```

### Pure virtual function
Initialize with 0 and have no implementation.
This is used in scenario where we have a concept only and at present no implementatoin of code is present.

```c++
virtual void show() = 0;
```
- [refference-code](../classProg/17-3-25.cpp)


### Virtual class
In cpp, there is no provision to declare a virtual class but indirectly we can make a class as virtual class by defining virtual function inside it. 

### Abstract function
function with no definition is a abstract function. In cpp, pure virtual function is a abstract function.

### Abstract class
classes which cannot be instantiated or has no object are called abstract class.
In cpp, a class with atleast 1 pure virtual function is a abstract class.