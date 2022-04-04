#include <stdio.h>
#include <stdlib.h>

void main()
{
   char name[]="Harry Potter";
   printf("%c",*name);
   printf("%c",*(name+7));
   printf("%c",*(name+8));

   char *namePtr;
   namePtr=name;
   printf("%c",*namePtr);
   printf("%c",*(namePtr+7));
   printf("%c",*(namePtr+8));



     return 0;

}




