#include<stdio.h>
#include<string.h>
int main()
{
	int l=0,i;
	char a[100],b[100],c[100];
	printf("\nEnter a string A:");
	gets(a);
	strcpy(b,a);
	printf("\nString B:");
	puts(b);
	while(a[l]!='\0')
	{
    	l++;
	}
	for(i=0;i<l;i++)
	{
		c[i]=a[i];
	}
	printf("\nString C:");
	puts(c);
}
