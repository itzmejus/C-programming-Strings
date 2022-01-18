#include <string.h>
#include <stdio.h>
void main()
{
    char str1[10], str2[10];
    printf("enter string 1");
    gets(str1);
    printf("enter string 2");
    gets(str2);
    strcat(str1, str2);
    printf("%s ", str1);
}