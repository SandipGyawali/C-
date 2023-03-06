//question related to pointer..
//nasalize yourself..
// this programme will boost the concept of pointer,associativity and precedence order.

#include<stdio.h>
int main(){
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    printf("%d\n",*p);
    printf("%d %d %d\n",(*p)++,*p++,*++p);
    q=p+3;
    printf("%d\n",*q-3);
    printf("%d\n",*--p+5);
    printf("%d\n",*p+*q);
    return 0;
}


//2nd problem.....try to dry run and solve
#include<stdio.h>
int main(){
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    q=&a[0]+3;
    printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
    printf("%d\n",*p);
    printf("%d\n",(*p)++);
    printf("%d\n",(*p)++);
    q--;
    printf("%d\n",(*(q+2))--);
    printf("%d\n",*(p+2)-2);
    printf("%d\n",*(p++-2)-1);
    return 0;
}