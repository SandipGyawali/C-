//Data type in C
/*
-> In C programming, data types are declarations
 for variables. This determines the type and 
 size of data associated with variables.
  For example, int myVar and many more.

   There are different type of datatype.They are:
   1.Primary datatype.
   2.Derived datatype.
   3.User-defined datatype.

   Primary     Derived      User-defined 
 *Int        *Array        *Enum
  *float      *Structure   *Typedef
  *double     *Union
  *char       *Pointers
  *void
*/
//ASCII==American Standard code for information 
//interchange..
/*
ASCII==American Standard code for information interchange..

Each character have their own unique ASCII
 value which helps the compiler to understand
  the symbol and letters.
*/

//Some codes using primary data types in C..

#include<stdio.h>
#include<conio.h>
void size();
int main(){
   size();
    return 0;
}
void size(){
    
    int a = 4000;   // positive integer data type
    float b = 5.2324;   // float data type
    char c = 'Z';   // char data type
    long d = 41657;   // long positive integer data type
    long e = -21556;   // long -ve integer data type
    int f = -185;   // -ve integer data type
    short g = 130;   // short +ve integer data type
    short h = -130;   // short -ve integer data type
    double i = 4.1234567890;  // double float data type
    float j = -3.55;   // float data type

}