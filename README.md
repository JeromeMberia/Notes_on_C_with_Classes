To check the version
```bash
g++ --version
```

To compile the file run the code below.This will generate a executable `a.exe`.
```bash
g++ test.cpp
```
On `bash`
```bash
test.exe
```
```bash
a.exe
```

On Powershell
```powershell
.\test.exe
```
```powershell
.\a.exe 
```
if you don't set the location of the file `.\a.exe` and you write `a.exe`. Expect an error like this:

<style>
    .force-word-wrap pre code {
    white-space: normal;
    word-wrap: break-word;
    padding:10px;
    background-color: black;
    }
</style>

<div class="force-word-wrap">
<p style="color:red;">
a.exe: The term 'a.exe' is not recognized as a name of a cmdlet, function, script file, or executable program. <br>
Check the spelling of the name, or if a path was included, verify that the path is correct and try again.</p>

Suggestion [3,General]: The command a.exe was not found, but does exist in the current location. PowerShell does not load commands from the current location by default. If you trust this command, instead type: ".\a.exe". See "get-help about_Command_Precedence" for more details.
</div>



```C++
#include <iostream>
using namespace std;

int main()
{
	cout <<"Welcome to the C++ world.";
	return 0;
}
```