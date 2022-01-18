#include <string.h>
#include <stdio.h>
void main()
{   
   
    char str1[10];
    printf("enter string ");
    gets(str1);
    strlwr(str1);
    printf("%s ", str1);
}