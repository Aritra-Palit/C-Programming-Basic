#include<stdio.h>
#include<conio.h>
void main()
{
	 int n=10;
	 int arr[11],a=0,item,i;
	 printf("\n Enter the elements in the array:");
	 for(i=0;i<n;i++)
	 {
		scanf("%d",&arr[i]);
	 }
	 printf("\n Enter the item number to search:");
	 scanf("%d",&item);
	 for(i=0;i<n;i++)
	 {
		if(arr[i]==item)
		{
			printf("\n It is present");
			a=1;
		}
	 }
	 if(a!=1)
		{
			++n;
			arr[10]=item;
		}
	printf("\n The Final elements in the array:");
	for(i=0;i<n;i++)
	 {
		printf("\n %d",arr[i]);
	 }
	getch();
}
