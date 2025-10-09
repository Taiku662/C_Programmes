/*
PURITY TAIKU
CT100/G/26152/25
DESCRIPTION:a do while loop prompting the user to enter the password
*/

#include <stdio.h>
#include <string.h>

int main()
{
char entered_password[20];
const char correct_password []="1234";
printf("**PASSWORD ENTRANCE**");

// do_while loop password validation
do{
	printf("Enter password:");
	scanf("%s",entered_password);
	
	if(strcmp(entered_password,correct_password)!=0);
	{
		printf("incorrect password,please try again  \n");

	}	
} while(strcmp(entered_password,correct_password)!=0);
{
printf("Entrance granted!Welcome to the system \n");	
}

	return 0;
}