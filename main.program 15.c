#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,n,s,m,su,d;
    printf("enter two number: ");
    scanf("%d%d",&a,&b);
    printf("enter 1 for sum\n 2 for multiply\n 3 for subtraction\n 4 for division: ");
    scanf("%d",&n);
    switch(n)
    {
    case1:
    s=a+b;
        printf("sum=%d",s);
        break;
    case2:
    m=a*b;
        printf("multiply=%d",m);
        break;
    case3:
    su=a-b;
        printf("subtraction=%d",su);
        break;
    case4:
    d=a/b;
        printf("division=%d",d);
        break;
    default:
        printf("wrong input");
        break;

    }
    return 0;
}






