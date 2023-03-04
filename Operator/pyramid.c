//chosse an operation an enter the number according to the operation you want to follow.Solved using switch case statement..

#include<stdio.h>
#include<conio.h>
int main(){
    int number,num,mul,val,val_pal,rev,digit,value;
    printf("Enter an option in the menu.\n");
    printf("1.To check the given number is odd or even.\n");
    printf("2.To find the multiplication table up to nth number.\n");
    printf("3.To check the given number is palindrome or not.");
    printf("Exit.\n");
    printf("Enter an option:");
    scanf("%d",&number);
    
    switch(number){
        
        case 1:
           
           printf("Enter a number:");
           scanf("%d",&num);
           if(num%2==0){
             printf("It is an even number");
           }else{
            printf("It is an odd number");
           }
         break;

        case 2:
            printf("Enter a number:");
            scanf("%d",&val);
            for(int i=1;i<=10;i++){
               mul=val*i;
               printf("%d * %d : %d\n",val,i,mul);
            }
         break;

        case 3:
            printf("Enter a number:");
            scanf("%d",&val_pal);
              value=val_pal;
              while(value>0){
                     digit=value%10;
                     rev=(rev*10)+digit;
                     value=value/10; 
              }
              if(value==rev){
                printf("It is palindrome.");
              }else{
                printf("It is not palindrome.");
              }
              break;

        default:
        printf("Exit");

    }
    return 0;
}