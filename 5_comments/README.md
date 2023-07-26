# Definition

`Comments` are program text that is ignored by the compiler.

## two types of comments

### 1. //Single-line

```c++
#include <iostream>
int main()
{
    std::cout<<"Let's learn single-line comments.";
    // This is a comment. It is ignored by the computer.
    return 0;
}
```

### 2. /*Paired*/

```c++
#include <iostream>
int main()
{
    std::cout<<"Let's learn paired comments.";
    /*
    This is paired type comment.
    Everything between the delimiters are ignored.
    std::out <<"This too";
    */
   return 0;
}
```
