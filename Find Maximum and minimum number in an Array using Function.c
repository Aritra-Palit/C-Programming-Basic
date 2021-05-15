#include<stdio.h>
#include<conio.h>
#define MAX 10
int max(int arr[]);
int min(int arr[]);
void main()
{
	 int arr[MAX],mini, maxi;
	 printf("\n Enter %d numbers:",MAX);
	 for(int j=0;j<MAX;j++)
	 {
		scanf("%d",&arr[j]);
	 }
	 mini=min(arr);
	 maxi=max(arr);
	 printf("\n Minimum number = %d",mini);
	 printf("\n Maximum number = %d",maxi);
	 getch();
}
int min(int arr[])
{
  int h;
  h=arr[0];
  for(int i=0;i<MAX;i++)
	 {
		if(arr[i]<h)
		  {
				h=arr[i];
		  }
		}
		return h;
}

int max(int arr[])
{
	int g;
	g=arr[0];
	for(int i=0;i<MAX;i++)
	 {
		if(arr[i]>g)
		  {
				g=arr[i];
		  }
	 }
	 return g;
}
