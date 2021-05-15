#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
{
	 int arr[MAX],min, max;
	 printf("\n Enter %d numbers:",MAX);
	 for(int j=0;j<MAX;j++)
	 {
		scanf("%d",&arr[j]);
	 }
	 min=max=arr[0];
	 for(int i=0;i<MAX;i++)
	 {
		  if(arr[i]<min)
		  {
				min=arr[i];
		  }

		  if(arr[i]>max)
		  {
				max=arr[i];
		  }
	 }
	 printf("\n Minimum number = %d",min);
	 printf("\n Maximum number = %d",max);
	 getch();
}