#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
  
  float l,b,a,c;
  printf("Enter a length and breadth:");
  scanf("%f %f",&l,&b);
  a=l*b;
  c=a*(l+b);
  printf("the area of rectangle is:%.2f\n",a);
  printf("the perimeter of a rectangle is:%.2f",c);
  return 0;
}