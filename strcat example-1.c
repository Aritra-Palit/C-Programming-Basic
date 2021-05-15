#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	printf("\nEnter first String:");
	gets(a);
	printf("\nEnter second String:");
	gets(b);
	printf("\nwithout function:");
	printf("\n %s%s",a,b);
	printf("\nwith function:\n");
	strcat(a,b);
	puts(a);
	return 0;
}
