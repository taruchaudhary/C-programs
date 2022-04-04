#include <stdio.h>
#include <stdlib.h>

void main()
{
    int ch;
    printf("enter m for Monday\n t for Tuesday\n w for Wednesday\n th for Thursday\n f for Friday\n s for Saturday\n su for Sunday");
    scanf("%d",&ch);
    switch(ch)
    {
    case'm':
    case'M':
        printf("monday");
        break;
    case't':
    case'T':
        printf("tuesday");
        break;
    case'w':
    case'W':
        printf("wednesday");
        break;
    case'th':
    case'TH':
        printf("thursday");
        break;
    case'f':
    case'F':
        printf("friday");
        break;
    case's':
    case'S':
        printf("saturday");
        break;
    case'su':
    case'SU':
        printf("sunday");
        break;
    default:
        printf("wrong input");
        break;

    }
    return 0;
}






