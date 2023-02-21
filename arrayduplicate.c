#include<stdio.h>
 int main()
 {
    int a[5],i,j,dup;
    printf("enter value in array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                dup=a[i];
            }
        }
    }

    printf("%d",dup);
 }