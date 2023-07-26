# Data types

|type specifier  | Equivalent type |C++ standard|LP32|ILP32|LLP64|LP64|
|----------------|:-----------------:|:------------:|:----:|:-----:|:-----:|:---:|
|signed char | signed char |8|8|8|8|8|
|unsigned char | unsigned char |8|8|8|8|8|
|----------------|:-----------------:|:------------:|:----:|:-----:|:-----:|:---:|
|short|short int|16|16|16|16|16|
|short int |short int|16|16|16|16|16|
|signed short |short int|16|16|16|16|16|
|signed short int |short int|16|16|16|16|16|
|unsigned short| unsigned short int |16|16|16|16|16|
|unsigned short int |unsigned short int|16|16|16|16|16|
|----------------|:-----------------:|:------------:|:----:|:-----:|:-----:|:---:|
|int |int|16|16|32|32|32|
|signed |int|16|16|32|32|32|
|signed int |int|16|16|32|32|32|
|unsigned|unsigned int|16|16|32|32|32|
|unsigned int |unsigned int|16|16|32|32|32|
|----------------|:-----------------:|:------------:|:----:|:-----:|:-----:|:---:|
|long |long int|32|32|32|32|64|
|long int |long int|32|32|32|32|64|
|signed long |long int|32|32|32|32|64|
|signed long int |long int|32|32|32|32|64|
|unsigned long |unsigned long int|32|32|32|32|64|
|unsigned long int |unsigned long int|32|32|32|32|64|
|----------------|:-----------------:|:------------:|:----:|:-----:|:-----:|:---:|
|long long | long long int|64|64|64|64|64|
|long long int |long long int|64|64|64|64|64|
|signed long long |long long int|64|64|64|64|64|
|signed long long int|long long int|64|64|64|64|64|
|unsigned long long | unsigned long long int |64|64|64|64|64|
|unsigned long long int | unsigned long long int |64|64|64|64|64|

Data models
The choices made by each implementation about the sizes of the fundamental types are collectively known as data model. Four data models found wide acceptance:

- 32 bit systems:
  - LP32 or 2/4/4 (int is 16-bit, long and pointer are 32-bit)
    - Win16 API
  - ILP32 or 4/4/4 (int, long, and pointer are 32-bit);
    - Win32 API
    - Unix and Unix-like systems (Linux, macOS)
  
- 64 bit systems:
  - LLP64 or 4/4/8 (int and long are 32-bit, pointer is 64-bit)
    - Win32 API (also called the Windows API) with compilation target 64-bit ARM (AArch64) or x86-64 (a.k.a. x64)
  - LP64 or 4/8/8 (int is 32-bit, long and pointer are 64-bit)
    - Unix and Unix-like systems (Linux, macOS)

`source` [link](https://en.cppreference.com/w/cpp/language/types)

```c++

#include <iostream>
#include <cmath>
#define SIZE(x) sizeof(x) * 8 //Get the size in bits
using namespace std;
void getRange(string type, int n) {
   if(type.compare("SIGNED") == 0) { //for signed numbers calculate lower and upper limit
      int min = pow(2, n - 1);
      int max = pow(2, n - 1) - 1;
      cout << "Range from " << (-1) * min << " to " << max <<endl;
   }else{ //for signed numbers calculate limit from 0
      int range = pow(2, n )-1;
      cout << "Range from 0 to " << range << endl;
   }
}
int main() {
   cout << "For Signed int: ";
   getRange("SIGNED", SIZE(int));
   cout << "For Signed float: ";
   getRange("SIGNED", SIZE(float));
   cout << "For Unsigned int: ";
   getRange("UNSIGNED", SIZE(unsigned int));
   cout << "For Unsigned short: ";
   getRange("UNSIGNED", SIZE(unsigned short int));
   cout << "For Signed char: ";
   getRange("SIGNED", SIZE(char));
}

```

`source` [link](https://intellipaat.com/community/70584/how-to-calculate-the-range-of-primitive-data-types)
