//program to multiply the given two matrix and find the resultant matrix..


//here aree some areas where it can be improved so please try it and 
//hit pull request.
//Hint..using function might be good and assigning row column of each matrix at run time might help to write code in easier way.

#include<stdio.h>
#include<conio.h>
int main(){
    //input first matrix value.
    int a[2][3],b[3][2],mltply[2][3],sum;
     printf("Enter first matrix:");
     for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
       scanf("%d",&a[i][j]);
      }
     }
     //printing first matrix.
     printf("\n");
     printf("The first matrix is:\n");
     for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){ 
        printf("%d ",a[i][j]);
      }
      printf("\n");
     }
     //input second matrix value.
     printf("Enter second matrix:");
     for(int i=0;i<3;i++){
      for(int j=0;j<2;j++){
       scanf("%d",&b[i][j]);
      }
     }
     //printing second matrix.
     printf("The second matrix:\n");
     for(int i=0;i<3;i++){
      for(int j=0;j<2;j++){
      printf("%d ",b[i][j]);
      }
      printf("\n");
     }
      if(3==3){
      
      for(int i=0;i<3;i++){
      for(int j=0;j<2;j++){
        sum=0;
        for(int k=0;k<3;k++){
         sum+=a[i][k]*b[k][j];
         
      }
      mltply[i][j]=sum;
      }
      printf("\n");
     }
      }
      printf("\n");
      for(int i=0;i<2;i++){
         for(int j=0;j<2;j++){
          printf("%d ",mltply[i][j]);
         }
         printf("\n");
      }
     return 0;
}
    
