#include<stdio.h>
 int main()
 {
    int a[10],i;
    printf("enter element in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            printf(" %d\n",a[i]);
        }
        // else{
        //     printf("%d\t",a[i]);

        // }
    }
 }