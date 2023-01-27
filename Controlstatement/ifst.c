/*
Conditional Statements in C programming are used to make
 decisions based on the conditions. Conditional 
 statements execute sequentially when there is no 
 condition around the statements. If you put some 
 condition for a block of statements, the execution
  flow may change based on the result evaluated by
   the condition. This process is called decision
    making in ‘C.’
 Type of control statement:
  *if statement.
  *if-else statement.
  *if-else-if ladder statement.
  *switch case. 
*/
//Examples of control statement

#include<stdio.h>
//declaring a function.
void ifc(),ifelse(),ifelseif(),switchc(),nestedif();

int main(){
     //You should call the function to run.
     //Example --> ifc(); Like this
    return 0;
}
//if statement
void ifc(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0){
      printf("Inside if-statement");
    }
    printf("The value was 0");
}
//if-else statement
void ifelse(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0){
        printf("the value entered was greater than 0");
        printf("Inside if block");
    }else{
        printf("The value entered was 0");
    }
}
//if-else-if statement.
void ifelseif(){
 int a;
 printf("Enter a number:");
 scanf("%d",&a);
 if(a>10){
  printf("Inside if block,value greater than 10");
 }else if(a>0){
    printf("Inside else if block,value greater than 0 but less than 10");
 }else{
    printf("Inside else block,value entered was less than 0");
 }
}
//switch statement.
//Calculator problem using switch case statement.
void switchc(){
    char ch;
    int a,b;
    printf("Enter an operation to be performed:");
    scanf("%c",&ch);
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    switch(ch){
        case '+':
               printf("The addition of two number is:%d",a+b);
               break;
        case '-':
               printf("The subtraction of two number is:%d",a-b);      
               break;
        case '*':
               printf("The multiplication of two number is:%d",a*b);
               break;
        case '%':
               printf("The remainder of two number is:%d",a%b);
               break;       
        case '/':
               printf("The division of two number is:%d",a/b);
               break; 
        default:    //if any case doesn't match with the condition then switch case will print what is written in default.
               printf("The operation that you want to perform is not there");
    }
}
//nested if statement
void nestedif(){
    // general syntax
    /*
    if(condition 1){
        if(condition 2){
           Inner if block statement.
        }
        outer if block statement.
    }
    out of if block statement
    */
}
//nested if else statement.
/*
if(condition 1){
    if(condition 2){
      Inner if block statement.
    }else{
      Inner else block statement.
    }
    OUter if block statement.
}else{
   OUter else block statement.
}
Out of the nested if statement.
*/