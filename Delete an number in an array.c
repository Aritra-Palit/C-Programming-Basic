#include<stdio.h>
#include<conio.h>
#define MAX 100
void main()
{
	 int arr[MAX],n,d;
	 printf("\n Enter the elements in the array:");
	 scanf("%d",&n);
	 printf("\n Enter the elements in the array:");
	 for(int i=0;i<n;i++)
	 {
		scanf("%d",&arr[i]);
	 }
	 printf("\n Enter the element num to delete in the array:");
	 scanf("%d",&d);
	 if(d<0||d>n)
	 {
		  printf("Invalid position");
	 }
	 else
	 {

		  for(i=d-1;i<n-1;i++)
		  {
				arr[i]=arr[i+1];
		  }
		  n--;
	 printf("\n The Final elements in the array:");
	 for(int o=0;o<n-1;o++)
	 {
		printf("\n element %d:%d",o+1,arr[o]);
	 }
	 }
	 getch();
}
