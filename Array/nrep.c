//program to print all non repeated elements in an array.
/*
#include<stdio.h>
#include<conio.h>
void main(){
    int size,num,c,count;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int arr[size];   
    for(int i=0;i<size;i++){
      printf("Enter an element:");
      scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
      c=0;
      for(int j=0;j<size;j++){
         if(arr[i]==arr[j] && i!=j){
            c++;
            break;
         }
      }
      if(c==0){
          printf("%d",arr[i]);
      }
    }
    
 }
 */


  //separate odd and even integers in separate array named even and odd.


//there is some problem in this code i.e. the value of even and odd 
//while storing in even or odd array the value is not stored in contiguous 
//form.So, that's the challenge to store the value in particular array
//in contiguous form without any gap in the elements in array..


#include<stdio.h>
 #include<conio.h>
 void main(){
   int num;
    printf("Enter the size of an array:");
    scanf("%d",&num);
    int even[num],odd[num],arr[num];
    //entering the element by the user  at run time.
    for(int i=0;i<num;i++){
      printf("Enter the element of an array:");
      scanf("%d",&arr[i]);
    }
    //main logic to this question.
    printf("The elements in the array input by the user are:\n");
    for(int i=0;i<num;i++){
       if(arr[i]%2==0){
        //if condition is passed then the value in 
        //the index will be stored in the array named even
           
            even[i]=arr[i];
       }else{
        //if the condition is not passed then the value in
        //the index will be stored in the array named odd

          odd[i]=arr[i];
       }
       
       printf("%d ",arr[i]);//printing of an array..
    }
    printf("\n");
    //printing the element in even and odd named array.
     //for even..
     printf("The even elements stored in array named even are:");
     for(int i=0;i<num;i++){
        if(even[i]==arr[i]){
         printf("%d ",even[i]);
         
        }else{
         continue;   
        }
     }
     //for odd
     printf("\n");
     printf("The odd elements stored in array named odd are:");
     for(int i=0;i<num;i++){
        if(odd[i]==arr[i]){
           printf("%d ",odd[i]);
        }else{
          continue;
        }
     }
    
 }


