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
