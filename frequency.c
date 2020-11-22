#include<stdio.h>
void main()
{
    int a[10],i,c;
    printf("Enter the elements");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {   c=0;
        for(int j=0;j<10;j++)
        {
            if(a[i]==a[j])
                c++;
        }
        printf("\nThe frequency of %d is %d",a[i],c);
    }
}
