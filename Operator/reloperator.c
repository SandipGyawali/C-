/*
An arithmetic operator performs mathematical
 operations such as addition, subtraction, 
 multiplication, division etc on numerical values 
 (constants and variables).

 <,>,<=,>===,!= are some the relational operator in c.

*/
//Example..
//wap to input two number and swap them with and without using 
//3rd variable..

#include<stdio.h>
int a,b;
void with();
void without();
int main(){
     printf("With using 3rd variable\n\n");
     with();
     printf("Without using 3rd variable\n\n");
     without();
    return 0;
}
void with(){

    int temp=0;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("The value before swapped are a:%d and b:%d\n",a,b);  
    temp=a;
    a=b;
    b=temp;
    printf("The values after swapped are a:%d and b:%d\n\n",a,b);
}
void without(){
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    printf("the value before swapped are a:%d and b:%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The values after swapped are a:%d and b:%d\n",a,b);
}
