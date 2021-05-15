#include<stdio.h>
int leap(int);
int main()
{
	 int year;
	 printf("Enter Year:");
	 scanf("%d",&year);
	 leap(year);
	 return 0;
	 
}
int leap(int year)
{
	if(year%400==0)
	{
		printf("\n It is a leap year");
	}
	else if(year%100==0)
	{
		printf("\n It is not a leap year");
	}
	else if(year%4==0)
	{
		printf("\n It is a leap year");
	}
	else
	{
		printf("\n It is not a leap year");
	}
	return 0;
}
