#include<stdio.h>
int main()
{
    int a[5],i,min,temp;
    printf("enter value in array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<5;i++)
    {

    
    if(a[i]<min)
    {
        temp=a[i];
        a[i]=min;
        min=temp;
    }


    }
    printf("%d",min);
}