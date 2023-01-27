//Logical Operator in C..
/*
Logical operators in C are used to combine multiple 
conditions/constraints. Logical Operators returns 
either 0 or 1, it depends on the expression result
 true or false. In C programming for decision-making,
  we use logical operators. We have 3 major logical 
  operators in the C language:

--> We have 3 major logical operators in the C language:

Logical AND (&&)

X	Y	X&&Y
1	1	1
1	0	0
0	1	0
0	0	0

Logical OR (||)

X	Y	X||Y
1	1	1
1	0	1
0	1	1
0	0	0

Logical NOT (!)

X	!X
0	1
1	0

-->All the logical operator are binary operator except logical not operator.
*/

//Example of logical operator.

#include<stdio.h>
void and(),or(),not();
int a,b;
int main(){
    printf("Logical And\n\n");
    and();
    printf("\nLogical OR\n\n");
    or();
    printf("\nLogical NOT\n\n");
    not();
    return 0;
}
void and(){
  printf("Enter two number:");
  scanf("%d%d",&a,&b);
  if(a>0 && b>0){
    /* And operator checks both the condition and if it 
    is true then the condition will return true value.
    If first condition is false then the whole condition is false.
   */
   printf("Both values are greater than 0\n");
  }else{
    printf("Both values are less than 0");
  }
}
void or(){
 printf("Enter two number:");
 scanf("%d%d",&a,&b);
 if(a>0 || b>0){
    /*
    Or operator checks one condition and if one condition is true the
     value returned in that condition will be true.
    If first condition is false then it will check 2nd condition.
    If first condition is true then it will return true value and ignores the 2nd condition. 
    */
   printf("Both values are greater than 0\n");
 }else{
    printf("Both values are less than 0");
 }
}
void not(){
    printf("Enter a number:");
    scanf("%d",&a);
    if(!(a)){
        /*
        Logical not operator is a binary operator and only returns the opposite value input by the user.
        */
       printf("The value input by the user was 0");
    }else{
        printf("The value input by the user was not 0");
    }
}
