//program on largest and smallest number in an array.

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
  int size;
  printf("enter the size of an array:\n");
  scanf("%d",&size);
  int arr1[size],largest;
  for(int i=0;i<size;i++){
    printf("Enter an element:");
    scanf("%d",&arr1[i]);
  }   
   largest=arr1[0];
   int smallest=arr1[1];
  for(int i=0;i<size;i++){
    if(largest<arr1[i])
        largest=arr1[i];
  
  if(smallest>arr1[i]){
    smallest=arr1[i];
  }
  }
  printf("The largest element present in the given array is:%d\n",largest);
  printf("The smallest element present in the given is:%d",smallest);
}


//program to find the number of elements in an Array.
#include<stdio.h>
#include<conio.h>
void main(){
    int array[]={15,50,12,13,14,45};
    int n;
    n=sizeof(array);
    printf("The number of elements in the array is:%d",n/sizeof(int));
}
