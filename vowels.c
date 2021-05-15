#include<stdio.h>
#include<string.h>
int main()
{
	int a,e,i,o,u;
	char x[50];
	a=e=i=o=u=0;
	printf("\nEnter a string:");
	gets(x);
	for(int j=0;j<50;j++)
	{
    		if(x[j]=='a'||x[j]=='A')
    		{
    			a=a+1;
			}
			else if(x[j]=='e'||x[j]=='E')
    		{
    			e=e+1;
			}
			else if(x[j]=='i'||x[j]=='I')
    		{
    			i=i+1;
			}
			else if(x[j]=='o'||x[j]=='O')
    		{
    			o=o+1;
			}
			else if(x[j]=='u'||x[j]=='U')
    		{
    			u=u+1;
			}
	}
	printf("\n a=%d , e=%d , i=%d, o=%d, u =%d ",a,e,i,o,u);
	return 0;
}
