/* 
PURITY TAIKU
CT100/G/26152/25
DESCRIPTION:A while loop program on number guessing game
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
