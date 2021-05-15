/*  C program to count number of vowels and consonants in a string using pointer  */
#include<stdio.h>
int main()
{
	 char str[100];
    char *ptr;
	 int cntV,cntC;
	 printf("Enter any string : ");
    gets(str);
	//assign address of str to ptr
    ptr=str;
	 cntV=cntC=0;
    while(*ptr!='\0')
	 {
		  if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
				cntV++;
		  else if(*ptr!=' ' || *ptr!='A' ||*ptr!='E' ||*ptr!='I' ||*ptr!='O' ||*ptr!='U' ||*ptr!='a' ||*ptr!='e' ||*ptr!='i' ||*ptr!='o' ||*ptr!='u')
				cntC++;
		  //increase the pointer, to point next character
		  ptr++;
	 }
	 printf("\nTotal number of VOWELS : %d and CONSONANTS : %d\n",cntV,cntC);
	 return 0;
}