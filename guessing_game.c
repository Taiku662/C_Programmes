/* 2. Write a C program that implements a number guessing game. The computer should generate a
random number in the range 1 to 20 (inclusive). The program should repeatedly prompt the
player to enter a guess and then respond with one of the following messages:
• "Too high!" if the guess is greater than the secret number.
• "Too low!" if the guess is less than the secret number.
• "Congratulations!" if the guess is equal to the secret number.The program must also count and display the total number of attempts it took for the player to
guess correctly.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
//INITIALIZE RANDOM NUMBER GENERATOR
	srand(time(NULL));
	
int guess,tries=0;
int min=1;
int max=20;
//Generate a random number between 1 to 20
int answer=(rand()%(max-min+1),min);

printf("***NUMBER GUESSING GAME*** \n");
printf("guess a number between %d - %d :", min,max);
scanf("%d",& guess);
tries ++;

if(guess<answer){
	printf("TOO LOW!");
}else if(guess>answer)
{
	printf("TOO HIGH");
}
else
{
	printf("CONGRATULATIONS! \n");
}
while(guess!=answer);
{
printf("the answer is %d",answer);
printf("it took you %d tries",tries);	
}
	
	return 0;
}