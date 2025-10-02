/*
PURITY TAIKU
CT100/G/26152/25
DESCRIPTION:EXAM ELIGIBILITY
*/
#include <stdio.h>

int main()
{
int average_mark;
float attendance;
printf("Enter your attendance: ");	
scanf("%f",&attendance);

printf("enter your average_mark: ");
scanf("%d", &average_mark);

if(attendance>=0.75){
	printf("You are eligible for the final exam");
}
else if(average_mark>=40)
{
printf("You are eligible for the final exam");	
}

else
{
	printf("You are not eligible for the final exam");
}

	return 0;
}