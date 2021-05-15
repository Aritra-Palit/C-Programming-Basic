#include<stdio.h>
int main()
{
/*Pointer of integer type, this can hold the *address of a integer type variable. */
int *p; int var=10;
/* Assigning the address of variable var to the pointer *p. The p can hold the address of var because var is * an integer type variable. */
p=&var;
printf("Value of variable var is:%d ",var);
printf("\nAddress of variable var is:%p ",p);
printf("\nValue of variable var is:%d ",*p);
printf("\nAddress of variable var is:%p ",&var);
printf("\nAddress of variable var is:%d ",*(&var));
printf("\nAddress of variable p is:%p ",p);
printf("Address of pointer p is:%p ",&p);
return 0;
}
