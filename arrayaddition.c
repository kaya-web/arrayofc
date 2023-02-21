#include<stdio.h>
 int arrayAdd(int*);
 int main()
 {
    int a[5],i,res;
    printf(" enter value in array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    res=arrayAdd(a);
    printf("%d",res);
    

 }
 int arrayAdd(int*a)
 {
    int i,sum=0;
    for(i=0;i<5;i++)
    {
       sum=sum+a[i];
    }
    // printf("%d is sum",sum);
    return sum;
 }