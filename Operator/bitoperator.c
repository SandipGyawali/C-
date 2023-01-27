//In C programming following 6 operators are bitwise operators.
/*
1.The & (bitwise AND) in C or C++ takes two numbers as 
operands and does AND on every bit of two numbers.
 The result of AND is 1 only if both bits are 1.
 
2.The | (bitwise OR) in C or C++ takes two numbers as 
operands and does OR on every bit of two numbers. 

The result of OR is 1 if any of the two bits is 1. 
3.The ^ (bitwise XOR) in C or C++ takes two numbers as
 operands and does XOR on every bit of two numbers.
  The result of XOR is 1 if the two bits are different.

4.The << (left shift) in C or C++ takes two numbers, 
left shifts the bits of the first operand,
 the second operand decides the number
  of places to shift. 

5.The >> (right shift) in C or C++ takes two numbers,
 right shifts the bits of the first operand,
  the second operand decides the number of places to
   shift. 

6.The ~ (bitwise NOT) in C or C++ takes one number and
 inverts all bits of it. 

 Note:All bitwise operator are Binary operator except (~)
 bitwise compliment.It  is a unary operator.
*/
//Example of bitwise operator in C.

#include<stdio.h>
void shift();
int main(){
    int a=5,b=9;
    printf("a=%d , b=%d\n",a,b);
    printf("a & b=%d\n\n",a&b);   
    printf("a | b=%d\n\n",a|b);
    printf("a ^ b=%d\n\n",a^b);
    printf("~a=%d\n\n",~a);
    printf("~b=%d\n\n",~b);
    shift();
    return 0;
}
void shift(){
    /*
    formula for calculating left shift is:variable*shifting value^2.
    formula for calculating right shift is:variable/shifting value^2.
 
    Xor truth table
    B	A	Q
    0   0	0
    0	1	1
    1	0	1
    1	1	0

    */
    int a =5;
    int var =2;
    printf("Bitwise left shift of %d is: %d\n\n",a,a<<var);
    printf("Bitwise right shift of %d is: %d",a,a>>var);
}

//Comma operator.
/*
The comma as a Seperator.

The comma operator in c comes with the lowest precedence in the C language. The comma operator is basically a binary operator that initially operates the first available operand, 
discards the obtained result from it, evaluates the operands present after this, and then returns the result/value accordingly.
When we want to declare multiple numbers of variables in any program and provide different arguments in any function, we use the comma in the form of a separator in the program.

For instance,

int x, y, z;

In the statement mentioned above, the comma acts as a separator and informs the compiler that the x, y, and z variables are three different types of variables.

Example
#include<stdio.h>
int main() {
int m = 5, n = 10;
void function(m, n);
}

Here, the program will use both m and n as function parameters. Take a look at the following program to understand how we use comma operators in the C language.

#include<stdio.h>
main() {
int p = 35;
int q = (p++, ++p);
printf(“%d”, q);
}
The Output obtained out of this program will be: 37

Comma as a Operator..

We use the comma in the form of an operator when we want to assign multiple numbers of values to any variable in a program with the help of a comma.

For instance,

p = 40, 50, 60, 70, 80, 90;

q = (40, 50, 60, 70, 80, 90);

In the very first statement mentioned above, the value assigned to the variable p will be equal to 40. It is because the (=) equal to assignment operator has a higher priority as compared to the
 (,) comma operator. Thus, the program will assign the variable x with a value of 40.
In the case of the second statement,
 the value of q will be equivalent to 90.
  It is because the values 40, 50, 60, 70, 80 and 90 are enclosed in the form of braces () and these braces have a higher priority, as compared to the equal to (=) assignment operator.
   Thus, when we provide the variable q with multiple values (using the comma operator and the braces), then the program will consider the right-most value as the result/output of this expression. Thus, the program variable q will be assigned with the value of 90.

Example
#include<stdio.h>
int main() {
int m = (10, 20);
int n = (func1(), func2());
}

In this case, the program will assign the value 20 to the variable m. Then, for the next statement
 in the program, the execution of func1() will occur first. Only after that will the execution of the second one occur.

Let us consider another program in C,

#include <stdio.h>
int main()
{
int x,y;
x = 40,50,60;
y = (40,50,60);
printf(“x= %d, y= %d\n”,x,y);
return 0;
}
Output
x= 40, y= 60

*/
