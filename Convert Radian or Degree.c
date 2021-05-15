#include<stdio.h>
#define PI 3.14
void main()
{
	float angle;
	int angletype;
	printf("\n Enter Angle:");
	scanf("%f",&angle);
	printf("\n Enter what to convert (DEG-1 OR RAD-2):");
	scanf("%d",&angletype);
	switch(angletype)
{
	case 1:
		angle*=PI/180.0;
      break;
	case 2:
		while(angle>PI)
			angle-= 2.0*PI;
		while(angle<-PI)
				angle+=2.0*PI;
	break;
	default:
		printf("Error: Invalid type\n");
	break;
}
	printf("\n The converted value is : %f",angle);
}

