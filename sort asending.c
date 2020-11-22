#include<stdio.h>
void main()
{
    int a[5],i,b,c;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    b=a[0];
    for(i=0;i<3;i++)
    {
        if(b<a[i])
         {
            a[i-1]=b;


        }
        else
        {
             b=a[i];
        }

}

    for(i=0;i<3;i++)
        printf("%d",a[i]);
}
