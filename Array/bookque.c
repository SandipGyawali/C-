/*
program that accepts the price and stock of 5 different
bulbs,calculate the total stock value.
*/

#include<stdio.h>
#include<conio.h>
void main(){
  int stock[5],price[5],value=0;
  
  
  for(int i=0;i<5;i++){
   printf("Enter the stock of bulb:");
   scanf("%d",&stock[i]);
   printf("\nEnter the value of the bulb:");
  scanf("%d",&price[i]);   
 }
  for(int i=0;i<5;i++){
      value+=stock[i]*price[i];
  }
  printf("The total value of %d bulb is:%d",5,value);
}