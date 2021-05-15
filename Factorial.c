#include<stdio.h>
void main()
{
	float n,ans=1;
   printf("\n Enter the value of n:");
	scanf("%f",&n);
	for(float i=1;i<=n;i++)
	{
		 ans=ans*i;
	}
	printf("\n The answer is %f",ans);
}


