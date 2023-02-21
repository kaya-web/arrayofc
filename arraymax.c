#include<stdio.h>
 int main()
 {
    int a[5],i,temp,max;
    printf("enter value in array\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<5;i++)
    {
      if(a[i]>max)
      {
        temp=a[i];
        a[i]=max;
        max=temp;
      }
    }
    printf("%d is max",max);

    return 0;
 }
 