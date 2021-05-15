#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i=0;
    printf("Enter a string\n");
    gets(str);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("Length of string: %d\n", i);
    int l=strlen(str);
    if(i==l)
    printf("The calculation is correct");
    else
    printf("The calculation is incorrect");
}
