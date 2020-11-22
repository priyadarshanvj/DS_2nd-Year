#include<stdio.h>
#include<math.h>
main()
{
    int a,b;
    float c;
    char op;
    printf("Enter the operator(+,-,*,/)\n l for log\n s for sin\n c for cos\n t for tan\n r for square root \n p for finding power");
    scanf("%c",&op);
    if((op=='+')||(op=='-')||(op=='*')||(op=='/')||(op=='p'))
    {
        printf("Enter any two no(if you choose power fun then 2nd no is base):");
        scanf("%d%d",&a,&b);
    }
    else
    {
        printf("Enter any no for finding log sin cos tan square root");
        scanf("%d",&a);
    }
    switch(op)
    {
        case '+':c=a+b;
                 break;
        case '-':c=a-b;
                break;
        case '*':c=a*b;
                break;
        case '/':c=a/b;
                break;
        case 'p':c=pow(a,b);
                break;
        case 'l':c=log10(a);
                break;
        case 's':c=sin(a);
                break;
        case 'c':c=cos(a);
                break;
        case 't':c=tan(a);
                break;
        case 'r':c=sqrt(a);
                break;
    }
    printf("\nthe Answer is: %f",c);

}
