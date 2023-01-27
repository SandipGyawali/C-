//Loops in C.

#include<stdio.h>
void forl(),whilel(),dowhilel();
void breakc(),continuec(),nestedc();
int main(){
    //Function should be called here to run the program inside it.
    breakc();
    return 0;
}
//For loop.
//  --> It is an entry controlled loop.
void forl(){
    //prints the number from 1 to 10.
    for(int i=0;i<10;i++){
         printf("%d",i);
    }
}
//while loop .
// --> It is an entry controlled loop
void whilel(){
   int i;
   //to print the value from 1 to 5.
   while(i<=5){
      printf("Hello");
      i++;
   }
}
//do-while loop
// --> It is an exit controlled loop
void dowhilel(){
    int i=1;
        //prints value from 1 to 10
      do{
      printf("%d",i);
      i++;
    }while(i<=10);
    
}

//Break and Continue statement in C.
/*
1.Break
--> Break statement terminates the loop or exit from the loop.

2.Continue.
--> Continue statement skips the current iteration of the loop 
    and continue with the next iteration.
*/
//Example.
//break statement
void breakc(){
    int i,a,sum=0;
    for(i=0;i<=5;i++){
      printf("Enter an integer:");
      scanf("%d",&a);
      if(a<=0){
        break;
        
      }
      sum =sum+a;
    }
    printf("Sum=%d",sum);
}

//continure statement
void continuec(){
    int i,a,sum=0;
    for(i=1;i<=5;i++){
     printf("Enter an integer.");
     scanf("%d",&a);
     if(a<=0){
      continue;
     }
     sum =+a;
    }
    printf("the sum is:%d",sum);
}
//Nested loop.
//-->Using loop repeaditly is known as Nested loop.
void nestedc(){
 for(int j=1;j<=5;j++){
    for(int i=0;i<=5;i++){
       printf("*");
    }
    printf("/n");
 }
}
/*
-->If you want to input in horizontal line then update value in inner loop.
-->If you want to input in vertical line then update value in outer loop.
Note: The number of line is teken care by outer loop and 
the actual printing is done by inner loop in above code.
Syntax.

for(initialize;condition;modify){
    for(initialize;condition;modify){
      Inner loop statement block;
    }
    Outer loop statement block;
}
*/