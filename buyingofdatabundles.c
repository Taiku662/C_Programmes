/*
PURITY TAIKU
CT100/G/26152/25
A program of purchasing mobile data bundles
*/
#include <stdio.h>
int main()
{
int choice;
printf("Mobile data offers: \n");
printf("|option|bundles|cost(KES)| \n");
printf("|....|....|....|");
printf("|1|100MB|50| \n");
printf("|2|500MBS|200| \n");
printf("|3|1GB|350| \n");
printf("|4|2GB|600|");

printf("enter your choice from 1-4 :\n");
scanf("%d",choice);

switch(choice)
{
case 1:
printf("Your selection:100MB \n");
printf("cost:50KES \n");
	break;

case 2:
	printf("your selection:500MBS \n");
	printf("cost:200KES \n");
	break;

case 3:
	printf("your selection:1GB |n");
	printf("cost:350KES \n");
	break;

case 4:
	printf("your selection:2GB \n");
	printf("cost:600KES \n");
	break;

default:
	printf("Invalid choice!select choice 1-4. \n");
	break;
}
	
	return 0;

}
