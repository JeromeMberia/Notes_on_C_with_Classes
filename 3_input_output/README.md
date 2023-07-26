# Input and Output

## The `iostream` library has two files

- istream(input stream)
- ostream(output stream)

## Define Stream

- A stream is a sequence of characters read from or written to an IO device.

For more details check [Link](https://en.cppreference.com/w/cpp/header/iostream)

## The iostream library defines four IO objects

1. `cin` (pronounced see-in) - standard input :point_right: of type `istream`
2. `cout` (pronounced see-out) - standard output :point_right: of type `ostream`
3. `cerr` (pronounced see-err) - standard error :point_right: of type `ostream`
4. `clog` (pronounced see-log) - general information :point_right: of type `ostream`

```c++
#include <iostream>
int main()
{
    std::cout << "Enter two number:" << std::endl;
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    std::cout << "The sum of " << n1 << " and " << n2 << " is " << n1 + n2 <<"."<< std::endl;
    return 0;
}
```
