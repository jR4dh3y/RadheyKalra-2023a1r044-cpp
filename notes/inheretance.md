## Inheritance in C++

- Used to inherit or extend properties of existing classes into new classes.
- Reusability in application is possible only because of the inheritance feature.

types of inheritance:
1. Single level inheritance
2. Multi level inheritance
3. Multiple inheritance
4. Hibrid inheritance
5. Hierarchical inheritance

## Single level inheritance

parent class -> child class

refference: [2-4-25.cpp](../classProg/2-4-25.cpp)


### important points
- to inherit existing class featurs into new class, we have atleast 1 new feature in new class.
- we always create instance of child class in inheritance.
- behavior of constructor and destructor in inheritance 
    1. constructor follows top to bottom order, first base class constructor is invoked and then child class.
    2. diestructor follows bottom to top order, first child class destructor is invoked and then base class.

### Rules of access specifiers in inheritance 
1. Public - Public members of base class remains public in derived class.
2. Private - Private members of base class are not directly accessible in derived class.
3. Protected - members of base class remain protected in derived class, protected will act as public to derived class and private to other classes
4. Default - if we dont declare any access specifier with member ver and member fn,private access specifier is automatically appplied on it.

- we always declare instance of child class or derived class.
- instance or object of child class can only access public member of parent class

## Multi level inheritance

parent class -> child class -> grand child class

refference: [2-4-25.cpp](../classProg/2-4-25.cpp)

## Multiple inheritance
- In this type of inheritance, a derived class can have more than one base class.

parent class1,class2 -> child class 

- constructor of base class which was declared first in inheritance list will be invoked first, then the constructor of second base class will be invoked.

```

[parent class 1]    [parent classs 2]
    \                       /
     \                     /
      \                   /
        [  child class  ]

```

refference: [7-4-25.cpp](../classProg/7-4-25.cpp)


## Hierarchical inheritance
- In this type of inheritance, a single base class can have more than one derived class.

```
         [parent class]
           /       \
          /         \
         /           \
[child class 1]    [child class 2]

```
refference: [7-4-25.cpp](../classProg/7-4-25.cpp)
