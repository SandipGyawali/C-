//Increment and decrement operator in C..
/*
i++,i-- --> Postfix,postincrement.
++i,--i --> Prefix,preincrement.

* If you use the ++ operator as a prefix like: 
  ++var, the value of var is incremented by 1;
  then it returns the value.

* If you use the ++ operator as a postfix like:
 var++, the original value of var is returned first; 
 then var is incremented by 1.

*/

//Example of increment and decrement operator in C.

#include<stdio.h>
void inc();
int main(){
    int x=10,y;
    y=++x;
    printf("%d\n",x);
    printf("%d\n",y);
    inc();
    return 0;
}
void inc(){
    int a=5,b,c,d;
    b=--a;
    c=a++;
    d=++a;
    printf("%d %d %d %d",a,b,c,d);
}
