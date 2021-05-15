#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int l=0,i=0;
	char a[100];
	printf("\nEnter first String:");
	gets(a);
	while (a[i] != '\0')
    	i++;
	l=strlen(a);
	printf("%d , %d",l,i);
	if(i==l)
	{
		printf("\nBoth Length are same.");
	}
	else
	{
		printf("\nBoth Length are not same.");
	}
	return 0;
}
