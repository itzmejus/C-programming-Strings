#include <string.h>
#include <stdio.h>
void main(){
    int count=0,i=0;
    char name[10];
    printf("Enter the name");
    gets(name);
    while (name[i]!='\0')
    {
        count++;
        i++;
    }
    
    puts(name);
    printf("Count is %d",count);
}