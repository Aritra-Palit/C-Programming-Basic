#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int sub(int a,int b);
int multi(int a,int b);
int div(int a,int b);
void main()
{
	 int a,b,option,ans;
	 printf("\n Enter 1st num:");
	 scanf("%d",&a);
	 printf("\n Enter 2st num:");
	 scanf("%d",&b);
	 printf("\n Enter Option [1-Addition, 2-Subtraction, 3-Multiplication. 4-Division:");
	 scanf("%d",&option);
	 if(option==1)
	 {
		ans=add(a,b);
	 }
	 else if(option==2)
	 {
		ans=sub(a,b);
	 }
	 else if(option==3)
	 {
		ans=multi(a,b);
	 }
	 else if(option==4)
	 {
		ans=div(a,b);
	 }
	 printf("\n Answer is %d:",ans);
	 getch();
}
int add(int a,int b)
{
	 int x;
	 x=a+b;
	 return x;
}
int sub(int a,int b)
{
	 int y;
	 y=a-b;
	 return y;
}
int multi(int a,int b)
{
	 int z;
	 z=a*b;
	 return z;
}
int div(int a,int b)
{
	 int u;
	 u=a+b;
	 return u;
}
