#include<stdio.h>
void main()
{ int s=0,i;
for(i=9;i<=300;i++)
{ if(i%7==0)
{ if(i%63!=0)
{ s=s+i;
}
}}
printf("Sum is %d",s);
}

