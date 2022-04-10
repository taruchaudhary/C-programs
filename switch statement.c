#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ch;
    printf("enter m for Monday\nt for Tuesday\nw for Wednesday\nth for Thursday\nf for Friday\ns for Saturday\nsu for Sunday");
    scanf("%c",&ch);
    switch(ch)
    {
    case'm':
    case'M':
        break;
    case't':
    case'T':
        break;
    case'w':
    case'W':
        break;
    case'th':
    case'TH':
        break;
    case'f':
    case'F':
        break;
    case's':
    case'S':
        break;
    case'su':
    case'SU':
        break;
        default:
        printf("error!");
        break;

    }
    return 0;
}




