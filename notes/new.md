## returning object from a function
a function can return single value or object at a time.
- object has `class` data type

### types of returning object
1. return as value (create separate copy of object)
2. return as reference (will reffer orignal object)
3. return as pointer (dynamically initialized)

- syntax
```c++
class program{
    program statements(){
        return program;
    }
};

```
```
      [class program]
     /               \
(receive object)    (sending object)
     \               /
      [class program]


object as parameter recives value 
from class or access members variable

object as return type can send updated value to class member
variable and object

```


