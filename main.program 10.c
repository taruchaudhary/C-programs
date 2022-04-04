#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    if((a>b)&&(a>c))
        printf("a is greatest");
    if((b>c)&&(b>a))
        printf("b is greatest");
    if((c>a)&&(c>b))
        printf("c is greatest");






     return 0;

}




