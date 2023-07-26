# While Statement

## Definition

A while statement repeatedly executes a section of code so long as a given condition is true.

`Source` [link](https://www.youtube.com/watch?v=iF4i423144E&list=PLBlnK6fEyqRh6isJ01MBnbNpV3ZsktSyS&index=10)

![while_flow_chart](../images/while_loop.png)

```c++
#include <iostream>
int main()
{
    int count = 1;
    while(count <= 10)
    {
        std::cout << "Hello there" <<std::endl;
        count = count + 1;
    }
    return 0;
}
```

```c++
#include <iostream>
int main()
{
    int count = 1, sum = 0;
    while (count <= 10)
    {
        sum+=count; // same as sum = sum + count
        count = count + 1;
    }
    std::cout << "Sum of 1 to 10 = "<<sum<<std::endl;
    return 0;
}
```

```c++
#include <iostream>
int main()
{
    int count=1, sum=0, val;
    std::cout<<"Enter the number till which the sum has to be calculated ";
    std::cin >>  val;
    while (count<=val)
    {
        sum +=count;// same as sum = sum + count
        count = count + 1;
    }
    return 0;
}
```
