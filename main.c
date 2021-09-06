#include<stdio.h>
void main ()
{
    int a, b, c;
    char op;
    printf("enter the values of a and b\n");
    scanf("%d%d", &a, &b);
    printf("enter the sign of operator:\n");
    scanf(" %c", &op);

    if (op== '+')
    {
        c=a+b;
        printf("%d+%d=%d",a ,b ,c);
    }


    else if (op== '-')
    {
        c=a-b;
        printf("%d-%d=%d",a ,b ,c);
    }
    else if (op== '*')
    {
        c=a*b;
        printf("%d*%d=%d",a ,b ,c);
    }
    else if (op== '/')
    {
        c=a/b;
        printf("%d/%d=%d",a ,b ,c);
    }
}
