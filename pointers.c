#include<stdio.h>
main()
{
    int a[5]={10,20,30,40,50};
    int *ptr=a;
    printf("%u\n",*++ptr+3);
    printf("%u\n",*(ptr--+2)+5);
    printf("%u\n",*(ptr+3)-10);
}
