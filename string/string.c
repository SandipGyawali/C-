/*
These are some of the inbuild library function of string and also done without using inbuild functions.

*/

#include<stdio.h>
#include<string.h>
void using_strlen(),notUsing_strlen(),using_strcat(),notUsing_strcat(),using_strcmp(),notUsing_strcmp();
void using_strrev(),notUsing_strrev(),using_strlower(),notUsing_strlower();
int main(){
 // using_strlen();
 //notUsing_strlen(); 
 //using_strcat(); 
 //notUsing_strcat();
 //using_strcmp(); 
 //notUsing_strcmp(); 
 //using_strrev();
 //notUsing_strrev();
 //using_strlower(); 
  notUsing_strlower(); 
  return 0;
}
//finding length of a string with in build function..
void using_strlen(){
  char name[30];
  printf("Enter a name:");
  gets(name);
  int len=strlen(name);
  printf("The length of a string:%d",len);
}
//finding length of a string without in build function
void notUsing_strlen(){
  char name[30];
  int count=0;
  printf("ENter a name:");
  scanf("%s",name);
  for(int i=0;name[i]!='\0';i++){
    count++;
  }
  printf("THe length of a string is:%d",count);
}
//concatenating strings using in build function.
void using_strcat(){
  char name[10]="Sandip";
  char s_name[10]="Gyawali";
  int len=strlen(name);
  if(sizeof(name)>15){
     
     strcat(name,s_name);
      printf("%s\n",name);
   }else{
    printf("The string  is over flowed..");
  }
  
  }
//concatenating strings without in build function.
void notUsing_strcat(){
  char name[30]="Sandip";
  char s_name[10]="Gyawali";
  int len1=strlen(name);
  int len2=strlen(s_name);
  for(int i=0;i<=len2;i++){
    name[len1+i]=s_name[i];
  }
  printf("%s\n",name);
}
//comparing two string using in build function..
void using_strcmp(){
 char n1[10]="Sandip";
 char n2[10]="SandiP";
 int val=strcmp(n1,n2);
if(val==0){
  printf("The string is same");

}else{
  printf("The string is not same");
 }
}
//comparing two string without using in build function..
void notUsing_strcmp(){
  char n[10]="Sandip";
  char n2[10]="SandiP";
  int flag;
  for(int i=0;n[i]!='\0' || n2[i]!='\0';i++){
    if(n[i]!=n2[i]){
      flag=1;
      break;
    }
  }
   if(flag==1){
     printf("The string is not same.");
   }else{
    printf("The string is not same.");
   }
}
//reversing a string using in build function..
void using_strrev(){
  char str[10]="Sandip";
  strrev(str);
  printf("%s",str);
}
//reversing a string without using in build function..
void notUsing_strrev(){
  char s[10]="Sandip";
  char temp;
  int len=strlen(s);
  for(int i=0;i<len/2;i++){
      temp=s[i];
      s[i]=s[len-1-i];
      s[len-1-i]=temp;
  }
  printf("The string after reversed is:%s",s);
}
//changing a uppercase string to lower case using in build function..
void using_strlower(){
  char name[10]="SANDIP";
  strlwr(name);
  printf("%s",name);
  }
//changing a uppercase string to lower case without using in build function..
void notUsing_strlower(){
  char name[10]="SANDIP";
  int len=strlen(name);
  for(int i=0;name[i]!='\0';i++){
    if(name[i]>=65 && name[i]<=90){
          name[i] +=32;

    }
  }
  printf("%s",name);
}



//program to read a string and count the number of vowels and consonants in it.
//vowels a to u
//consonants b to z
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
     char str[10],vowel=0,consonant=0;
     gets(str);
     printf("The string is:%s\n",str);
     int i=0;
     while(str[i]!='\0'){
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
         vowel++;
            else
            consonant++;
            i++;
     }
     printf("The number of vowel is:%d\n",vowel);
     printf("The number of consonant is:%d",consonant);

    return 0;
}



//print the string in upper case letter.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
     char str[10]="SANdip";
     for(int i=0;str[i]!='\0';i++){
       if(str[i]>=97 && str[i]<=122){
          str[i]-=32;
       }
     }
     printf("The upper case string is:%s",str);
    return 0;
}