#include <stdio.h>
#define SWAP(a,b,tmp)\
 {\
 tmp=a;\
  a=b;\
   b=tmp;\
   }

int main(){
	int c,d,temp;
	printf("Enter Two Numbers: ");
	scanf("%d %d",&c,&d);
	SWAP(c,d,temp);
	printf("The value in Variable 'C' is %d",c);
	printf("\n The value in Variable 'D' is %d",d);
	return 0;
}
