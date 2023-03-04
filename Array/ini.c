//questions related to array.s
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    //initialize array at run time and print the value stored in it.........
    /*
    
    int arr1[2][3],sum=0;
    printf("enter 6 element of the matrix:\n");
     for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
         scanf("%d",&arr1[i][j]);
      }
     }
     for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
         sum+=arr1[i][j];
      }
     }
     printf("the sum of the number is:%d",sum);
    return 0;

*/

//program to print the transpose of the matrix......
/*
 int a[2][3],b[3][2];
 for(int i=0;i<2;i++){
   for(int j=0;j<3;j++){
     printf("Enter an element:");
     scanf("%d",&a[i][j]);
   }
 }
 for(int i=0;i<3;i++){
   for(int j=0;j<2;j++){
      printf("%d",a[j][i]);
   }
    printf("\n");
 }

*/
//program to add individual rows and columns
 int a[3][3],row=0,column=0;
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
 }
 
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      row+=a[i][j];
      column+=a[j][i];
    }
    printf("row=%d , column=%d\n",row,column);
 }
}