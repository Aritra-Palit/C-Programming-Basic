#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nEnter 1st number:");
	scanf("%d",&a);
	printf("\nEnter 2nd number:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\n%d is bigger",a);
	}
	else if(a<b)
	{
		printf("\n%d is bigger",b);
	}
	else 
	{
		printf("\nBoth are same");
	}
	return 0;
}