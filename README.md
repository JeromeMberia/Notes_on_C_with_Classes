<base target="_blank">

# Disclaimer : this notes where made using this video [link](https://youtube.com/playlist?list=PLBlnK6fEyqRh6isJ01MBnbNpV3ZsktSyS) by Neso Academy. To learn C++

## Installation

Download the installer here [link](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download) or by searching in your web browser the phrase `mingw w64` then click the first link.

During the installation select `x86_64` from `Architecture` if your computer `x64 based`.

## Error

If you see the error `The file has been downloaded incorrectly` during the installation period.

Go to these site [link](https://sourceforge.net/projects/mingw-w64/files/). Scroll down until you see link named `x86_64-posix-sjlj` or `x86_64-posix-seh` under `MinGW-W64 GCC-8.1.0`.

Then search environment

How to write a git commit [link](https://reflectoring.io/meaningful-commit-messages/)

Note:There is no format am following

## To check the version

```bash
g++ --version
```

## To compile the file run the code below.This will generate a executable `a.exe`

```bash
g++ test.cpp
```

```bash
g++ test.cpp -o test
```

### On `bash`

```bash
test.exe
```

```bash
a.exe
```

### On Powershell

```powershell
.\test.exe
```

```powershell
.\a.exe 
```

if you don't set the location of the file `.\a.exe` and you write `a.exe`. Expect an error like this:

<p style="color:red;">a.exe: The term 'a.exe' is not recognized as a name of a cmdlet, function, script file, or executable program.<br> Check the spelling of the name, or if a path was included, verify that the path is correct and try again.</p>
<p>Suggestion [3,General]: The command a.exe was not found, but does exist in the current location. PowerShell does not load commands from the current location by default. If you trust this command, instead type: ".\a.exe". See "get-help about_Command_Precedence" for more details.</p>

```C++
#include <iostream>
using namespace std;

int main()
{
 cout <<"Welcome to the C++ world.";
 return 0;
}
```

## Style Guide for C++

[link](https://github.com/motine/cppstylelineup)

## Documentation

[link](https://en.cppreference.com/w/)

## Does C++ have a documentation

Check <a href="https://stackoverflow.com/questions/34967756/where-is-the-official-c-documentation" target="_blank">link</a> this.
