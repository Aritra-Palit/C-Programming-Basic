#include<stdio.h>
int n=0;
int fact();
void main()
{
	 int u=0;
	 printf("Enter value for n:");
	 scanf("%d",&n);
	 u=fact();
	 printf("factorial:%d",u);
}
int fact()
{
	int s=1;
	for(int i=1;i<=n;i++)
	 {
		  s=s*i;
	 }
	return s;
}