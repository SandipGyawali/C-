/*
+,-,*,/,% operator are known as arithmetic operator.
It is used for solving mathematical problem.
*/

//Example for arithmetic operator..

#include<stdio.h>
int main(){
    int a=10,b=7;
    printf("The sum of %d and %d is: %d\n",a,b,a+b);
    printf("The diff of %d and %d is: %d\n",a,b,a-b);
    printf("The mul of %d and %d is: %d\n",a,b,a*b);
    printf("The div of %d and %d is: %d\n",a,b,a/b);
    printf("The mod of %d and %d is: %d\n",a,b,a%b);
    return 0;
}

//Note:Modulus operator (%) cannot be used in floating point operator.
/*
  for modulus..
  -10 % 7 = -3 ans but 
  10 % -1 = 3 ans
The =ve and -ve result in modulus operator is based on the value i.e written at first,
based on the symbol of inter.
*/

//Order of arithmetic operator=*,/,%,+,-

//Assignment operator...
/*
a=5*4 basic syntax..
lhs must be a name of a variable
 and int rhs we must assign a value.

 general syntax of declaration..
 a=a+1 and a +=1 are same..
 This are two different ways to assign a variable..


*/