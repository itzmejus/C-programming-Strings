#include <string.h>
#include <stdio.h>
void main()
{   
    int value;
    char str1[10], str2[10];
    printf("enter string 1");
    gets(str1);
    printf("enter string 2");
    gets(str2);
    value= strcmp(str1, str2);
    if(value=='\0'){

    printf("bOTH STRING are same\n");
    }
    else
    {
        printf("not same");
        
    }
}