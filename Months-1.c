#include<stdio.h>
int main(void)
{
	char *months[]={"illegal","January","February","March","April","May","June","July","August","September","October","November","December"};
	int i,j;
	printf("Input an integer between 1 and 12:");
	scanf("%d",&i);
	if(i<1||i>12)
		i=0;
	printf("Month number %d is %s.\n",i,months[i]);/* print string*/
	printf("\n The letters of the month are:");
	for(j=0;months[i][j]!='\0';++j)/*access elements using [][]*/
		printf("%c",months[i][j]);
}
