#include<stdio.h>
#include<conio.h>
int swap(int,int);
int main()
{
	 int a=0,b=0;
	 printf("\nEnter value for a:");
	 scanf("%d",&a);
	 printf("\nEnter value for b:");
	 scanf("%d",&b);
	 swap(a, b);
	 getch();
}
int swap(int a,int b)
{
	a=a-b;
	b=a+b;
	a=b-a;
	printf("\nAfter swap,Enter value for a: %d",a);
	printf("\nAfter swap,Enter value for b: %d",b);
	getch();
}
