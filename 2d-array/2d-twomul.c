//program to reads the elements of two matrices A3*4 and B4*3, then verify B*A
//is not equal to a*b



//there are some mistake it needs to be fixed find it yourself and update the code and 
//hit pull request..
#include<stdio.h>
#include<conio.h>
int main(){
    int a[3][4],b[4][3],mul[3][3],mul_2[4][4],sum;
    //input matrix a..
    printf("Enter the element of 1st matrix:");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
        scanf("%d",&a[i][j]);
       }
    }
    //print matrix a.
    printf("The 1st matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
        printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    //input matrix b..
    printf("Enter the element of 2nd matrix:");
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
       }
    }
    //print matrix b.
    printf("The 2nd matrix is:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
        printf("%d ",b[i][j]);
       }
       printf("\n");
    }
    //multiplying matrix A*B..
    
    printf("The multiplication of matrix A*B is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=0;
         for(int k=0;k<3;k++){
         sum+=a[i][k]*b[k][j];
         }
         mul[i][j]=sum;
        }
    }
    //print matrix after multiplication.
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("%d ",mul[i][j]);
       }
       printf("\n");
    }
    //multiplying matrix B*A..
    
    printf("The multiplication of matrix B*A is:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            sum=0;
         for(int k=0;k<3;k++){
         sum+=b[i][k]*a[k][j];
         }
         mul_2[i][j]=sum;
        }
    }
    //print matrix after multiplication B*A..
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        printf("%d ",mul_2[i][j]);
       }
       printf("\n");
    }
    int result=sizeof(mul)!=sizeof(mul_2) ? printf("The matrix is not same") : printf("The matrix is same");
    
    return 0;
}