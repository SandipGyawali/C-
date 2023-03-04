
program to read a matrix of size M*N from
user and display it on screen.
*/
/*
#include<stdio.h>
#include<conio.h>
void main(){
    int arr[2][3];
    printf("Enter the elements of the matrix:");
    for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
         scanf("%d",&arr[i][j]);
     }
  }
  for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
    printf("%d ",arr[i][j]);
     }
     printf("\n");
  }
}





//program to read two M*N matrices and display their 
//sum and differences..
#include<stdio.h>
int main(){
    int arr1[2][3],arr2[2][3],sum[2][3],diff[2][3];
    printf("Enter the element of first matrix:");
    //running loop to get  the element of matrix 1 from the user at run time.
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    //printing first matrix
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    //running loop to get the element of matrix 2 from the user at run time
    printf("Enter the element of second matrix:");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    //printing second matrix
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    //sum and difference of two matrix.
      for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           sum[i][j]=arr1[i][j]+arr2[i][j];
           diff[i][j]=arr1[i][j]-arr2[i][j];
        }
      }
      //printing sum of two matrix whose value is stored in array named sum.
      printf("the sum of the two matrix is:\n");
      for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           printf("%d ",sum[i][j]);
        }
        printf("\n");
      }
      //printing difference of two matrix whose value is stored in array named diff.
      printf("the difference of two matrix is:\n");
      for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           printf("%d ",diff[i][j]);
        }
        printf("\n");
      }
    return 0;
}























