#include<stdio.h>
void main()
{
    int a[5],i,b=0;
    for(i=0;i<5;i++)
    {
        printf("Enter no:");
        scanf("%d",&a[i]);
    }
    b=a[1];
    for(i=0;i<5;i++)
    {
        if(b>a[i])
        {   b=a[i];
            printf("%d",(i+1));
        }
    }
}
