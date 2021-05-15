#include<stdio.h>
#include<string.h>
int main()
{
	 char arr[15];
	 printf("\nEnter a String:");
	 gets(arr);
	 int i, j,length=strlen(arr);
	 int f[15];
	for(i=0;i<strlen(arr);i++)
	{
		  f[i] = 1;
		  for(j=i+1;j<strlen(arr);j++)
		{
				if(arr[i] == arr[j])
			{
					 f[i]++;
					 arr[j] = '0';
				}
		  }
	 }

	 printf("\nfrequency of occurence:\n");
	 for(i=0;i<length; i++)
	 {
		  if(arr[i]!=' '&&arr[i]!='0')
				printf("%c-%d\n",arr[i],f[i]);
	 }
	return 0;

}
